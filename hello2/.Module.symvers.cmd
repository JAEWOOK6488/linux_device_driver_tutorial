cmd_/home/edie/driver/hello2/Module.symvers := sed 's/\.ko$$/\.o/' /home/edie/driver/hello2/modules.order | scripts/mod/modpost -m -a   -o /home/edie/driver/hello2/Module.symvers -e    -T -
