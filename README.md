Google Summer of Code 2018

organization: NetBSD

student: Marwa Desouky

Project: Tickless Kernel 

-----------------------------------------------------
-----------------------------------------------------

1- define new data type bintick_t to represent high resolution time 

	sys/types.h
	
	sys/time.h
	


2- modify callout data structure to use high resolution timer
	
	sys/callout.h

3- add extention functions to existing KPIs 
	
	kern/kern_condvar.c
	
	kern/kern_timeout.c
	
	kern/kern_sleepq.c
