#  BASIC CONCEPTS OF OS & LINUX


🖥 What is Operating System (OS)?
- It is system software that controls the computer.
- Manages hardware, files, memory, and applications.
- Allows user interaction through GUI or terminal.
- Examples: Windows, Linux, macOS, Android.

🧩 What is Kernel?
- Core part of an operating system.
- Connects software with hardware.
- Handles CPU, memory, file system, etc.
- Types: Monolithic (Linux), Microkernel (Minix).

🐧 What is Linux?
- Open-source Operating System based on UNIX.
- Free to use and highly customizable.
- Used in servers, desktops, mobile phones, etc.
- Popular distros: Ubuntu, Fedora, Debian, Red Hat.

-------------------------------
💻 BASIC LINUX COMMANDS
-------------------------------

📂 DIRECTORY COMMANDS
- pwd              → Show current path
- cd               → Go to home directory
- cd foldername    → Move to a folder
- cd ..            → Go one level back
- cd /path/folder  → Go to absolute path


📌 Absolute Path: Full path from root (starts with /)
📌 Relative Path: Path from current directory


🕒 DATE AND TIME
- date              → Full date and time
- date +%D          → Date only (MM/DD/YY)
- date +%T          → Time only (HH:MM:SS)

📚 HISTORY
- history           → Show all previous commands

🧽 CLEAR TERMINAL
- clear             → Clean the terminal screen


📁 FILE & FOLDER COMMANDS
- ls               → List files/folders
- ls -lt           → List files sorted by time
- ls -lh           → List files with sizes

- mkdir folder     → Create folder
- rmdir folder     → Remove empty folder


📄 FILE CREATION & READING
- touch file.txt                     → Create empty file
- echo "Hi Sujoy!" > file.txt       → Write to file (overwrite)
- cat file.txt                      → Show file content


📄 FILE READING
- less file.txt                     → Scrollable file view
    (q → quit, / → search, n → next)
- more file.txt                     → View file line by line
- realpath file.txt                 → Show full path


✏ EDIT FILES
- vi sujoy.txt
    (Press i to insert, Esc to exit insert mode, :wq to save and quit)

- nano sujoy.txt
    (Edit directly, Ctrl+X → Y → Enter to save)


🧹 DELETE FILE
- rm file.txt        → Delete file


📤 COPY / MOVE / RENAME
- cp file.txt folder/              → Copy file to folder
- mv file.txt folder/             → Move file to folder
- mv oldname.txt newname.txt      → Rename file

📖 READ SPECIFIC LINES
- head -5 file.txt      → Show top 5 lines
- tail -5 file.txt      → Show last 5 lines

🔠 SORTING & UNIQUE
- sort file.txt                     → Sort lines A to Z
- sort -r file.txt                  → Reverse sort
- sort file.txt | uniq              → Unique lines only



📂 File Splitting
-----------------
split -l 2 filename
- 📌 Splits a file into chunks of 2 lines each.  
- 🎯 Example: If a file has 6 lines, this will split it into 3 files with 2 lines each.


🔍 Grep (Pattern Searching)
---------------------------
grep "pattern" filename – 🔎 Searches for a pattern in a file.
egrep "word1|word2" – 🔎 Searches for multiple patterns using extended regex.

Examples:
grep "hello" file.txt
egrep "apple|banana" fruits.txt


🃏 Wildcard in Linux
---------------------
Wildcards help match multiple files easily.

Examples:
ls x*           # Lists all files starting with x
touch file{A..Z} # Creates files: fileA, fileB, ..., fileZ


🖥 htop
--------
Interactive process viewer. Better version of top.

📁 File Listing & Permissions
------------------------------
ls -lart                 # Detailed listing sorted by time
chmod 744 filename       # Change permissions using numeric codes

🔢 Use an online chmod calculator: https://chmod-calculator.com


🌐 Package Management (Ubuntu)
------------------------------
sudo apt update          # Update package list
sudo apt install apache2 # Install Apache2 web server

📦 Compression & Archiving
---------------------------
gzip filename        # Compress file
gunzip filename.gz   # Decompress file


🔐 Remote Access
----------------
ssh user@server_ip        # Connect to remote server
scp filename user@ip:path # Copy file from/to remote server


🌐 Networking Commands
-----------------------
ping google.com    # Test internet connection
ifconfig           # Show network interfaces
netstat            # Show network-related info

⚙ Processes
------------
ps          # Show running processes
top         # Show all active processes
kill PID    # Kill a specific process by ID

👤 User Management
------------------
useradd username   # Add a new user

💽 Disk Info
------------
df       # Show mounted disk info
mount    # Mount a device
umount   # Unmount a device

🙋 User Info
------------
whoami   # Show current logged-in user