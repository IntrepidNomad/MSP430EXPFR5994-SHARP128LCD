################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Each subdirectory must supply rules for building sources it contributes
GrLib/fonts/%.obj: ../GrLib/fonts/%.c $(GEN_OPTS) | $(GEN_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: MSP430 Compiler'
	"/home/intrepidnomad/AUR/ccstudio/src/installdir/opt/ccstudio/ccs/tools/compiler/ti-cgt-msp430_18.12.2.LTS/bin/cl430" -vmspx --data_model=restricted --use_hw_mpy=F5 --include_path="/home/intrepidnomad/workspace_v9/MSP430FR5994-LCD/GrLib/grlib" --include_path="/home/intrepidnomad/workspace_v9/MSP430FR5994-LCD/GrLib/fonts" --include_path="/home/intrepidnomad/AUR/ccstudio/src/installdir/opt/ccstudio/ccs/ccs_base/msp430/include" --include_path="/home/intrepidnomad/workspace_v9/MSP430FR5994-LCD" --include_path="/home/intrepidnomad/AUR/ccstudio/src/installdir/opt/ccstudio/ccs/tools/compiler/ti-cgt-msp430_18.12.2.LTS/include" --advice:power=all --advice:hw_config=all --define=__MSP430FR5994__ --define=_MPU_ENABLE -g --printf_support=minimal --diag_warning=225 --diag_wrap=off --display_error_number --silicon_errata=CPU21 --silicon_errata=CPU22 --silicon_errata=CPU40 --preproc_with_compile --preproc_dependency="GrLib/fonts/$(basename $(<F)).d_raw" --obj_directory="GrLib/fonts" $(GEN_OPTS__FLAG) "$(shell echo $<)"
	@echo 'Finished building: "$<"'
	@echo ' '


