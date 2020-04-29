# -*- Makefile -*-
#
# Copyright 2006 Sandia Corporation. Under the terms of Contract
# DE-AC04-94AL85000 with Sandia Corporation, the U.S. Government
# retains certain rights in this software.
#
# This program is free software; you can redistribute it and/or
# modify it under the terms of the GNU General Public License
# as published by the Free Software Foundation; either version 2
# of the License, or (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software
# Foundation, Inc., 51 Franklin Street, Fifth Floor, 
# Boston, MA  02110-1301, USA.

RELEASE_VERSION = 1.0

CC = mpicc -cc=gcc -g -O3 -flto
#CC1 = mpicc -cc=gcc -g -O3 -flto -fprofile-generate
#CC2 = mpicc -cc=gcc -g -O3 -flto -fprofile-use -fprofile-correction
MPI_COMPILE_FLAGS = -I/disk1/jtan/mpich/mpich-3.1.3/install/include
MPI_LINK_FLAGS = -L/disk1/jtan/mpich/mpich-3.1.3/install/lib -Wl,-rpath -Wl,/disk1/jtan/mpich/mpich-3.1.3/install/lib -Wl,--enable-new-dtags -lmpi

CPPFLAGS = -DVERSION=$(RELEASE_VERSION)
CFLAGS = -flto $(MPI_COMPILE_FLAGS)
LDFLAGS = $(MPI_LINK_FLAGS)

msgrate: msgrate.o

msgrate.o: msgrate.c

clean:
	rm -f *.gcda msgrate.o msgrate *~

