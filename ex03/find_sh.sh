find . -name "*.sh" -print | rev | cut -c4- | cut -d/ -f1 | rev | cat -e
