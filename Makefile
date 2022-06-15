##
## EPITECH PROJECT, 2022
## B-MUL-200-MPL-2-1-mydefender-hippolyte.aubert
## File description:
## Makefile
##

################### Color ########################

BLUE			=	/bin/echo -e "\x1b[34;01m$1\x1b[0m"
GREEN			=	/bin/echo -e "\x1b[32;01m$1\x1b[0m"

#################### Make ########################

CC			=	@gcc
CFLAGS		=	-W -Wextra -I./
LDFLAGS		=	-lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio
DEBUG		=	-g3

#################### Rules #######################

SRC		=	$(wildcard script/*.c) \
			$(wildcard script/event/*.c) \
			$(wildcard script/audio/*.c) \
			$(wildcard script/menu/*.c) \
			$(wildcard script/scene/*.c) \
			$(wildcard script/game/*.c) \
			$(wildcard script/end/*.c) \
			$(wildcard script/game/enemies/*.c) \
			$(wildcard script/game/weapons/*.c) \
			$(wildcard script/init/*.c) \
			$(wildcard script/tools/*.c) \
			$(wildcard script/pause/*.c) \
			$(wildcard script/shop/*.c) \
			$(wildcard script/weapons/*.c) \

OBJ		=	$(SRC:.c=.o)

BIN		=	my_defender

all:	$(OBJ)
		@$(CC) $(CFLAGS) $(OBJ) -o $(BIN) $(LDFLAGS)
		@$(call BLUE,"Build [OK] 🏗️")
		@$(call GREEN,"Defender [OK] 🎮")

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -f $(BIN)
	@$(call BLUE,"Fclean [OK] 🧹")

re: fclean all

################# My Commands ####################
g3:
	$(eval CFLAGS += $(DEBUG))
	@$(call BLUE,"Build -g3 [OK] 🔎")

my: re clean
