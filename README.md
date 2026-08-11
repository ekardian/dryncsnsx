# dryncsnsx

dryncsnsx ``4.4.1`` stable version. Launched 2026/05/13 \
For test this versión just clone or download

Copy serialized files listed from a text file, from local pc or remote pc to other place. (very faster!!!)
For Linux and Windows (Cygwin)

Copy from 10+ source to 1 target - serialized files and directories

<img width="731" height="437" alt="image" src="https://github.com/user-attachments/assets/9e423852-511c-4c84-8e3c-d3fc9614ef86" />

For a good performance and balanced network (redundancy) use two (NIC) gigabit network cards and raid 1.

Tested in:
* Debian 13 Trixie
* Debian 12 bookworm
* Linux Mint 22.1
* Windows 10 (Cygwin)

<details>
    <summary><b>Tools for collect your media and media tag tools</b></summary>
    
* [Tellico](https://tellico-project.org/) - Collection manager for books, videos, music, etc.
* [Gcstar](https://gitlab.com/GCstar/GCstar).  Create and manage collections of books, videos, comics, music, games, etc.
* [Puddletag](https://docs.puddletag.net/) - Simple, powerful audio tag editor.
* exiftool - `sudo apt install libimage-exiftool-perl` - Library and program for read and write meta information in multimedia files.
* eartag - `sudo apt install eartag` - Edit audio file tags
</details>

## Install

Istalling in your ``<home>/Programs/``


    # Creating a directory called Programs (optional)
    mkdir $HOME/Programs && cd $_
    # clone repository
    git clone https://github.com/ekardian/dryncsnsx
    # Enter to dryncsnsx directory
    cd dryncsnsx
    # give execution perm for the dryncs file
    chmod 755 dryncs
    # run
    ./dryncs


## Requirements

* dialog **(Version: 1.3-20230209)**
* rsync
* bc
* bash **(Version 5.2)**
* lsblk
* blkid
* cups
* perl
* coreutils
* samba server (optional)
* samba client (optional)
* zip
* unzip

Samba Server for copy from shared resources.

We saw issues with the dimensions dialog boxes with Versions from (-)2019 , use the last update for Dialog program, check the version with:

    $ dialog --version

## How Work

![scheme-dryncs](https://github.com/user-attachments/assets/52703672-741a-4159-bb84-8e9b17b0ba18)


Example:

Scene: i need copy this 3 video files from three diferent PC's in my network or locally to other place

**PC-1** has `videofile-F1.mp4`\
**PC-2** has `videofile-F2.mov`\
**PC-3** has `videofile-F3.mkv`

## How?

The configuration file is `mdialog_conf`, write the paths or your samba shared resources and update the datbase with the option 9 in the main menu of dryncsnsx.

With your favorite text editor write in a plain text the video file serial (1 by 1 line) or use the file `fcid.txt` and save it.

    F1
    F2
    F3

In the dryncs main menu choice the option 3 and follow the steps, remember do not forget your plain text, where are listed the serialized items `F1 F2 F3`.

## For write the serial to your files use this script or modify it to your needs.

<details>
<summary><b>For add serial to files to the begining files or before extension filenames</b></summary>

[In the beginning of the file serialize files with letter and numbers](https://github.com/ekardian/scripts-in-bash/blob/main/scripts/add-numbers-before-filename.sh)

[In the end of the file serialize files with letter and numbers](https://github.com/ekardian/scripts-in-bash/blob/main/scripts/add-numbers-before-extension.sh)
</details>

<details>
<summary><b>For extract the letter/number serialized files from the last dash in the filename, you can try this script:</b></summary>

[extract-strings-numbers-from-filenames.sh](https://github.com/ekardian/scripts-in-bash/blob/main/scripts/extract-strings-numbers-from-filenames.sh)
</details>

<details>
<summary><b>For Directories</b></summary>

Add letter/numbers at the end directories</b></summary>

[add-numbers-at-the-end-directory.sh](https://github.com/ekardian/scripts-in-bash/blob/main/scripts/add-numbers-at-the-end-directory.sh)
</details>

<details>
<summary><b>Other Apps very cool for rename files.</b></summary>

**F2 - Command-Line Batch Renaming**\
https://github.com/ayoisaiah/f2

**FileRenamer**\
https://www.sttmedia.com/filerenamer-download
</details>

DONATION
--------

## Western Union

Works for you? grate!!!! You can give me a donation via Wester Union, thanks XD

- Name: Erwin Marcell Alayn
- Last Name: Castedo Plantarrosa
- City/Country: Yacuiba, Departamento de Tarija, Bolivia
- Notify me by email : blkid@protonmail.com

Te sirvió algún script? genial!!!  Sin compromisos me podrías invitar un tecito enviándome una donación (5$ dólares americanos) por Western Union.

## QR

QR habilitado solo para Bolivia

Manda un correo electrónico con el asunto <b>donación</b> al correo: blkid@protonmail.com para recibir el QR

