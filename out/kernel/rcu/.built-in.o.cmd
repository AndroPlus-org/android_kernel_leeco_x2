cmd_kernel/rcu/built-in.o :=  aarch64-linux-android-ld -EL    -r -o kernel/rcu/built-in.o kernel/rcu/update.o kernel/rcu/srcu.o kernel/rcu/tree.o 
