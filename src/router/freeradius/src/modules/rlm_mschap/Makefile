#
# Makefile
#
# Version:	$Id: f4fc97240170bdc826b43640500c74f0b89280f1 $
#

TARGET		= rlm_mschap
SRCS		= rlm_mschap.c mschap.c smbdes.c opendir.c
HEADERS		= mschap.h smbdes.h
RLM_CFLAGS	=
RLM_LDFLAGS	=
RLM_LIBS	=
RLM_UTILS   	= smbencrypt$(EXEEXT)
RLM_INSTALL 	= smbencrypt-install

# over-ride the previous assignment if we're not building anything
include ../rules.mak

$(LT_OBJS): $(HEADERS)

smbencrypt$(EXEEXT): smbencrypt.lo smbdes.lo $(LIBRADIUS)
	$(LIBTOOL) --mode=link --tag=CC $(CC) $(LDFLAGS) $(RLM_LDFLAGS) \
		-o $@ $^ $(RLM_LIBS) $(LIBS)

smbencrypt-install:
	$(INSTALL) -d -m 755 $(R)$(bindir)
	$(LIBTOOL) --mode=install $(INSTALL) -m 755 $(INSTALLSTRIP) \
		smbencrypt$(EXEEXT) $(R)$(bindir)
