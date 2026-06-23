#!/bin/bash

if [[ "$#" < 2 ]]; then
	echo "Usage: ./sheet ./directory_containing_images ./output_directory"
	exit 1
fi

files=()

for file in "$1"*.png ;do
	files+=("$file")
done

magick montage -background transparent -geometry 128x128 "${files[@]}" "$2/montage_no_pallete.png"

magick ./output/raw_renders/ThinWall0.png -background "#FE01FD" -alpha remove -remap pallete.png ThinWall0.png

