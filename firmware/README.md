# Firmware folder structure

The firmware used on this project is based on [micropython](https://github.com/micropython/micropython).  

The firmware folder contains the following directories:  

- ARCOBALENO, that contains the configuration files needed to compile micropython for the Arcobaleno board  
- build-ARCOBALENO, that contains the micropython files already built for the Arcobaleno board  
- micropython, that is the submodule that will contain the micropython repository files.


If you want to use the already built micropython firmware on ARCOBALENO you may load the firmware.dfu or firmware.hex files, using respectively the DFU method with the USB connector or the SWD pins exposed on the ARCOBALENO board.

# Build micropython for ARCOBALENO

If you want to rebuild the micropython for the Arcobaleno board we suggest you to use a linux environment, clone this repository, initialize and update the micropython submodule, copy the whole ARCOBALENO folder in the micropython submodule in the "ports/stm32/boards" directory and then compile the micropython for the ARCOBALENO target board.  

Clone the repository:  
- git clone https://github.com/The-Ant-Lab/arcobaleno.git  

Enter in the firmware folder:  
- cd arcobaleno/firmware  

Initialize and update the micropython submodule:  
- git submodule init  
- git submodule update  

Copy the ARCOBALENO configuration folder in the proper path:
- cp -avr ARCOBALENO/ micropython/ports/stm32/boards/

Enter in the mpy-cross folder and compile it:
- cd micropython/mpy-cross
- make

Enter in the stm32 port folder (in this case from the mpy-cross folder):
- cd ../ports/stm32/

Compile micropython for the Arcobaleno board:
- make BOARD=ARCOBALENO

At the end of the compilation and linking in the "firmware/micropython/ports/stm32" folder there will be a new directory called "build-ARCOBALENO" containing all the built artifacts, and in particular the firmware images that can be uploaded to the Arcobaleno board.

If you want to clean this directory you may run the command:

- make clean BOARD=ARCOBALENO
