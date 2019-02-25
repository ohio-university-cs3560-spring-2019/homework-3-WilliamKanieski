#!/bin/bash 

if [[ -e "total_files.py" ]] && [[ -r "total_files.py" ]]; then
	python3 total_files.py wc * 
fi

