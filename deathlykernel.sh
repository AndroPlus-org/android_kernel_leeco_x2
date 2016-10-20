#!/bin/bash
rm .version
# Bash Color
green='\033[01;32m'
red='\033[01;31m'
blink_red='\033[05;31m'
restore='\033[0m'

clear

# Resources
THREAD="-j$(grep -c ^processor /proc/cpuinfo)"
KERNEL="Image"
DTBIMAGE="dtb"
DEFCONFIG="x2_defconfig"

# Kernel Details
VER=".R1.x2."

# Paths
KERNEL_DIR=`pwd`
REPACK_DIR="/1TB_HDD/Sean/caf/deathly/"
MODULES_DIR="/1TB_HDD/Sean/caf/android_kernel_leeco_msm8996/modules"
ZIP_MOVE="/1TB_HDD/Sean/caf/deathly/"
ZIMAGE_DIR="/1TB_HDD/Sean/caf/android_kernel_leeco_msm8996/arch/arm64/boot"

# Functions
function clean_all {
		rm -rf $MODULES_DIR/*
		cd /1TB_HDD/Sean/caf/android_kernel_leeco_msm8996/out/kernel
		rm -rf $DTBIMAGE
		cd $KERNEL_DIR
		echo
		make clean && make mrproper
}

function make_kernel {
		echo
		make $DEFCONFIG
		make $THREAD
		
}

function make_modules {
		rm `echo $MODULES_DIR"/*"`
		find $KERNEL_DIR -name '*.ko' -exec cp -v {} $MODULES_DIR \;
}

function make_dtb {
		$REPACK_DIR/tools/dtbToolCM -2 -o $REPACK_DIR/$DTBIMAGE -s 2048 -p scripts/dtc/ arch/arm64/boot/dts
}

function make_boot {
		cp -vr $ZIMAGE_DIR/Image.gz-dtb /1TB_HDD/Sean/caf/android_kernel_leeco_msm8996/out/kernel/zImage
		
}


function make_zip {
		cd /1TB_HDD/Sean/caf/android_kernel_leeco_msm8996/out
		zip -r9 `echo $AK_VER`.zip *
		mv  `echo $AK_VER`.zip $ZIP_MOVE
		cd $KERNEL_DIR
}


DATE_START=$(date +"%s")


echo -e "${green}"
echo "-----------------"
echo "Making Deathly Kernel:"
echo "-----------------"
echo -e "${restore}"

while read -p "Do you want to use UBERTC 4.9(1), UBERTC 5.3(2), UBERTC 6.0(3), UBERTC 7.0(4)? " echoice
do
case "$echoice" in
	1 )
		export CROSS_COMPILE=/1TB_HDD/Sean/caf/aarch64-linux-android-4.9-kernel/bin/aarch64-linux-android-
		TC="UBER4.9"
		echo
		echo "Using UBERTC 4.9"
		break
		;;
	2 )
		export CROSS_COMPILE=/1TB_HDD/Sean/caf/aarch64-linux-android-5.3-kernel/bin/aarch64-linux-android-
		TC="UBER5.3"
		echo
		echo "Using UBERTC 5.3"
		break
		;;
	3 )
		export CROSS_COMPILE=/1TB_HDD/Sean/caf/aarch64-linux-android-6.0-kernel/bin/aarch64-linux-android-
		TC="UBER6.0"
		echo
		echo "Using UBERTC 6.0"
		break
		;;
	4 )
		export CROSS_COMPILE=/1TB_HDD/Sean/caf/aarch64-linux-android-7.0-kernel/bin/aarch64-linux-android-
		TC="UBER7.0"
		echo
		echo "Using UBERTC 7.0"
		break
		;;
	* )
		echo
		echo "Invalid try again!"
		echo
		;;
esac
done

# Vars
BASE_AK_VER="Deathly"
AK_VER="$BASE_AK_VER$VER$TC"
export ARCH=arm64
export SUBARCH=arm64

echo

while read -p "Do you want to clean stuffs (y/n)? " cchoice
do
case "$cchoice" in
	y|Y )
		clean_all
		echo
		echo "All Cleaned now."
		break
		;;
	n|N )
		break
		;;
	* )
		echo
		echo "Invalid try again!"
		echo
		;;
esac
done

echo

while read -p "Do you want to build (y/n)?" dchoice
do
case "$dchoice" in
	y|Y )
		make_kernel
		make_dtb
		make_modules
		make_boot
		make_zip
		break
		;;
	n|N )
		break
		;;
	* )
		echo
		echo "Invalid try again!"
		echo
		;;
esac
done


echo -e "${green}"
echo "-------------------"
echo "Build Completed in:"
echo "-------------------"
echo -e "${restore}"

DATE_END=$(date +"%s")
DIFF=$(($DATE_END - $DATE_START))
echo "Time: $(($DIFF / 60)) minute(s) and $(($DIFF % 60)) seconds."
echo