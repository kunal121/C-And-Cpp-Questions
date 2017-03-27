                                                        -----------------------
                                                            LINUX COMMANDS>>
                                                        ------------------------

1. WHO COMMAND
--------------

 who -b , --boot >> time of last syatem boot.
 who -q , --count >> all ligin nams and numbers of users logged on.
 who -s , --short >> print only oname , line and time.
 who -t , --time >> print last system clock change.
 who -T , -w , --mesg >> add user message status as +,- or ?
 who -u , --users >> list users logged in
 who --version >> output version information and exit.

 2. UNAME COMMAND
-----------------

  -a , -all >> print all information
  -s , --kernel-name >> print kernel name
  -n , --nodename >> print network node hostname
  -r , --kernel-release >> print kernel release
  -v , --kernel-version >> print kernel version
  -m , --machine >> print machine hardware name
  -p , --processor >> print processor type
  -i , --hardware-platform >> print hardware platform
  -o , --operating-system >> print operating system
  -help >> display help and exit
  --version >> output version information and exit

 3. ID COMMAND
--------------

  adm >> system monitoring task
  cdrom >> used locally to give a set of users access to a cdrom drive
  ipadmin >> configures printers
  sudo >> administrative tasks
  sambashare >> sharing files using local network
  dip >> connect to internet using modem
  plugdev >> access external storage devices

  -g , --group >> print only effecitve user id
  -G , --groups >> print all gorup ids
  -n , --name >> print a name instead of a number
  -u , --user >> print only the effective user id

4. TTY COMMAND >> show the exact path of the terminal.
-----------------

                                            ------------------------------------
                                                PACKAGE MANAGEMENT SYSTEMS >>
                                            ------------------------------------

APT(ADVANCED PACKAGING TOOLS ) =>
---------------------------------

    sudo apt-get install vlc   <<   (vlc.deb file is downloaded)
    >> apt-get will donwload the vlc.deb
    >> dpkg will load the dependancies and install the downloaded file

    **apt-get is Higher level and dpkg is lower level

YUM(YELLOWDOG UPDATER AND MODIFIER) =>
--------------------------------------

    provides automatic updations
    **rpm is lower level package here.

ZYPPER =>
---------

    **rpm is lower level package here.

INSTALL PACKAGE >>>
---------------
    sudo apt-get install package (sudo is used for downloading as administrator)

REMOVE PACKAGE >>>
--------------
    sudo apt-get remove package

UPDATE INSTALLED PACKAGES >>>
-------------------------
    sudo apt-get update

---------------------------------------------------------------------------------------------------------------------------------
                                                TERMINAL EMULATOR
---------------------------------------------------------------------------------------------------------------------------------

Program that stimulates as a standalone TERMINAL

 >>>   TYPES OF TERMINAL PROGRAMS =>
 ------------------------------------
    >   gnome-terminal
    >   konsole
    >   xterm
    >   rxvt

 >>>    COMMAND LINE =>
 -----------------------
    >   Ctrl + Alt + T
    >   Search Terminal
    >   Name , Options , Arguments

    >>  OPTIONS
        >   -i
        >   -a
        >   -b

    >> ARGUMENTS
        >   rxvt
        >   xterm
        >   konsole
        >   gnome-terminal

>>>     VIRTUAL TERMINALS =>
----------------------------
    Console sessions that use entire display & keyboard outside of graphical environment.
    They are called virtual as only one is visible at a time and rest run in background

    >   VT1 -  VT7  (VT7    ->  graphical environment)
                    (VT1-6  ->  Text commands to unix shell)

                    > Switching b/w terminals using Ctrl + Alt + (F1 to F7)

>>>     REBOOT AND SHUTDOWN =>
------------------------------
    Reboot and shutdown your pc using command terminal.

    >   halt = shutdown -h
    >   reboot = shutdown -r

>>>     LOCATING APPLICATIONS =>
--------------------------------
    >   which diff      (Provides overview)
    >   whereis diff    (Tells the path in a wider rangewith more informtion)

    >   replace diff with the program name.

---------------------------------------------------------------------------------------------------------------------------------
                                                            COMMANDS
