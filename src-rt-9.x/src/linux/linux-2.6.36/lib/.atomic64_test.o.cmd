cmd_lib/atomic64_test.o := arm-brcm-linux-uclibcgnueabi-gcc -Wp,-MD,lib/.atomic64_test.o.d  -nostdinc -isystem /home/mango/develop/am-toolchains/brcm-arm-sdk/hndtools-arm-linux-2.6.36-uclibc-4.5.3/bin/../lib/gcc/arm-brcm-linux-uclibcgnueabi/4.5.3/include -I/home/mango/data/awrt-mango/src-rt-9.x/src/linux/linux-2.6.36/arch/arm/include -Iinclude  -include include/generated/autoconf.h -D__KERNEL__ -mlittle-endian -Iarch/arm/mach-brcm-hnd/include -Iarch/arm/plat-brcm/include -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -fno-delete-null-pointer-checks -I/home/mango/data/awrt-mango/src-rt-9.x/src/include -I/home/mango/data/awrt-mango/src-rt-9.x/src/common/include -I/home/mango/data/awrt-mango/src-rt-9.x/src/shared/bcmwifi/include -I/home/mango/data/awrt-mango/src-rt-9.x/src/include -I/home/mango/data/awrt-mango/src-rt-9.x/src/common/include -I/home/mango/data/awrt-mango/src-rt-9.x/src/common/include/devctrl_if -I/home/mango/data/awrt-mango/src-rt-9.x/src/wl/phymods/cmn/hal -I/home/mango/data/awrt-mango/src-rt-9.x/src/wl/phymods/cmn/include -I/home/mango/data/awrt-mango/src-rt-9.x/src/wl/phymods/ac/include -I/home/mango/data/awrt-mango/src-rt-9.x/src/wl/phymods/ht/include -I/home/mango/data/awrt-mango/src-rt-9.x/src/wl/phymods/n/include -I/home/mango/data/awrt-mango/src-rt-9.x/src/wl/phymods/lcn/include -I/home/mango/data/awrt-mango/src-rt-9.x/src/wl/phymods/lcn40/include -I/home/mango/data/awrt-mango/src-rt-9.x/src/wl/phymods/lcn20/include -DBCMDRIVER -Dlinux -DHNDCTF -DCTFPOOL -DCTFMAP -DPKTC -DCTF_PPPOE -DCTF_L2TP -DCTF_PPTP -DCTF_IPV6 -DBCMFA -DBCM47XX -O2 -D"CONFIG_LINUX_MTD=32" -marm -ffreestanding -fno-dwarf2-cfi-asm -mabi=aapcs-linux -mno-thumb-interwork -funwind-tables -D__LINUX_ARM_ARCH__=7 -march=armv7-a -msoft-float -Uarm -ggdb -Wframe-larger-than=2048 -fno-stack-protector -fomit-frame-pointer -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack    -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(atomic64_test)"  -D"KBUILD_MODNAME=KBUILD_STR(atomic64_test)"  -c -o lib/.tmp_atomic64_test.o lib/atomic64_test.c

