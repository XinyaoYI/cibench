# make all original benchmarks
org: backprop_org lavaMD_org hotspot3D_org srad_org bzip_org msb_org hoard_org

# make all optimized benchmarks
opt: backprop_opt lavaMD_opt hotspot3D_opt srad_opt bzip_opt msb_op1 msb_op2 hoard_opt

# Rodinia backprop
backprop_org:
	cd ./rodinia_3.1/openmp/backprop/org && $(MAKE)
backprop_opt:
	cd ./rodinia_3.1/openmp/backprop/org && $(MAKE)

# Rodinia lavaMD
lavaMD_org:
	cd ./rodinia_3.1/openmp/lavaMD/org && $(MAKE)
lavaMD_opt:
	cd ./rodinia_3.1/openmp/lavaMD/opt && $(MAKE)

# Rodinia hotspot3D
hotspot3D_org:
	cd ./rodinia_3.1/openmp/hotspot3D/org && $(MAKE)
hotspot3D_opt:
	cd ./rodinia_3.1/openmp/hotspot3D/opt && $(MAKE)

# Rodinia srad_v2
srad_org:
	cd ./rodinia_3.1/openmp/srad_v2/org && $(MAKE)
srad_opt:
	cd ./rodinia_3.1/openmp/srad_v2/opt && $(MAKE)

# bzip2
bzip_org:
	cd ./bzip2/org && $(MAKE)
bzip_opt:
	cd ./bzip2/opt && $(MAKE)

# NERSC8
msb_org:
	cd ./NERSC/smb/org/msgrate && $(MAKE)
msb_op1:
	cd ./NERSC/smb/opt-msb1/msgrate && $(MAKE)
msb_opt2:
	cd ./NERSC/smb/opt-msb2/msgrate && $(MAKE)

# Hoard
hoard_org:
	cd /disk2/jtan/cibench/hoard/orginal/benchmarks/larson && $(MAKE)
hoard_opt:
	cd /disk2/jtan/cibench/hoard/optimized/benchmarks/larson && $(MAKE)


clean:
	cd ./rodinia_3.1/openmp/backprop/org && rm -f *.o *~ *.gcda backprop backprop_cuda.linkinfo
	cd ./rodinia_3.1/openmp/backprop/opt && rm -f *.o *~ *.gcda backprop backprop_cuda.linkinfo
	cd ./rodinia_3.1/openmp/lavaMD/org && rm -rf *.o ./kernel/*.o ./kernel/kernel_cpu.gcda ./util/num/*.o ./util/num/*.gcda ./util/timer/*.o ./util/timer/*.gcda ./util/device/*.o ./util/device/*.gcda *.gcda lavaMD
	cd ./rodinia_3.1/openmp/lavaMD/opt && rm -rf *.o ./kernel/*.o ./kernel/kernel_cpu.gcda ./util/num/*.o ./util/num/*.gcda ./util/timer/*.o ./util/timer/*.gcda ./util/device/*.o ./util/device/*.gcda *.gcda lavaMD
	cd ./rodinia_3.1/openmp/hotspot3D/org && rm -f 3D.gcda 3D *.txt
	cd ./rodinia_3.1/openmp/hotspot3D/opt && rm -f 3D.gcda 3D *.txt
	cd ./rodinia_3.1/openmp/srad_v2/org && rm -rf srad srad.gcda
	cd ./rodinia_3.1/openmp/srad_v2/opt && rm -rf srad srad.gcda
	cd ./bzip2/org && rm -f *.o *.gcda libbz2.a bzip2 bzip2recover
	cd ./bzip2/opt && rm -f *.o *.gcda libbz2.a bzip2 bzip2recover
	cd ./NERSC/smb/org/msgrate && rm -f *.gcda msgrate.o msgrate	
	cd ./NERSC/smb/opt-msb1/msgrate && rm -f *.gcda msgrate.o msgrate	
	cd ./NERSC/smb/opt-msb2/msgrate && rm -f *.gcda msgrate.o msgrate	
	cd ./hoard/orginal/benchmarks/larson && rm -f *.gcda larson larson-hoard
	cd ./hoard/optimized/benchmarks/larson && rm -f *.gcda larson larson-hoard
