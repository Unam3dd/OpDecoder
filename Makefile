###################################
#
#		Disassembler Project
#
###################################

AUTHORS = Sam0verfl0w
NAME = libopdecoder
TEST_NAME = tester
VERSION = 0.0.1
DIST = dist
INC_GTEST = inc/greatest
CONTRIB_DIR = contrib
TEST_DIR	= tests

###################################
#
#			Compiler Information
#
###################################

CC = cc
CFLAGS = -Wall -Wextra -Werror -I. -Iinc 
TESTFLAGS = -I. -Iinc
CVERSION = $(shell $(CC) --version | head -n 1)

###################################
#
#			Color
#
###################################

GREEN 	= \033[32m
RED   	= \033[38;5;196m
YELLOW 	= \033[38;5;226m
ORANGE	= \033[38;5;202m
PURPLE	= \033[38;5;207m
LBLUE	= \033[38;5;45m
BLUE	= \033[38;5;26m
DGREY	= \033[90m
RESET 	= \033[00m

###################################
#
#		Percentage
#
###################################

NUM_CF	= $(shell ls -lR src/ | grep -F .c | wc -l)
PERC	= 0
cnt		= 2

###################################
#
#		Virtual Path
#
###################################

OBJDIR = obj
vpath %.c src
vpath %.h inc

###################################
#
#		CPP Sources Files
#
###################################


SRCS = $(shell find src -iname "*.c" -print | sed 's/src\///g')
OBJS = $(addprefix $(OBJDIR)/, $(SRCS:.c=.o))

###################################
#
#		CPP Sources Test Files
#
###################################

TEST_SRCS = $(shell find tests -iname "*.c" -print)
TEST_OBJS = $(addprefix $(OBJDIR)/, $(TEST_SRCS:.c=.o))
TEST_DECODER_OBJS = $(filter-out obj/main.o, $(OBJS))

ifdef DEBUG
	CFLAGS += -g -DDEBUG=1
	DIST = dbg
endif

ifdef SIZE
	CFLAGS += -O1
endif

ifdef FAST
	CFLAGS += -Ofast
endif

###################################
#
#			BANNER
#
###################################

define banner

\033[32m
		___  ____ ____ ____ ___  ____ ____ 
		|  \ |___ |    |  | |  \ |___ |__/ 
		|__/ |___ |___ |__| |__/ |___ |  \                            

		Opcodes decoder library for x86/ARM

$(LBLUE)
		Version		: $(GREEN)$(VERSION)$(LBLUE)
		CC Version	: $(GREEN)$(CVERSION)$(LBLUE)
		Credits		: $(GREEN)$(AUTHORS)$(RESET)


$(RESET)
endef
export banner


###################################
#
#			RULES		
#
###################################

all: BANNER $(DIST)/$(NAME) $(eval SHELL:=/bin/zsh)

.ONESHELL:
BANNER:
	@clear
	@printf "$$banner"
	@printf "\n[\033[0;32m\xE2\x9C\x94\033[0m] Check C Files... at \033[32m$(shell date)\033[00m\n"
	@if test -f $(DIST)/$(NAME)
	@then
	@printf "\n[\033[0;32m\xE2\x9C\x94\033[0m] Project is already Compiled ! to rebuild use make re\033[00m\n\n"
	@else
	@printf "\n[\033[0;32m\xE2\x9C\x94\033[0m] Compiling C Files... at \033[32m$(shell date)\033[00m\n\n"
	@fi

.ONESHELL:
$(OBJDIR)/%.o: %.c
	@echo -ne '\e[1A\e[1K'
	@echo -n '[ '
	@i=2
	@while [ "$$i" -le $(cnt) ]
	@do
	@if [ $(PERC) -lt "25" ]
	@then
	@echo -ne "\033[31m=\033[00m"
	@elif [ $(PERC) -gt "25" ] && [ $(PERC) -lt "75" ]
	@then
	@echo -ne "\033[33m=\033[00m"
	@else
	@echo -ne "\033[32m=\033[00m"
	@fi
	@	((i++))
	@done
	@echo -n '🚀 '
	@i=$(cnt)
	@while [ "$$i" -le $(NUM_CF) ]
	@do
	@	echo -n ' '
	@	((i++))
	@done
	@echo -n ']'
	@if [ $(PERC) -lt "25" ]
	@then
	@echo -e " (\033[31m$(PERC)%\033[00m) $<...          "
	@elif [ $(PERC) -gt "25" ] && [ $(PERC) -lt "75" ]
	@then
	@echo -e " (\033[33m$(PERC)%\033[00m) $<...          "
	@else
	@echo -e " (\033[32m$(PERC)%\033[00m) $<...          "
	@fi
	@$(CC) $(CFLAGS) -c $< -o $@
	@$(eval PERC=$(shell echo "$(cnt)/$(NUM_CF)*100" | bc -l | tr '.' '\n' | head -n 1))
	@$(eval cnt=$(shell echo $$(($(cnt)+1))))

.ONESHELL:
$(DIST)/$(NAME): $(OBJDIR) $(OBJS)
	@printf "\n[\033[0;32m\xE2\x9C\x94\033[0m] $(NAME) Created at \033[32m$(shell date)\033[00m"
	@printf "\n[\033[0;32m\xE2\x9C\x94\033[0m] Version Build	: \033[32m$(DIST)\033[00m"
	@printf "\n[\033[0;32m\xE2\x9C\x94\033[0m] Version $(NAME)	: \033[32m$(VERSION)\033[00m"
	@mkdir -p $(DIST)
	@ar rcs $(DIST)/$(NAME).a $(OBJS)
	@echo -ne "\n[\033[0;32m\xE2\x9C\x94\033[0m] Sha1sum 		: \033[32m"
	@sha1sum $(DIST)/$(NAME).a | cut -d ' ' -f1 | tr '\n' ' '
	@echo -ne "\e[00m"
	@echo -en "\n[\033[0;32m\xE2\x9C\x94\033[0m] Md5sum		: \033[32m"
	@md5sum $(DIST)/$(NAME).a | cut -d ' ' -f1 | tr '\n' ' '
	@echo -ne "\e[00m"
	@echo -ne "\n[\033[0;32m\xE2\x9C\x94\033[0m] Sha256sum 		: \033[32m"
	@sha256sum $(DIST)/$(NAME).a | cut -d ' ' -f1 | tr '\n' ' '
	@echo -ne "\e[00m"
	@$(CC) $(CFLAGS) $(OBJS) -shared -o $(DIST)/$(NAME).so

$(OBJDIR):
	@mkdir -p $(sort $(addprefix $(OBJDIR)/, $(dir $(SRCS))))

clean:
	@rm -rf $(OBJDIR)

fclean: clean
	@rm -rf $(DIST)/$(NAME)
	@rm -rf $(DIST)/$(TEST_NAME)
	@rm -rf dist dbg

re: fclean all

.ONESHELL:
$(INC_GTEST) $(CONTRIB_DIR):
	@if ! git --version > /dev/null
	@then
	@echo -e "\033[31m[-] Git is not installed"
	@else
	@echo -e "\033[32m[+] Cloning greatest please wait...\033[00m"
	@git clone https://github.com/silentbicycle/greatest.git greatest
	@mkdir -p inc/greatest
	@cp greatest/greatest.h inc/greatest
	@cp -r greatest/contrib .
	@fi
	@rm -rf greatest

obj/tests/%.o: tests/%.c
	@$(CC) $(TESTFLAGS) -Itests -c $< -o $@

$(TEST_DIR): $(OBJDIR)
	@mkdir -p $(OBJDIR)/$(TEST_DIR)

$(TEST_NAME): $(INC_GTEST) $(CONTRIB_DIR) BANNER $(DIST)/$(NAME) $(OBJS) $(TEST_DIR) $(TEST_OBJS)
	@mkdir -p $(DIST)
	@$(CC) $(TESTFLAGS) -Itests $(TEST_DISAS_OBJS) $(TEST_OBJS) -o $(DIST)/$(TEST_NAME)
	@printf "\n[\033[0;32m\xE2\x9C\x94\033[0m] Tester Created at \033[32m$(shell date)\033[00m"
	@printf "\n[\033[0;32m\xE2\x9C\x94\033[0m] Stored at \033[32m$(DIST)/$(TEST_NAME)\033[00m"

unit: $(INC_GTEST) $(CONTRIB_DIR)
	@echo -e "\033[32m\n[\033[0;32m\xE2\x9C\x94\033[0m]  Greatest was moved to project directory !"
	@echo -e "\n[\033[0;32m\xE2\x9C\x94\033[0m] You can use make test to build test executable !\033[00m"

unit_clean:
	@rm -rf greatest

unit_fclean: unit_clean
	@rm -rf inc/greatest
	@rm -rf contrib

run_tests: $(TEST_NAME)
	./$(DIST)/$(TEST_NAME) -v | ./contrib/greenest

.PHONY: all clean fclean re unit unit_clean unit_fclean test
