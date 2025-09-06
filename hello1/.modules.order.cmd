cmd_/home/edie/driver/hello1/modules.order := {   echo /home/edie/driver/hello1/hello-1.ko; :; } | awk '!x[$$0]++' - > /home/edie/driver/hello1/modules.order
