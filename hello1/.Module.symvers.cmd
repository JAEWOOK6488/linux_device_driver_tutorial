cmd_/home/edie/driver/hello1/Module.symvers := sed 's/\.ko$$/\.o/' /home/edie/driver/hello1/modules.order | scripts/mod/modpost -m -a   -o /home/edie/driver/hello1/Module.symvers -e    -T -
