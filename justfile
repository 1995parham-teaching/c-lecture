default:
    @just --list

# build every lecture into <lecture>/main.pdf
all:
    make all

# build a single lecture, e.g. `just build lecture-8`
build lecture:
    cd {{lecture}} && latexmk

# collect the built pdfs into lectures.tar.gz
dist:
    make dist

# remove the built pdfs
clean:
    make clean

# check that the markdown and yaml are formatted
fmt:
    npx --yes prettier@3 --write .