---------------------------------------------------------------------------------------------------------------------------------
>> CAT COMMAND =>
-----------------
    To create , open , copy , concatenate files.

    >   cat > filename      (Creating file)
    >   cat filename        (Open a file)
            * You can open multiple files at same time.
    >   cat f1>f2           (Copy contents of file f1 to f2)
            * if f2 doesnot exist the it will be created and then copied
            * if f2 exists then the content will be copied and replaced
    >   cat f1 f2 > f3      (Copying files f1 , f2 in f3)
    >   cat f2 >> f3        (Concatinating f2 and f3 in f3)
    >   cat f2 f1 >> f3

>> CP COMMAND =>
----------------
    To copy one file to another.

    >   cp f1 f2    (where f1 is source and f2 is target)
>> MV COMMAND =>
----------------
    Move or rename a file.

    >   mv f1 f2    (move data from file f1 to f2)
        * After this operation f1 will become empty

>> RM COMMAND =>
----------------
    Remove files.

    >   rm f1
        * This command will delete the file without any warning.
    >   rm f1 -i
        * This command will prompt the user asking if the user wants to remove the file.


>> TAR COMMAND =>
-----------------
    To archive multiple files into one file

    1.> Creating archive file =>
            tar -cf archive.tar file1 file2
    2.> List the files in archive =>
            tar -tvf archive.tar
    3.> Add the file to existing archive =>
            tar -rvf archive.tar document/work/hr3
    4.> Extract the files =>
            tar -xf archive.tar
    5.> Extract to secific location =>
            tar -xpvf archive.tar -C path

>> COMPRESS COMMAND =>
----------------------
    >   Compress file to smaller size
    >   COMMAND =>
            compress file_name

        OPTIONS =>>     -v : describes percentage reduction

>> UNCOMPRESS COMMAND =>
    >   for file that have been compressed using compress command
    EXAMPLE : uncompress file_name



>>  GZIP COMMAND =>
-----------
    Creates a file with gz extention

    > Creating a file =>
            gzip -c file1 file2 > file3.gz

    > To know compressed & uncompressed ratio =>
            gzip -l file3.gz

    > To compress a file
            gzip -d file3.gz

    > To uncompress file and display contents on terminal
            zcat file3.gz


>>  CD COMMAND =>
-----------------
    >   Change directory
    >   Changes shells current working directory

    >> To change to some other directory :
            cd Desktop

    >> To move to root directory :
            cd /

    >> Move to parent directory :
            cd ..       (This command moves one step back the directory)


>> PWD COMMAND =>
-----------------
    >   prints full pathname of current working directory

>> MKDIR COMMAND =>
------------------
    >   to create a new directory

    >>  Creating directory :
                mkdir mydir

    >>  Create directory with certain permissions
                mkdir -m a = rwx mydir
                  // NOTE: -m is used to specify permissions. a=rwx is used for read and write permission

    >>  To create directory & its parent directory
                mkdir -p home/docs/a/b

>> RMDIR COMMAND =>
----------------
    >   removes directory

    OPTIONS =>
    ----------
        >   -p :    each directory argument is treated as path name of which all components will be removee , only if they are empty starting with last component

        rmdir -p home/docs/a/b

>> LS COMMAND =>
---------------
    >   list the contents of directory

    OPTIONS:
        -l :    list all files in long format
        -a :    list all files including those beginning with "."
        -laxo : shows hidden files
        / : lists contents of root directory
        -ltr :  list files sorted by time they were last modified (most recent last)
>> GREP COMMAND =>
----------------
    > stands for global expression prime
    > processes line by line
    >prints line that match a specified
    > grep [options] pattern [file]
    >eg. grep "hello" f1
    OPTIONS:
        -n:      to view line number of succesfull match
        -i:      perform case insenstive Search
        eg. grep -i "hello" f1
        >>WILDCARDS
            > to search for specific character
            OPTIONS:
                  ? : matches any single character
                  * : matches multiple character
                  [set]: matches any char in the set of char eg.[adf]
                  [!set]
                  eg-> grep pattern *.c
                                    *
                                    fi?e.c
                                    [abc]*.c
                                    [abc]?.c
