find . -type f -name '*.sh' -printf '%P\n' | sed 's/\.sh$//'
