DIR := $(lastword $(subst /, , $(dir $(abspath $(MAKEFILE_LIST)))))
all:
	gcc -g -Wall $(DIR).c -o $(DIR)