>> LOCATE COMMAND =>
--------------------
    > find files by name
    > reads database prepared by updatedb
    > database searched by default-> mlocate.db
    syntax: locate [option] pattern
            eg locate zip
    OPTIONS:
    -------
        -w: matches only whole path name
        -b: matches only base name,e.g. locate -b '\f1'
        -c: displays number of matching entries only
        -S: write statistics about each read datasbase
>> FIND COMMAND =>
---------------
    > finds file by name,size or time
    > always up to date
    > lists all file in current directory
    > SEARCH BY NAME:
    ----------------
          > find .(current directory) home/docs
          OPTIONS:
                -name: list file with certain pattern
                eg find . -name 'f1'
                -iname: case insenstive search
                -type: to restrict file to certain type (d-directory,f-file)
                eg find -name 'f1' -type f
    > SEARCH BY SIZE:
    ----------------
          OPTIONS:
              -size
              > values
                  bytes=c
                  KB=k
                  MB=M
                  GB=G
                  n=exact value
                  +n=more than n
                  -n= less than n
    > SEARCH BY TIME:
    ----------------
          > ctime/cmin: last changed/created time/min
          > atime/amin: last access/read time/min
          > mtime/mmin: modified/write time/min
              eg find . -mtime -2 days

>>MOUNTING COMMAND:
--------------------
    > making particular file system acessible at a certain point in linux directory tree
    /etc -> configurating files
    /dev -> special device files
    df -> amount of available disk space being used file system
    OPTIONS:
    --------
        -T: prints file system type
          -a: disk usage of all file system
          -t: displays file system of particular type df -t ext4
          -x: exclude file of particular type
    make new directory:
            mkdir -p /mnt/sdb1
    mounting a USB:
            mount /dev/sdb1 /mnt/sdb1
            OPTIONS:
                -t: for specific type
                      mount -t vfat /dev/sdb1 /mnt/sdb1
>> UNMOUNT COMMAND:
      unmount /dev/sdb1
      OPTIONS:
          -f: forcefully
>>FORMATTING:
      > before formatting make sure usb is unmounted
      > sudo mkfsvfat /dev/sdb1
      > formatting and renaming
            sudo mkfsvfat -n 'file' /dev/sdb1
>> MOUNTING A CD:
    mount -t iso9660 -o ro /dev/cdrom /mnt/cdrom
/*EXP-13*/
>>COMPILING:
------------
      OPTIONS:
          -c: gcc -c f1.c --> f1.o
          -o: gcc f1.o -o nik --> nik (executeable file)
            for execution write > ./f1
          Executable file from source file:
              gcc f1.c(source file) -o hello(executable file)
          -Wall: generation for warnings in our execution file
          Executable file from object file:
              gcc main.o hello.o -o hello
>>LINKING WITH EXTRENAL LIBRARIES
    gcc -wall calc.c -lname(eg-lm for math.h) -o nik
    Deugging >>
    -----------
    >  Step through your code line by line or instruction by instruction.
    >  can watch the value of variable at run time.
    >  helps to identify the place & reason making program crash

    GDB Debugger ->
    ---------------
    >  A program to be debugged with gdb must be compiled by gcc using option '-g'.

    	gcc -g file1.c

    >  Launch gdb

    	gdb a.out

    >  Add break points

    	break [filename]:line-numbertime
    or
    	break f1.c : main <-(func name)

    >  Execute the program.

    	run
    options >>
    	to exit gdb : quit
    	to resume execution : c
    	to get info about breakpoint: info breakpoint
    	to clear breakpoint : clear f1.c:8
    	to print value inside debugger: print i

>> TIMESTAMPING WITH GCC :
    time ./a.out

    Specifies 3 times:
        >   real -> total time between start and end of program
        >   user -> time spent in user mode
        >   sys -> amount of time spent by system
        
>> TOUCH COMMAND : 
    >   changes filestamp
    >   updates access & modification time to the current system time.
    >   if the file does not extst, it creates an empty file.
    
    OPTIONS =>
        >   -a : changes only access time.
        >   -c : does not create any file
        >   -m : change only modification time.
        >   -r : use this files time instead of current time.
        >   -t : use specific time instead of current time.
                          [YYMMDDhhmm]


