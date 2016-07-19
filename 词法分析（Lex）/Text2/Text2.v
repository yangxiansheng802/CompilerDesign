#############################################################################
#                     U N R E G I S T E R E D   C O P Y
# 
# You are on day 1 of your 30 day trial period.
# 
# This file was produced by an UNREGISTERED COPY of Parser Generator. It is
# for evaluation purposes only. If you continue to use Parser Generator 30
# days after installation then you are required to purchase a license. For
# more information see the online help or go to the Bumble-Bee Software
# homepage at:
# 
# http://www.bumblebeesoftware.com
# 
# This notice must remain present in the file. It cannot be removed.
#############################################################################

#############################################################################
# Text2.v
# Lex verbose file generated from Text2.l.
# 
# Date: 06/27/16
# Time: 09:23:11
# 
# ALex Version: 2.07
#############################################################################


#############################################################################
# Expressions
#############################################################################

    1  [cC][oO][nN][sS][tT]|[vV][aA][rR]|[pP][rR][oO][cC][eE][dD][uU][rR][eE]|[bB][eE][gG][iI][nN]|[eE][nN][dD]|[iI][fF]|[tT][hH][eE][nN]|[wW][hH][iI][lL][eE]|[dD][oO]|[rR][eE][aA][dD]|[cC][aA][lL][lL]|[wW][rR][iI][tT][eE]|[wW][rR][iI][tT][eE][lL][nN]

    2  \+|-|\*|\/|:=|#|=

    3  [,\.;]

    4  ([0-9])+

    5  [A-Za-z]([A-Za-z][0-9])*

    6  [" "\n\t]+


#############################################################################
# States
#############################################################################

state 1
	INITIAL

	0x09 - 0x0a (2)    goto 3
	0x20               goto 3
	0x22               goto 3
	0x23               goto 4
	0x2a - 0x2b (2)    goto 4
	0x2c               goto 5
	0x2d               goto 4
	0x2e               goto 5
	0x2f               goto 4
	0x30 - 0x39 (10)   goto 6
	0x3a               goto 7
	0x3b               goto 5
	0x3d               goto 4
	0x41               goto 8
	0x42               goto 9
	0x43               goto 10
	0x44               goto 11
	0x45               goto 12
	0x46 - 0x48 (3)    goto 8
	0x49               goto 13
	0x4a - 0x4f (6)    goto 8
	0x50               goto 14
	0x51               goto 8
	0x52               goto 15
	0x53               goto 8
	0x54               goto 16
	0x55               goto 8
	0x56               goto 17
	0x57               goto 18
	0x58 - 0x5a (3)    goto 8
	0x61               goto 8
	0x62               goto 9
	0x63               goto 10
	0x64               goto 11
	0x65               goto 12
	0x66 - 0x68 (3)    goto 8
	0x69               goto 13
	0x6a - 0x6f (6)    goto 8
	0x70               goto 14
	0x71               goto 8
	0x72               goto 15
	0x73               goto 8
	0x74               goto 16
	0x75               goto 8
	0x76               goto 17
	0x77               goto 18
	0x78 - 0x7a (3)    goto 8


state 2
	^INITIAL

	0x09 - 0x0a (2)    goto 3
	0x20               goto 3
	0x22               goto 3
	0x23               goto 4
	0x2a - 0x2b (2)    goto 4
	0x2c               goto 5
	0x2d               goto 4
	0x2e               goto 5
	0x2f               goto 4
	0x30 - 0x39 (10)   goto 6
	0x3a               goto 7
	0x3b               goto 5
	0x3d               goto 4
	0x41               goto 8
	0x42               goto 9
	0x43               goto 10
	0x44               goto 11
	0x45               goto 12
	0x46 - 0x48 (3)    goto 8
	0x49               goto 13
	0x4a - 0x4f (6)    goto 8
	0x50               goto 14
	0x51               goto 8
	0x52               goto 15
	0x53               goto 8
	0x54               goto 16
	0x55               goto 8
	0x56               goto 17
	0x57               goto 18
	0x58 - 0x5a (3)    goto 8
	0x61               goto 8
	0x62               goto 9
	0x63               goto 10
	0x64               goto 11
	0x65               goto 12
	0x66 - 0x68 (3)    goto 8
	0x69               goto 13
	0x6a - 0x6f (6)    goto 8
	0x70               goto 14
	0x71               goto 8
	0x72               goto 15
	0x73               goto 8
	0x74               goto 16
	0x75               goto 8
	0x76               goto 17
	0x77               goto 18
	0x78 - 0x7a (3)    goto 8


state 3
	0x09 - 0x0a (2)    goto 3
	0x20               goto 3
	0x22               goto 3

	match 6


state 4
	match 2


state 5
	match 3


state 6
	0x30 - 0x39 (10)   goto 6

	match 4


state 7
	0x3d               goto 4


state 8
	0x41 - 0x5a (26)   goto 19
	0x61 - 0x7a (26)   goto 19

	match 5


state 9
	0x41 - 0x44 (4)    goto 19
	0x45               goto 20
	0x46 - 0x5a (21)   goto 19
	0x61 - 0x64 (4)    goto 19
	0x65               goto 20
	0x66 - 0x7a (21)   goto 19

	match 5


