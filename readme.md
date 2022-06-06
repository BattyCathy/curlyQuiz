build instructions:

First, download the folder and put it somewhere on your harddrive, eg: 

/lucian/documents/

then, in the command line, change your directory to wherever you put this folder, eg:

   cd /lucian/documents/curlyQuiz

from here, you have a couple options,

first, see if you can compile it using the makefile

this is easy, simply type:

    make

if all goes well, you can now run the program using the command:

    ./main

if this doesn't work, try using the gnu compiler. 

your command might look like this:

    g++ -o run main.cpp

the run the file using the command:

    ./run