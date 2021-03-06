# $NetBSD: Makefile.inc,v 1.3.14.1 2017/08/20 05:44:29 snj Exp $

BINDIR=/usr/libexec

LDADD+= -lheimntlm -lkrb5 -lhx509 -lheimbase
LDADD+= -lasn1 -lcom_err -lroken ${LIBVERS}
LDADD+= -lwind
LDADD+= -lcrypto -lcrypt
LDADD+= -lsqlite3 -lutil

DPADD+= ${LIBKRB5} ${LIBHX509}
DPADD+= ${LIBASN1} ${LIBCOM_ERR} ${LIBROKEN} ${LIBVERS}
DPADD+= ${LIBHEIMBASE} ${LIBHEIMNTLM} ${LIBWIND}
DPADD+= ${LIBCRYPTO} ${LIBCRYPT}
DPADD+= ${LIBSQLITE3} ${LIBUTIL}
