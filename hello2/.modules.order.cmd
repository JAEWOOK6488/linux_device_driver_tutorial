cmd_/home/edie/driver/hello2/modules.order := {   echo /home/edie/driver/hello2/hello-2.ko; :; } | awk '!x[$$0]++' - > /home/edie/driver/hello2/modules.order
