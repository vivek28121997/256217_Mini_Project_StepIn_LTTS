PROJ_NAME = washing_machine
TEST_PROJ_NAME = Test_$(PROJ_NAME)

SRC =src/w.c\
src/start.c\
src/System_checks.c\
src/Loadsize.c\
src/soak.c\
src/soakTime.c\
src/Temperature.c\
src/inputlog.c\
src/processlog.c

COV_SRC = test/test_wmcs.c

TEST_SRC = test/test_wmcs.c \
unity/unity.c 
INC_H = inc
INC_T = unity

#To check if the OS is Windows or Linux and set the executable file extension and delete command accordingly
ifdef OS
   RM = del 
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif
# Makefile will not run target command if the name with file already exists. To override, use .PHONY
.PHONY: run clean test doc all

all:
	gcc -I $(INC_H) $(SRC) main.c -o $(call FixPath,$(PROJ_NAME).$(EXEC))
	
run:
	$(call FixPath,$(PROJ_NAME).$(EXEC))
test:
	gcc -I $(INC_H) -I $(INC_T) $(TEST_SRC) $(SRC) -o $(call FixPath,$(TEST_PROJ_NAME).$(EXEC))
	./$(call FixPath,$(TEST_PROJ_NAME).$(EXEC))

coverage:
	cp test/test_wmcs.c .
	gcc -fprofile-arcs -ftest-coverage -I $(INC_H) -I $(INC_T) unity/unity.c test/test_wmcs.c $(SRC) -o $(call FixPath, $(TEST_PROJ_NAME).$(EXEC))
	$(call FixPath, ./$(TEST_PROJ_NAME).$(EXEC))
	gcov -a $(COV_SRC)
	$(RM) *.$(EXEC)
	$(RM) *.gcda
	$(RM) *.gcno
	$(RM) *.c.gcov
	$(RM) *.DAT
	$(RM) test_wmcs.c


cppcheck:
	cppcheck --enable=all $(SRC) main.c
debug:
	gcc -I $(INC_H) $(SRC) main.c -g -o $(PROJ_NAME).$(EXEC)
	gdb $(PROJ_NAME).$(EXEC)

valgrind:
	valgrind ./$(TEST_PROJ_NAME).$(EXEC)


clean:
	$(RM) *.DAT
	$(RM) *.$(EXEC)
	$(RM) *.gcda
	$(RM) *.gcno
	$(RM) *.c.gcov	
