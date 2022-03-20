#!/bin/bash
DIR=$(dirname $1)
SOURCEDIR=sources/$DIR
OBJECTDIR=objects/$DIR
HEADERDIR=headers/$DIR
BASE=$(basename $1)

[ ! -d "$SOURCEDIR" ] && mkdir -p $SOURCEDIR
[ ! -d "$OBJECTDIR" ] && mkdir -p $OBJECTDIR
[ ! -d "$HEADERDIR" ] && mkdir -p $HEADERDIR

touch $SOURCEDIR/$BASE.cpp
touch $HEADERDIR/$BASE.hpp
touch $OBJECTDIR/.gitkeep

echo "${firstString/Suzi/"$secondString"}"   

echo > $SOURCEDIR/$BASE.cpp \
$"#include \"$DIR/$BASE.hpp\"

"

echo > $HEADERDIR/$BASE.hpp \
$"#ifndef $(echo "$BASE" | tr '[:lower:]' '[:upper:]')_HPP
# define $(echo "$BASE" | tr '[:lower:]' '[:upper:]')_HPP

class $BASE
{
public:
};

#endif"
