lectures := $(shell find -type d -name 'lecture-*')

.PHONY = clean dist

all: $(lectures:%=%/main.pdf)

dist: $(lectures:%=%/main.pdf)
	$(foreach lecture,$(lectures:%=%),cp $(lecture)/main.pdf $(lecture).pdf;)
	tar cvfz lectures.tar.gz $(lectures:%=%.pdf)
	rm $(lectures:%=%.pdf)

$(lectures:%=%/main.pdf): $(lectures:%=%/main.tex)
	@echo "building $@"
	cd $(dir $@) && latexmk

clean:
	rm $(lectures:%=%/main.pdf)
