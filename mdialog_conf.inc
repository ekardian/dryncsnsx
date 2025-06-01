#!/bin/bash
#
# Variable dryncs Config File
#
# For try this script you can test populating dirs and files with
# the scripts 'populate-dirs-files' and 'populate-dirs-files-ns'
# execute the script in diferent PC's or locally.
# The steps inside the files and how to use them

###############
#    CONFIG   #
###############

# If you make a bad configuration?, use the default configuration again.
# cd ~/repository-cloned
# cp -v mdialog_conf.inc mdialog_conf

# Default target directory.

# Target and Source path, you can leave in blank. Example: You can fill
# with a local path or to the shared samba mount point

dialogdest="$HOME/Programs/dryncsnsx.git/"

# Default source directory.

# if you write the path to your orders you can win time!!!
# The path where is the plain text with the serialized order list
# or you can navigate to anywhere to load the created plain text
# the path to the orders are in:
# dryncsnsx.git/orders/
# you can fill by example
# /home/your-user-name/Programs/dryncsnsx.git/orders/

dialogorig="$HOME/Programs/dryncsnsx.git/orders/"

# DATABASE PATHs

# Database x paths/+filnames
# Run dryncsnsx, With the option 9 you can fill the databases paths

mallrepos="$HOME/Programs/dryncsnsx.git/db/mallrepos"
fallrepos="$HOME/Programs/dryncsnsx.git/db/fallrepos"
callrepos="$HOME/Programs/dryncsnsx.git/db/callrepos"
lallrepos="$HOME/Programs/dryncsnsx.git/db/lallrepos"
jallrepos="$HOME/Programs/dryncsnsx.git/db/jallrepos"
aallrepos="$HOME/Programs/dryncsnsx.git/db/aallrepos"

# Database x File Size
# Fill with full path, this will fill:
# 'file size num in kb' 'file name with extension'

smallrepos="$HOME/Programs/dryncsnsx.git/db/smallrepos"
sfallrepos="$HOME/Programs/dryncsnsx.git/db/sfallrepos"
scallrepos="$HOME/Programs/dryncsnsx.git/db/scallrepos"
slallrepos="$HOME/Programs/dryncsnsx.git/db/slallrepos"
sjallrepos="$HOME/Programs/dryncsnsx.git/db/sjallrepos"
saallrepos="$HOME/Programs/dryncsnsx.git/db/saallrepos"

# Database x index files
# fill names files in 2 columns for searching module. ex:
# 'size' 'file name with extension' and others with:
# 'file name' tracks for music

xmallrepos="$HOME/Programs/dryncsnsx.git/db/xmallrepos"
xfallrepos="$HOME/Programs/dryncsnsx.git/db/xfallrepos"
xcallrepos="$HOME/Programs/dryncsnsx.git/db/xcallrepos"
xlallrepos="$HOME/Programs/dryncsnsx.git/db/xlallrepos"
xjallrepos="$HOME/Programs/dryncsnsx.git/db/xjallrepos"
xaallrepos="$HOME/Programs/dryncsnsx.git/db/xaallrepos"

# ORDERS saved or to save in text file
# this its only for an direct open to this orders files

morder="$HOME/Programs/dryncsnsx.git/orders/mcid.txt"
forder="$HOME/Programs/dryncsnsx.git/orders/fcid.txt"
corder="$HOME/Programs/dryncsnsx.git/orders/ccid.txt"
lorder="$HOME/Programs/dryncsnsx.git/orders/lcid.txt"
jorder="$HOME/Programs/dryncsnsx.git/orders/jcid.txt"
aorder="$HOME/Programs/dryncsnsx.git/orders/acid.txt"

# Exchange from Bolivian currency to Argentine currency
argchg="0.014"

# Price of Items
# by defulat 1, change to your needsdd

# Movies
# 4K, IMAX, REMUX, defect movies with =<1080p resolution
p4k="1"
pimax="1"
premux="1"
pdef="1"

# Music
palbum="1"

