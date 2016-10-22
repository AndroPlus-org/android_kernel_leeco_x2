cmd_arch/arm64/boot/dts/qcom/apq8096-v3.0-pmi8994-pm8004-cdp.dtb := ../scripts/gcc-wrapper.py aarch64-linux-android-gcc -E -Wp,-MD,arch/arm64/boot/dts/qcom/.apq8096-v3.0-pmi8994-pm8004-cdp.dtb.d.pre.tmp -nostdinc -I../arch/arm64/boot/dts -I../arch/arm64/boot/dts/include -I../drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm64/boot/dts/qcom/.apq8096-v3.0-pmi8994-pm8004-cdp.dtb.dts.tmp ../arch/arm64/boot/dts/qcom/apq8096-v3.0-pmi8994-pm8004-cdp.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm64/boot/dts/qcom/apq8096-v3.0-pmi8994-pm8004-cdp.dtb -b 0 -i ../arch/arm64/boot/dts/qcom/  -d arch/arm64/boot/dts/qcom/.apq8096-v3.0-pmi8994-pm8004-cdp.dtb.d.dtc.tmp arch/arm64/boot/dts/qcom/.apq8096-v3.0-pmi8994-pm8004-cdp.dtb.dts.tmp ; cat arch/arm64/boot/dts/qcom/.apq8096-v3.0-pmi8994-pm8004-cdp.dtb.d.pre.tmp arch/arm64/boot/dts/qcom/.apq8096-v3.0-pmi8994-pm8004-cdp.dtb.d.dtc.tmp > arch/arm64/boot/dts/qcom/.apq8096-v3.0-pmi8994-pm8004-cdp.dtb.d

source_arch/arm64/boot/dts/qcom/apq8096-v3.0-pmi8994-pm8004-cdp.dtb := ../arch/arm64/boot/dts/qcom/apq8096-v3.0-pmi8994-pm8004-cdp.dts

