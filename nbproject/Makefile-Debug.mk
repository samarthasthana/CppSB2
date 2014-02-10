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
CND_PLATFORM=Cygwin-Windows
CND_DLIB_EXT=dll
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/_ext/2109343375/BinSearchMod.o \
	${OBJECTDIR}/_ext/2109343375/Btree_2.o \
	${OBJECTDIR}/_ext/2109343375/ReverseSent.o \
	${OBJECTDIR}/_ext/2109343375/SortStack.o \
	${OBJECTDIR}/_ext/2109343375/main.o \
	${OBJECTDIR}/ListLoop.o


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
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cppsb2.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cppsb2.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cppsb2 ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/_ext/2109343375/BinSearchMod.o: ../CppSB2/BinSearchMod.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/2109343375
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/2109343375/BinSearchMod.o ../CppSB2/BinSearchMod.cpp

${OBJECTDIR}/_ext/2109343375/Btree_2.o: ../CppSB2/Btree_2.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/2109343375
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/2109343375/Btree_2.o ../CppSB2/Btree_2.cpp

${OBJECTDIR}/_ext/2109343375/ReverseSent.o: ../CppSB2/ReverseSent.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/2109343375
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/2109343375/ReverseSent.o ../CppSB2/ReverseSent.cpp

${OBJECTDIR}/_ext/2109343375/SortStack.o: ../CppSB2/SortStack.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/2109343375
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/2109343375/SortStack.o ../CppSB2/SortStack.cpp

${OBJECTDIR}/_ext/2109343375/main.o: ../CppSB2/main.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/2109343375
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/2109343375/main.o ../CppSB2/main.cpp

${OBJECTDIR}/ListLoop.o: ListLoop.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/ListLoop.o ListLoop.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cppsb2.exe

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