# Games
# Directories need to be created by ex: mygame-4G-J<number-id>, mygame-8G-J<numer-id>
# For games default pgame1 =<4GB, 8GB+ pgame2, 12GB+ pgame3, 16GB+ pgame4, 20GB+ pgame5
pgame1="1"
pgame2="1"
pgame3="1"
pgame4="1"
pgame5="1"

# Apps
# Directories need to be created by ex: myapp-4G-A<number-id>, myapp-8G-A<numer-id>
# For app+s default papp1 =<4GB, 8GB+ papp2, 12GB+ papp3, 16GB+ papp4
papp1="1"
papp2="1"
papp3="1"
papp4="1"
papp5="1"

# Books
pbook="1"

# Comics
pcomic="1"

# REPOSITORY PATH

# Help option in the main menu for more information about mount and scenarios.
#
# Source path to directories/Files to copy. If you change the source path
# you need update the databases with option 9 in the main menu
#
# For Cygwin write the absolute path. Example:
# fsourcepath="/cygdrive/unidad/REPO_PELICULAS/"

msourcepath="/path/to/music/"
fsourcepath="/path/to/videos/"
csourcepath="/path/to/comics/"
lsourcepath="/path/to/books/"
jsourcepath="/path/to/games/"
asourcepath="/path/to/apps/"

# If you have more things in other place, write the paths here
# For copy the files is not necessary to fill all the paths
# you can write 2 paths for every category, 10 paths for video files,
# if you want more source paths , you have the script source code for add more paths.

msourcepath2="/path/to/M2/"
msourcepath3="/path/to/M3/"
fsourcepath2="/path/to/F2/"
fsourcepath3="/path/to/F3/"
fsourcepath4="/path/to/F4/"
fsourcepath5="/path/to/F5/"
fsourcepath6="/path/to/F6/"
fsourcepath7="/path/to/F7/"
fsourcepath8="/path/to/F8/"
fsourcepath9="/path/to/F9/"
fsourcepath10="/path/to/F10/"
csourcepath2="/path/to/C2/"
csourcepath3="/path/to/C3/"
lsourcepath2="/path/to/L2/"
lsourcepath3="/path/to/L3/"
jsourcepath2="/path/to/J2/"
jsourcepath3="/path/to/J3/"
asourcepath2="/path/to/A2/"
asourcepath3="/path/to/A3/"

# Header receipt/invoice

# Seller details
sellerdetail=$(cat <<EOF
        Clip Clap - Info Contenido      
  Street directions street directions s/n
            Cel: +591 #########           
==========================================
EOF
)

# Footer receipt/invoice

sellerfooter=$(cat <<EOF
Gracias por su compra.
@dryncsnsx Powered by Bios Tech
---------------
Redes Sociales
fb.com/ClipsInfoContenido
tiktok.com/@clipsinfocontenido
instagram.com/ClipsContenido
x.com/ClipsContenido
EOF
)

# For Cygwin(Windows) fill with the full path
# /cygdrive/path/to/reports/

# Path Reports

clientreports="$HOME/Programs/dryncsnsx.git/reports/"

# Path Logs

copiadoslog="$HOME/Programs/dryncsnsx.git/log/copiados.log"

# Log failed Copied

fallidoslog="$HOME/Programs/dryncsnsx.git/log/fallidos.log"

# Log rsync

rsynclog="$HOME/Programs/dryncsnsx.git/log/dryncs.log"

# Nfos

urlbf="$HOME/Programs/dryncsnsx.git/nfo/Buscador de Películas Clips.url"
urlbm="$HOME/Programs/dryncsnsx.git/nfo/Buscador de Música Clips.url"
urlbj="$HOME/Programs/dryncsnsx.git/nfo/Buscador de Juegos Clips.url"
urlba="$HOME/Programs/dryncsnsx.git/nfo/Buscador de Apps Clips.url"
urlbl="$HOME/Programs/dryncsnsx.git/nfo/Buscador de Libros Clips.url"
urlbc="$HOME/Programs/dryncsnsx.git/nfo/Buscador de Comics Clips.url"

logo="$HOME/Programs/dryncsnsx.git/nfo/clipclap-info.jpg"

################
#  END CONFIG  #
################
