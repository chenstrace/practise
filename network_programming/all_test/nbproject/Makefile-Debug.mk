#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU-Linux
CND_DLIB_EXT=so
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/ABC.o \
	${OBJECTDIR}/epoll_et_test.o \
	${OBJECTDIR}/first_epoll.o \
	${OBJECTDIR}/for_fork_puzzle.o \
	${OBJECTDIR}/main.o \
	${OBJECTDIR}/pipe_test.o \
	${OBJECTDIR}/recvmsg.o \
	${OBJECTDIR}/sendmsg.o \
	${OBJECTDIR}/sizeof_test.o \
	${OBJECTDIR}/socketpair_nonblock_in_one_process.o \
	${OBJECTDIR}/socketpair_test.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk all_test

all_test: ${OBJECTFILES}
	${LINK.cc} -o all_test ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/ABC.o: ABC.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ABC.o ABC.cpp

${OBJECTDIR}/epoll_et_test.o: epoll_et_test.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/epoll_et_test.o epoll_et_test.cpp

${OBJECTDIR}/first_epoll.o: first_epoll.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/first_epoll.o first_epoll.cpp

${OBJECTDIR}/for_fork_puzzle.o: for_fork_puzzle.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/for_fork_puzzle.o for_fork_puzzle.cpp

${OBJECTDIR}/main.o: main.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

${OBJECTDIR}/pipe_test.o: pipe_test.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/pipe_test.o pipe_test.cpp

${OBJECTDIR}/recvmsg.o: recvmsg.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/recvmsg.o recvmsg.cpp

${OBJECTDIR}/sendmsg.o: sendmsg.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/sendmsg.o sendmsg.cpp

${OBJECTDIR}/sizeof_test.o: sizeof_test.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/sizeof_test.o sizeof_test.cpp

${OBJECTDIR}/socketpair_nonblock_in_one_process.o: socketpair_nonblock_in_one_process.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/socketpair_nonblock_in_one_process.o socketpair_nonblock_in_one_process.cpp

${OBJECTDIR}/socketpair_test.o: socketpair_test.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/socketpair_test.o socketpair_test.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
