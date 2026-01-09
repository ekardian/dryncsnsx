# dryncsnsx
For Linux and Windows (Cygwin)

Copy from 3 source to 1 target - serialized files and directories

Tested in:

* Debian 12 bookworm
* Linux Mint 22.1

## Install

Istalling in your ``<home>/Programs/``


    mkdir $HOME/Programs && cd $_
    git clone https://github.com/ekardian/dryncsnsx
    chmod 755 dryncs
    ./dryncs


## Requirements

Dialog **Version: 1.3-20230209**, rsync, bash 5.2, lsblk, blkid, perl, coreutils, samba server (optional), samba client (optional).\
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

For add serial to files to the begining files or before extension filenames

[In the beginning of the file serialize files with letter and numbers](https://github.com/ekardian/scripts-in-bash/blob/main/scripts/add-numbers-before-filename.sh)

[In the end of the file serialize files with letter and numbers](https://github.com/ekardian/scripts-in-bash/blob/main/scripts/add-numbers-before-extension.sh)

For extract the letter/number serialized files from the last dash in the filename, you can try this script:

[extract-strings-numbers-from-filenames.sh](https://github.com/ekardian/scripts-in-bash/blob/main/scripts/extract-strings-numbers-from-filenames.sh)

For Directories

Add letter/numbers at the end directories

[add-numbers-at-the-end-directory.sh](https://github.com/ekardian/scripts-in-bash/blob/main/scripts/add-numbers-at-the-end-directory.sh)

Other Apps very cool for rename files.

**F2 - Command-Line Batch Renaming**\
https://github.com/ayoisaiah/f2

**FileRenamer**\
https://www.sttmedia.com/filerenamer-download

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

QR habilitado para Bolivia
(Opcional) Notifica tu donación al correo: blkid@protonmail.com

![qr-donation](https://github.com/user-attachments/assets/2ce27ee7-ad46-4925-bde9-32d1ffa8ea58)