Types of files:
---------------
    Regular files (-) : contains normal data
    Directory (d) : files that contain list of other files
    special files (c) : character files , allows user to communicate with h/w devices 
                        ls -c /dev
    Sockets (s) : special files , similar to TCP/IP sockets provide IPC
                    ls -s /dev/log
    Named pipe (p) : acts more or like , form a way of process
    Symbolic links (l) : can be considered as pointer to original files
    Block device files (b) : provides access to device in such a way that h/w characteristics of device are not visible.
    
    
FILE SYSTEM ARCHITECTURE :

    |--- /bin   -> bniary executable files
    |--- /sbin  -> system binaries (needed for system maintainence)
    |--- /boot  -> info regarding bootloader and grub
    |--- /home  -> user data is located 
    |--- /root  -> home directory of root
    |--- /dev   -> device corresopnding files needed to configure h/w 
 ---|--- /etc   -> configuration files for programs
    |--- /proc  -> info regarding processes
    |--- /var   -> variavle files (content increases with time)
    |--- /usr   -> works and programs of user
                 |--- /usr/bin  -> files which are not in /bin can be found here
                 |--- /usr/sbin -> files which are not in /sbin are found here
                 |--- /usr/lib  -> used for binary executable files
                 |--- /usr/local-> 
    |--- /tmp   -> temporary filescreated and deleted here
    |--- /lib   -> 
    |--- /opt   -> add on applications 
    |--- /mnt   -> mounting 
    |--- /media -> mounting 
    |--- /srv   -> service specific files (store info regarding services provided by system)
    
FILE UTILITY :
    
    Used to get info about the file type.
    file file1.c
    
COMPARISON OF FILES : 
    
    diff -> analizes 2 files and prints the lines that are different.
            diff <filename1> <filname2>
            output -> 2,4       c       2,4
                    (first file)    (second file)
        
            a -> add
            c -> change
            d -> delete
            
            OPTIONS : 
                > -i : ignore case
                > -w : ignore white spaces
                > -u : o/p lines of unified context
                
PATCH FILE :

    1. Create patch file     
            diff -u file1 file2 > f3.patch
    2. Apply patch using patch command 
            takes patch file as input and applies the difference to one or more original file
            patch filename < f3.patch
    
GEDIT :

    >   Simple text editor for GNOME
    >   has versatile plugin architecture to extend its capabilities
    1. gedit -> loads blank file with untitled label
    2. gedit filename -> specifies the file to  be opened,multiple files can be opened.
    
    PIPES: gedit accept pipes , used to load output into gedit
            ls -l > f1 && gedit f1
            ls -l/gedit or ls -l  > f1 && gedit f1
            
            
Editors : Gedit , Nano , Vi , Emacs

    NANO :->    Used in command line , commands invoked using Ctrl key
    ------
                ^X -> means Ctrl + X (case - insensitive)
                    
                NAVIGATIONS : 
                    ^A -> move to beginning of line
                    ^P -> move to previous line
                    ^N -> move to next line
                    ^E -> move to end of line
                    ^Y -> move down a page
                    ^V -> move up a page
                    ^D -> to delete charcter unser cursor
                    ^K -> to delete entire line
                    ^C -> cursor position
                    ^W -> Search for text
    
                Saving and quitting : ^O -> save
                                      ^X -> to end nano
                    
                COPY , Cut and Paste : Ctrl + ^ -> sets marker
                                       Alt + ^ -> copy
                                       ^U -> to paste
                                       ^K -> to cut

    Vi Editor :->   modal text editor
    --------------   /\
                    /  \
                   /    \
                  /      \
            insertion  command --------|
              mode      mode           |
             |                         |--> keywords perform existing functions 
             |                              To enter in this mode enter Esc key
             |-> letters form word
                 i -> to enter this mode
                 
            COMMANDS:
                h -> left one space
                j -> down one space
                l -> right one space
                k -> up one space
                
                moving among words : w -> move cursor forward one word
                                     b -> move backward one word
                                     
            Basic editing : 
                Deleting character : x-> delete character unde cursor
                                     10x -> delete 10 characters
                                     
                Pasting : p
                Copying : yw -> copies a word into a buffer
                          yy -> copies a line
                Replace : r -> replace current character with next character you type
                Quiting and saving : :w -> save but not quit
                                     :q -> to quit if no edit mode
                                     :wq -> to save & quit (same as zz)
                Searching : /string -> search forward
                            ?string -> search backward
                Undo : u
                
    EMACS : commands entered using Ctrl oe Esc
    
        C-c -> Ctrl + c
        C-x c-x -> Ctrl + x & then Ctrl + C
        C-h t -> Ctrl + h , release both keys & press t
              
        NAVIGATION : C-n -> move to next line
                     C-p -> move to previous line
                     C-f -> move one char forward
                     C-b -> move one char backward
                     M-f -> move one word forward
                     M-b -> move one word backward
                     
        EDITING : Marking text region ->  move the cursor to position, C-space bar then move cursor
                Cut , copy , paste : E-w -> copy
                                     C-w -> cut
                                     C-y -> Paste
                Deleting : one char -> Backspace
                           C-k : for line
                           M-d : for whole word
                Undo : C-x u
                Search : C-s -> forward
                         C-r -> backward
        SAVING & QUITING : save -> C-x C-s
                           quit -> C-x C-c
                           
                           