deps_arch/arm64/boot/dts/qcom/apq8096-v3.0-pmi8994-pm8004-cdp.dtb := \
  ../arch/arm64/boot/dts/qcom/apq8096-v3.0.dtsi \
  ../arch/arm64/boot/dts/qcom/msm8996-v3.0.dtsi \
  ../arch/arm64/boot/dts/qcom/msm8996-v3.dtsi \
  ../arch/arm64/boot/dts/qcom/msm8996.dtsi \
  ../arch/arm64/boot/dts/qcom/skeleton64.dtsi \
  ../arch/arm64/boot/dts/include/dt-bindings/clock/msm-clocks-8996.h \
  ../arch/arm64/boot/dts/qcom/msm8996-ion.dtsi \
  ../arch/arm64/boot/dts/qcom/msm8996-mdss.dtsi \
  ../arch/arm64/boot/dts/qcom/msm8996-mdss-pll.dtsi \
  ../arch/arm64/boot/dts/qcom/msm8996-smp2p.dtsi \
  ../arch/arm64/boot/dts/include/dt-bindings/interrupt-controller/arm-gic.h \
  ../arch/arm64/boot/dts/include/dt-bindings/interrupt-controller/irq.h \
  ../arch/arm64/boot/dts/qcom/msm8996-ipcrouter.dtsi \
  ../arch/arm64/boot/dts/qcom/msm-gdsc-8996.dtsi \
  ../arch/arm64/boot/dts/qcom/msm8996-bus.dtsi \
    $(wildcard include/config/noc.h) \
  ../arch/arm64/boot/dts/include/dt-bindings/msm/msm-bus-ids.h \
  ../arch/arm64/boot/dts/qcom/msm-rdbg.dtsi \
  ../arch/arm64/boot/dts/qcom/msm8996-blsp.dtsi \
  ../arch/arm64/boot/dts/qcom/msm-pm8994-rpm-regulator.dtsi \
  ../arch/arm64/boot/dts/qcom/msm-pm8994.dtsi \
  ../arch/arm64/boot/dts/qcom/msm-pmi8994.dtsi \
  ../arch/arm64/boot/dts/include/dt-bindings/msm/power-on.h \
  ../arch/arm64/boot/dts/qcom/msm8996-regulator.dtsi \
  ../arch/arm64/boot/dts/qcom/msm8996-camera.dtsi \
  ../arch/arm64/boot/dts/qcom/msm8996-gpu.dtsi \
  ../arch/arm64/boot/dts/qcom/msm8996-pm.dtsi \
  ../arch/arm64/boot/dts/qcom/msm-arm-smmu-8996.dtsi \
  ../arch/arm64/boot/dts/qcom/msm-arm-smmu.dtsi \
  ../arch/arm64/boot/dts/qcom/msm8996-vidc.dtsi \
  ../arch/arm64/boot/dts/qcom/msm8996-coresight-v3.dtsi \
  ../arch/arm64/boot/dts/qcom/msm-arm-smmu-impl-defs-8996-v3.dtsi \
  ../arch/arm64/boot/dts/qcom/msm8996-pm8994-pmi8994-pm8004.dtsi \
  ../arch/arm64/boot/dts/qcom/msm-pm8004.dtsi \
  ../arch/arm64/boot/dts/qcom/msm8996-cdp.dtsi \
  ../arch/arm64/boot/dts/qcom/msm8996-pinctrl.dtsi \
  ../arch/arm64/boot/dts/qcom/msm8996-camera-sensor-cdp.dtsi \
  ../arch/arm64/boot/dts/qcom/msm8996-wsa881x.dtsi \
  ../arch/arm64/boot/dts/qcom/msm8996-mdss-panels.dtsi \
  ../arch/arm64/boot/dts/qcom/dsi-panel-sharp-dualmipi-wqxga-video.dtsi \
  ../arch/arm64/boot/dts/qcom/dsi-panel-nt35597-dualmipi-wqxga-video.dtsi \
  ../arch/arm64/boot/dts/qcom/dsi-panel-nt35597-dualmipi-wqxga-cmd.dtsi \
  ../arch/arm64/boot/dts/qcom/dsi-panel-nt35597-dsc-wqxga-video.dtsi \
  ../arch/arm64/boot/dts/qcom/dsi-panel-jdi-dualmipi-video.dtsi \
  ../arch/arm64/boot/dts/qcom/dsi-panel-jdi-dualmipi-cmd.dtsi \
  ../arch/arm64/boot/dts/qcom/dsi-panel-jdi-4k-dualmipi-video-nofbc.dtsi \
  ../arch/arm64/boot/dts/qcom/dsi-panel-sim-video.dtsi \
  ../arch/arm64/boot/dts/qcom/dsi-panel-sim-dualmipi-video.dtsi \
  ../arch/arm64/boot/dts/qcom/dsi-panel-sim-cmd.dtsi \
  ../arch/arm64/boot/dts/qcom/dsi-panel-sim-dualmipi-cmd.dtsi \
  ../arch/arm64/boot/dts/qcom/dsi-panel-nt35597-dsc-wqxga-cmd.dtsi \
  ../arch/arm64/boot/dts/qcom/dsi-panel-hx8379a-truly-fwvga-video.dtsi \
  ../arch/arm64/boot/dts/qcom/dsi-panel-r69007-dualdsi-wqxga-cmd.dtsi \
  ../arch/arm64/boot/dts/qcom/dsi-adv7533-720p.dtsi \
  ../arch/arm64/boot/dts/qcom/dsi-adv7533-1080p.dtsi \
  ../arch/arm64/boot/dts/qcom/dsi-panel-nt35950-dsc-4k-cmd.dtsi \
  ../arch/arm64/boot/dts/qcom/dsi-panel-sharp-dualmipi-1080p-120hz.dtsi \
  ../arch/arm64/boot/dts/qcom/dsi-panel-sharp-1080p-cmd.dtsi \
  ../arch/arm64/boot/dts/qcom/dsi-panel-sharp-dsc-4k-video.dtsi \

arch/arm64/boot/dts/qcom/apq8096-v3.0-pmi8994-pm8004-cdp.dtb: $(deps_arch/arm64/boot/dts/qcom/apq8096-v3.0-pmi8994-pm8004-cdp.dtb)

$(deps_arch/arm64/boot/dts/qcom/apq8096-v3.0-pmi8994-pm8004-cdp.dtb):
