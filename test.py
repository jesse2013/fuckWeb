#! /bin/python
import os
os.system("modprobe pci_stub")
os.system("sleep 1")
os.system("modprobe -r ixgbe")
os.system("sleep 1")
os.system("modprobe ixgbe max_vfs=6")
os.system("sleep 1")

vf0 = ('07:10.0','07:10.2','07:10.4','07:10.6','07:11.0','07:11.2')
vf1 = ('07:10.1','07:10.3','07:10.5','07:10.7','07:11.1','07:11.3')

os.system("echo \"8086 10ed\" > /sys/bus/pci/drivers/pci-stub/new_id")
for x in vf0:
	os.system("echo \"0000:%s\" > /sys/bus/pci/devices/0000:%s/driver/unbind" %(x,x))
	os.system("echo \"0000:%s\" > /sys/bus/pci/drivers/pci-stub/bind" %(x))