EXP 17 :
    
    COMMUNICATION ORIENTED COMMANDS:
    --------------------------------
        
        1.  echo -> displays a line of text on standard o/p 
                 -> used in shell scripting
                    echo [options] [string[s]]
                    ex : echo how are you?
                        declaring a variavle and echo its value : x = 10
                                                                  echo the value of x is $x
                    OPTIONS : -n -> do not permit trailing line.
                              -e -> enable interpretition of backslash escapes
                              -E -> disble interpretition of backslash escapes
                              \b -> backspace
                              \n -> new line
                              \t -> horizontal tab
                              \v -> vertical tab
                              \r -> carriage retadduurn
                              \c -> supresses
                              
        2.  host -> DNS lookup uility.
                 -> convert do main ip address & vice-versa
                 eg -> host google.com
                 
                 Option -> 
                 ---------
                     -t : used to select query type
                     1. To find dns : host -t ns google.com
                     2. to find domain text records : host -t txt google.com
                     3. to find start of authority record : host -t soa google.com
        
        3.  nslookup -> name server lookup
                     -> looks as dns
                     -> useful for finding out info about named domain
                     
                     ex : nslookup google.com
                          nslookup 134.170.185.46
                          
                          Quering different records : nslookup -type=ns google.com
        
        4.  ping -> to test connectivity between 2 nodes
                 -> ping google.com
                 -> increase or decrease time interval b/w packets in nos
                        ping -i 5 google.com
                 -> c : number of times a packet request is to be sent
                        ping -c 4 google
                 -> s : to change packet size
                        ping -s 100 google.com
                 -> w : change timeout
                        ping -w 5 google.com
                        
        5.  traceroute -> prints the rute that the packet takes to a network host
                traceroute google.com
                
                -> gives info about intermediate routers but also round trip times for that particular route.
                
        6.  netstat -> netowrk statistics
                    -> for monitoring network conections
                    
        7.  ip -> performs manipulation of ip addresses
                        ip 192.168.4.2
               -> a suppress binary o/p
               
    