deps_lib/atomic64_test.o := \
  lib/atomic64_test.c \
    $(wildcard include/config/x86.h) \
    $(wildcard include/config/mips.h) \
    $(wildcard include/config/ppc.h) \
    $(wildcard include/config/s390.h) \
    $(wildcard include/config/arm.h) \
    $(wildcard include/config/x86/64.h) \
    $(wildcard include/config/x86/cmpxchg64.h) \
  include/linux/init.h \
    $(wildcard include/config/modules.h) \
    $(wildcard include/config/hotplug.h) \
  include/linux/compiler.h \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
  include/linux/compiler-gcc.h \
    $(wildcard include/config/arch/supports/optimized/inlining.h) \
    $(wildcard include/config/optimize/inlining.h) \
    $(wildcard include/config/buzzz/func.h) \
  include/linux/compiler-gcc4.h \
  include/linux/kernel.h \
    $(wildcard include/config/lbdaf.h) \
    $(wildcard include/config/preempt/voluntary.h) \
    $(wildcard include/config/debug/spinlock/sleep.h) \
    $(wildcard include/config/prove/locking.h) \
    $(wildcard include/config/printk.h) \
    $(wildcard include/config/dump/prev/oops/msg.h) \
    $(wildcard include/config/dynamic/debug.h) \
    $(wildcard include/config/ring/buffer.h) \
    $(wildcard include/config/tracing.h) \
    $(wildcard include/config/numa.h) \
    $(wildcard include/config/ftrace/mcount/record.h) \
  /home/mango/develop/am-toolchains/brcm-arm-sdk/hndtools-arm-linux-2.6.36-uclibc-4.5.3/bin/../lib/gcc/arm-brcm-linux-uclibcgnueabi/4.5.3/include/stdarg.h \
  include/linux/linkage.h \
  /home/mango/data/awrt-mango/src-rt-9.x/src/linux/linux-2.6.36/arch/arm/include/asm/linkage.h \
  include/linux/stddef.h \
  include/linux/types.h \
    $(wildcard include/config/uid16.h) \
    $(wildcard include/config/phys/addr/t/64bit.h) \
    $(wildcard include/config/64bit.h) \
  /home/mango/data/awrt-mango/src-rt-9.x/src/linux/linux-2.6.36/arch/arm/include/asm/types.h \
  include/asm-generic/int-ll64.h \
  /home/mango/data/awrt-mango/src-rt-9.x/src/linux/linux-2.6.36/arch/arm/include/asm/bitsperlong.h \
  include/asm-generic/bitsperlong.h \
  include/linux/posix_types.h \
  /home/mango/data/awrt-mango/src-rt-9.x/src/linux/linux-2.6.36/arch/arm/include/asm/posix_types.h \
  include/linux/bitops.h \
    $(wildcard include/config/generic/find/first/bit.h) \
    $(wildcard include/config/generic/find/last/bit.h) \
    $(wildcard include/config/generic/find/next/bit.h) \
  /home/mango/data/awrt-mango/src-rt-9.x/src/linux/linux-2.6.36/arch/arm/include/asm/bitops.h \
    $(wildcard include/config/smp.h) \
  /home/mango/data/awrt-mango/src-rt-9.x/src/linux/linux-2.6.36/arch/arm/include/asm/system.h \
    $(wildcard include/config/cpu/xsc3.h) \
    $(wildcard include/config/cpu/fa526.h) \
    $(wildcard include/config/arch/has/barriers.h) \
    $(wildcard include/config/arm/dma/mem/bufferable.h) \
    $(wildcard include/config/cpu/sa1100.h) \
    $(wildcard include/config/cpu/sa110.h) \
    $(wildcard include/config/cpu/32v6k.h) \
  include/linux/irqflags.h \
    $(wildcard include/config/trace/irqflags.h) \
    $(wildcard include/config/irqsoff/tracer.h) \
    $(wildcard include/config/preempt/tracer.h) \
    $(wildcard include/config/trace/irqflags/support.h) \
  include/linux/typecheck.h \
  /home/mango/data/awrt-mango/src-rt-9.x/src/linux/linux-2.6.36/arch/arm/include/asm/irqflags.h \
  /home/mango/data/awrt-mango/src-rt-9.x/src/linux/linux-2.6.36/arch/arm/include/asm/ptrace.h \
    $(wildcard include/config/cpu/endian/be8.h) \
    $(wildcard include/config/arm/thumb.h) \
  /home/mango/data/awrt-mango/src-rt-9.x/src/linux/linux-2.6.36/arch/arm/include/asm/hwcap.h \
  /home/mango/data/awrt-mango/src-rt-9.x/src/linux/linux-2.6.36/arch/arm/include/asm/outercache.h \
    $(wildcard include/config/outer/cache/sync.h) \
    $(wildcard include/config/outer/cache.h) \
  include/asm-generic/cmpxchg-local.h \
  include/asm-generic/bitops/non-atomic.h \
  include/asm-generic/bitops/fls64.h \
  include/asm-generic/bitops/sched.h \
  include/asm-generic/bitops/hweight.h \
  include/asm-generic/bitops/arch_hweight.h \
  include/asm-generic/bitops/const_hweight.h \
  include/asm-generic/bitops/lock.h \
  include/linux/log2.h \
    $(wildcard include/config/arch/has/ilog2/u32.h) \
    $(wildcard include/config/arch/has/ilog2/u64.h) \
  include/linux/dynamic_debug.h \
  /home/mango/data/awrt-mango/src-rt-9.x/src/linux/linux-2.6.36/arch/arm/include/asm/byteorder.h \
  include/linux/byteorder/little_endian.h \
  include/linux/swab.h \
  /home/mango/data/awrt-mango/src-rt-9.x/src/linux/linux-2.6.36/arch/arm/include/asm/swab.h \
  include/linux/byteorder/generic.h \
  /home/mango/data/awrt-mango/src-rt-9.x/src/linux/linux-2.6.36/arch/arm/include/asm/bug.h \
    $(wildcard include/config/bug.h) \
    $(wildcard include/config/debug/bugverbose.h) \
  include/asm-generic/bug.h \
    $(wildcard include/config/generic/bug.h) \
    $(wildcard include/config/generic/bug/relative/pointers.h) \
  /home/mango/data/awrt-mango/src-rt-9.x/src/linux/linux-2.6.36/arch/arm/include/asm/div64.h \
  /home/mango/data/awrt-mango/src-rt-9.x/src/linux/linux-2.6.36/arch/arm/include/asm/atomic.h \
    $(wildcard include/config/generic/atomic64.h) \
  include/asm-generic/atomic-long.h \

lib/atomic64_test.o: $(deps_lib/atomic64_test.o)

$(deps_lib/atomic64_test.o):