state 10
	0x41               goto 21
	0x42 - 0x4e (13)   goto 19
	0x4f               goto 22
	0x50 - 0x5a (11)   goto 19
	0x61               goto 21
	0x62 - 0x6e (13)   goto 19
	0x6f               goto 22
	0x70 - 0x7a (11)   goto 19

	match 5


state 11
	0x41 - 0x4e (14)   goto 19
	0x4f               goto 23
	0x50 - 0x5a (11)   goto 19
	0x61 - 0x6e (14)   goto 19
	0x6f               goto 23
	0x70 - 0x7a (11)   goto 19

	match 5


state 12
	0x41 - 0x4d (13)   goto 19
	0x4e               goto 24
	0x4f - 0x5a (12)   goto 19
	0x61 - 0x6d (13)   goto 19
	0x6e               goto 24
	0x6f - 0x7a (12)   goto 19

	match 5


state 13
	0x41 - 0x45 (5)    goto 19
	0x46               goto 23
	0x47 - 0x5a (20)   goto 19
	0x61 - 0x65 (5)    goto 19
	0x66               goto 23
	0x67 - 0x7a (20)   goto 19

	match 5


state 14
	0x41 - 0x51 (17)   goto 19
	0x52               goto 25
	0x53 - 0x5a (8)    goto 19
	0x61 - 0x71 (17)   goto 19
	0x72               goto 25
	0x73 - 0x7a (8)    goto 19

	match 5


state 15
	0x41 - 0x44 (4)    goto 19
	0x45               goto 26
	0x46 - 0x5a (21)   goto 19
	0x61 - 0x64 (4)    goto 19
	0x65               goto 26
	0x66 - 0x7a (21)   goto 19

	match 5


state 16
	0x41 - 0x47 (7)    goto 19
	0x48               goto 27
	0x49 - 0x5a (18)   goto 19
	0x61 - 0x67 (7)    goto 19
	0x68               goto 27
	0x69 - 0x7a (18)   goto 19

	match 5


state 17
	0x41               goto 28
	0x42 - 0x5a (25)   goto 19
	0x61               goto 28
	0x62 - 0x7a (25)   goto 19

	match 5


state 18
	0x41 - 0x47 (7)    goto 19
	0x48               goto 29
	0x49 - 0x51 (9)    goto 19
	0x52               goto 30
	0x53 - 0x5a (8)    goto 19
	0x61 - 0x67 (7)    goto 19
	0x68               goto 29
	0x69 - 0x71 (9)    goto 19
	0x72               goto 30
	0x73 - 0x7a (8)    goto 19

	match 5


state 19
	0x30 - 0x39 (10)   goto 8


state 20
	0x30 - 0x39 (10)   goto 8
	0x47               goto 31
	0x67               goto 31


state 21
	0x30 - 0x39 (10)   goto 8
	0x4c               goto 32
	0x6c               goto 32


state 22
	0x30 - 0x39 (10)   goto 8
	0x4e               goto 33
	0x6e               goto 33


state 23
	0x30 - 0x39 (10)   goto 8

	match 1


state 24
	0x30 - 0x39 (10)   goto 8
	0x44               goto 34
	0x64               goto 34


state 25
	0x30 - 0x39 (10)   goto 8
	0x4f               goto 35
	0x6f               goto 35


state 26
	0x30 - 0x39 (10)   goto 8
	0x41               goto 36
	0x61               goto 36


state 27
	0x30 - 0x39 (10)   goto 8
	0x45               goto 37
	0x65               goto 37


state 28
	0x30 - 0x39 (10)   goto 8
	0x52               goto 34
	0x72               goto 34


state 29
	0x30 - 0x39 (10)   goto 8
	0x49               goto 38
	0x69               goto 38


state 30
	0x30 - 0x39 (10)   goto 8
	0x49               goto 39
	0x69               goto 39


state 31
	0x49               goto 37
	0x69               goto 37


state 32
	0x4c               goto 34
	0x6c               goto 34


state 33
	0x53               goto 40
	0x73               goto 40


state 34
	match 1


state 35
	0x43               goto 41
	0x63               goto 41


state 36
	0x44               goto 34
	0x64               goto 34


state 37
	0x4e               goto 34
	0x6e               goto 34


state 38
	0x4c               goto 42
	0x6c               goto 42


state 39
	0x54               goto 43
	0x74               goto 43


state 40
	0x54               goto 34
	0x74               goto 34


state 41
	0x45               goto 44
	0x65               goto 44


state 42
	0x45               goto 34
	0x65               goto 34


state 43
	0x45               goto 45
	0x65               goto 45


state 44
	0x44               goto 46
	0x64               goto 46


state 45
	0x4c               goto 37
	0x6c               goto 37

	match 1


state 46
	0x55               goto 47
	0x75               goto 47


state 47
	0x52               goto 42
	0x72               goto 42


#############################################################################
# Summary
#############################################################################

1 start state(s)
6 expression(s), 47 state(s)


#############################################################################
# End of File
#############################################################################