EXPERIMENT 18 : 
---------------
    
    FINGER : user info lookup program.
             if no argument passed , displays info about current user
             
             options : -s -> displays user login name, real name , terminal name , idle name ,  login name 
             
    WGET : commandline utility to download files from internet
                    http://wordpress.org/latest.zip

            options : 
                1. to change name of downloaded file.
                        wget -o wordpress.zip http........
                2. to specify download speed
                        wget --limit-rate=100k http......
                3. -c -> to continue download from where it stopped
                4. -b -> to make big downloads as background processes.
                
    IPCONFIG :  interface configuration
                used to view or configure the network interface
            config -> displays info about all n/w interfaces currently in option
                1. to view all interfaces -> ifconfig -a
                2. to view configuration of specific interface -> ifconfig eth0
                3. enabling or disabling interface -> ifconfig eth0 up/down
                4. configuring an interface -> ifconfig wlan 69.72.169.1
                
    IP : similar to ifconfig
         ip addr show -> to get depth info
         ip route show -> check route table
         ip link set eth0 up/down -> enable/disable a new interface
         
         
    ROUTE : show / manipulate ip routing tables.
            display existing route
                
                OPTIONS :
                    >   -n : to display numerical ip address
                    
                To add default gateway -> route add default gw 192.168.1.0

    WRITE : sends message to another user
                    allows you to communicate by copying from your terminal to another 
                    
                    write [user-name] [message]      Ctrl+c to end message 
                    
    MESG : controls write access to your terminal
    
            mesg [n/y]
            
            > mesg : displays current status of terminal
            > mesg Y : allows user to send your message
            
    
    IPTABLES : Displays policy rules to allow or block traffic 
        3 types : 
            >   input : to control behaviour of incoming connection
            >   forward : forward incoming connection to its target
            >   output : for outgoing connection
            
            iptables -L 
            
    MAIL : send and receive mail 
    
        sudo apt-get update mailutils

        
EXPERIMENT 19 : ADDING OR REMOVING USER

    1. adduser : sudo adduser <username>
    2. su : to switch between b/w users
                su <username>
    3. usermod : to add a user to group 
                    usermod -aG sudo <username>
            
    4. userdel : to delete user
                    userdel <username>
            
    5. username : to change password if logged in as root
                    username <new password>
    6. password : change password if logged in as user
                    password <username>
    7. to create or delete groups : 
                groupadd <username>
                groupdel <groupname>
            
EXPERIMENT 22 :
            
PROCESS ORIENTED COMMANDS
-------------------------
            
            1. ps : displays status of currently running processes
                    shows processes associated with current user & terminal session
            2. ps aux : shows owner of processes
            3. ps -ag : to get info about all running processes
            4. ps -f : displays `` info in long format with parent process.
            5. pstree : displays tree of processes
            6.txt ps ax | grep : to see if a particular process is running or not
            7. top : displays processes dynamical (to exit enter q)
            8. kill : sends a signal to processcd ..
            
                      by default , signal is to terminate
                    
                    > kill [pid]
                    > killall [process-name] : to stop process by  process name
                    > kill 0 : to kill all processes except your shell
                    > kill -l : display number of each signal 
                        ex : kill -9 

EXP 21 :

        INTRO TO NETWORKS 
        -----------------
            
            Steps to configure a network interface
                > ifconnfig
                > ping
                > traceroute
            
        Browers in Ubuntu 
        -----------------
                
            > Firefox 
            > Chromiumclea
            > Opera
            > Dillo
            > Konqeron
            
            
        TRANSFERING FILES FROM UBUNTU TO WINDOWS
        ----------------------------------------
            
            > right click on folder and select 'sharing options'
            > when prompted, install samba services
            > after innstallation, restart session
            > click 'create share' to complete process
            > open terminal 
                sudo smbpasswd -a <user-name>
            > on windows 
                run \\ip-address\filename
            > To access file
                enter samba username & password
            
            
            
            
EXPERIMENT 23 : 
            
        Process Scheduing Commands
        --------------------------
            
            1. at : schedling command to be run once at a particular time
                        ex : at 9:30pm
                             at > ls -l > terminal name (search using tty)
                             at > Ctrl + D
            
            EXPRESSION FOR TIME :
                
                > noon
                > midnight
                > tomorrow
                > noon tomorrow
                > next week
                > next monday
            
                    now + 1 min
                    now + 2 days
                    now + 1 month
                    now + 5 years
            
                    2:30pm friday
                    fri
                    Nov
                    2.30 pm 10/21/2014
                
                USING MAIL : 
            
                    > Install MTA
                    > sudo service sendmail start
                    > at now + 2 min
                        at > echo 'hello'
                        at > Ctrl + D
                    > mutt -f /var/spool/mail/<username>

            2. atq : to view currently queued at jobs
            3. atrm : to delete jobs
                    atrm 23
            
            
    EXPERIMENT 24 : 
            
            > CRONTAB COMMAND : list of commands that you want to run on a regular schedule and also the name of command used to manage that list
            
                To edit crontab : crontab -e