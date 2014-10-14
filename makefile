CC = gcc
CFLAGS = -O -ggdb 
HFILES = prs.h
CFILES = main.c printing.c compute.c utility.c
EFILE = prs
OUTD = .

all: $(EFILE)
	@echo "Compiled successfully. Executable created: $(OUTD)/$(EFILE)"

$(EFILE): $(CFILES) $(HFILES)
	@$(CC) $(CFLAGS) $(CFILES) -o $(OUTD)/$(EFILE)

clean:
	@rm $(EFILE) -f
	@echo "Cleaned."
