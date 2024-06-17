# 1 "gzip.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "gzip.c"
# 1 "/usr/include/ctype.h" 1 3 4
# 25 "/usr/include/ctype.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 461 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 1 3 4
# 452 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 453 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/long-double.h" 1 3 4
# 454 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 462 "/usr/include/features.h" 2 3 4
# 485 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 2 3 4
# 486 "/usr/include/features.h" 2 3 4
# 26 "/usr/include/ctype.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/timesize.h" 1 3 4
# 29 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4

# 31 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;

typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;

typedef __int8_t __int_least8_t;
typedef __uint8_t __uint_least8_t;
typedef __int16_t __int_least16_t;
typedef __uint16_t __uint_least16_t;
typedef __int32_t __int_least32_t;
typedef __uint32_t __uint_least32_t;
typedef __int64_t __int_least64_t;
typedef __uint64_t __uint_least64_t;

typedef long int __quad_t;
typedef unsigned long int __u_quad_t;

typedef long int __intmax_t;
typedef unsigned long int __uintmax_t;
# 141 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 1 3 4
# 142 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/time64.h" 1 3 4
# 143 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4

typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct
{
  int __val[2];
} __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef int __key_t;

typedef int __clockid_t;

typedef void *__timer_t;

typedef long int __blksize_t;

typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;

typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;

typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;

typedef long int __fsword_t;

typedef long int __ssize_t;

typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;

typedef __off64_t __loff_t;
typedef char *__caddr_t;

typedef long int __intptr_t;

typedef unsigned int __socklen_t;

typedef int __sig_atomic_t;
# 27 "/usr/include/ctype.h" 2 3 4

# 39 "/usr/include/ctype.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/endian.h" 1 3 4
# 35 "/usr/include/x86_64-linux-gnu/bits/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/endianness.h" 1 3 4
# 36 "/usr/include/x86_64-linux-gnu/bits/endian.h" 2 3 4
# 40 "/usr/include/ctype.h" 2 3 4

enum
{
  _ISupper = ((0) < 8 ? ((1 << (0)) << 8) : ((1 << (0)) >> 8)),
  _ISlower = ((1) < 8 ? ((1 << (1)) << 8) : ((1 << (1)) >> 8)),
  _ISalpha = ((2) < 8 ? ((1 << (2)) << 8) : ((1 << (2)) >> 8)),
  _ISdigit = ((3) < 8 ? ((1 << (3)) << 8) : ((1 << (3)) >> 8)),
  _ISxdigit = ((4) < 8 ? ((1 << (4)) << 8) : ((1 << (4)) >> 8)),
  _ISspace = ((5) < 8 ? ((1 << (5)) << 8) : ((1 << (5)) >> 8)),
  _ISprint = ((6) < 8 ? ((1 << (6)) << 8) : ((1 << (6)) >> 8)),
  _ISgraph = ((7) < 8 ? ((1 << (7)) << 8) : ((1 << (7)) >> 8)),
  _ISblank = ((8) < 8 ? ((1 << (8)) << 8) : ((1 << (8)) >> 8)),
  _IScntrl = ((9) < 8 ? ((1 << (9)) << 8) : ((1 << (9)) >> 8)),
  _ISpunct = ((10) < 8 ? ((1 << (10)) << 8) : ((1 << (10)) >> 8)),
  _ISalnum = ((11) < 8 ? ((1 << (11)) << 8) : ((1 << (11)) >> 8))
};
# 79 "/usr/include/ctype.h" 3 4
extern const unsigned short int **__ctype_b_loc(void)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern const __int32_t **__ctype_tolower_loc(void)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern const __int32_t **__ctype_toupper_loc(void)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
# 108 "/usr/include/ctype.h" 3 4
extern int isalnum(int) __attribute__((__nothrow__, __leaf__));
extern int isalpha(int) __attribute__((__nothrow__, __leaf__));
extern int iscntrl(int) __attribute__((__nothrow__, __leaf__));
extern int isdigit(int) __attribute__((__nothrow__, __leaf__));
extern int islower(int) __attribute__((__nothrow__, __leaf__));
extern int isgraph(int) __attribute__((__nothrow__, __leaf__));
extern int isprint(int) __attribute__((__nothrow__, __leaf__));
extern int ispunct(int) __attribute__((__nothrow__, __leaf__));
extern int isspace(int) __attribute__((__nothrow__, __leaf__));
extern int isupper(int) __attribute__((__nothrow__, __leaf__));
extern int isxdigit(int) __attribute__((__nothrow__, __leaf__));

extern int tolower(int __c) __attribute__((__nothrow__, __leaf__));

extern int toupper(int __c) __attribute__((__nothrow__, __leaf__));

extern int isblank(int) __attribute__((__nothrow__, __leaf__));
# 142 "/usr/include/ctype.h" 3 4
extern int isascii(int __c) __attribute__((__nothrow__, __leaf__));

extern int toascii(int __c) __attribute__((__nothrow__, __leaf__));

extern int _toupper(int) __attribute__((__nothrow__, __leaf__));
extern int _tolower(int) __attribute__((__nothrow__, __leaf__));
# 237 "/usr/include/ctype.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/locale_t.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/types/locale_t.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/__locale_t.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/types/__locale_t.h" 3 4
struct __locale_struct
{

  struct __locale_data *__locales[13];

  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;

  const char *__names[13];
};

typedef struct __locale_struct *__locale_t;
# 23 "/usr/include/x86_64-linux-gnu/bits/types/locale_t.h" 2 3 4

typedef __locale_t locale_t;
# 238 "/usr/include/ctype.h" 2 3 4
# 251 "/usr/include/ctype.h" 3 4
extern int isalnum_l(int, locale_t) __attribute__((__nothrow__, __leaf__));
extern int isalpha_l(int, locale_t) __attribute__((__nothrow__, __leaf__));
extern int iscntrl_l(int, locale_t) __attribute__((__nothrow__, __leaf__));
extern int isdigit_l(int, locale_t) __attribute__((__nothrow__, __leaf__));
extern int islower_l(int, locale_t) __attribute__((__nothrow__, __leaf__));
extern int isgraph_l(int, locale_t) __attribute__((__nothrow__, __leaf__));
extern int isprint_l(int, locale_t) __attribute__((__nothrow__, __leaf__));
extern int ispunct_l(int, locale_t) __attribute__((__nothrow__, __leaf__));
extern int isspace_l(int, locale_t) __attribute__((__nothrow__, __leaf__));
extern int isupper_l(int, locale_t) __attribute__((__nothrow__, __leaf__));
extern int isxdigit_l(int, locale_t) __attribute__((__nothrow__, __leaf__));

extern int isblank_l(int, locale_t) __attribute__((__nothrow__, __leaf__));

extern int __tolower_l(int __c, locale_t __l) __attribute__((__nothrow__, __leaf__));
extern int tolower_l(int __c, locale_t __l) __attribute__((__nothrow__, __leaf__));

extern int __toupper_l(int __c, locale_t __l) __attribute__((__nothrow__, __leaf__));
extern int toupper_l(int __c, locale_t __l) __attribute__((__nothrow__, __leaf__));
# 327 "/usr/include/ctype.h" 3 4

# 2 "gzip.c" 2
# 1 "/usr/include/dirent.h" 1 3 4
# 27 "/usr/include/dirent.h" 3 4

# 61 "/usr/include/dirent.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/dirent.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/dirent.h" 3 4
struct dirent
{

  __ino_t d_ino;
  __off_t d_off;

  unsigned short int d_reclen;
  unsigned char d_type;
  char d_name[256];
};
# 62 "/usr/include/dirent.h" 2 3 4
# 97 "/usr/include/dirent.h" 3 4
enum
{
  DT_UNKNOWN = 0,

  DT_FIFO = 1,

  DT_CHR = 2,

  DT_DIR = 4,

  DT_BLK = 6,

  DT_REG = 8,

  DT_LNK = 10,

  DT_SOCK = 12,

  DT_WHT = 14

};
# 127 "/usr/include/dirent.h" 3 4
typedef struct __dirstream DIR;

extern DIR *opendir(const char *__name) __attribute__((__nonnull__(1)));

extern DIR *fdopendir(int __fd);

extern int closedir(DIR *__dirp) __attribute__((__nonnull__(1)));
# 162 "/usr/include/dirent.h" 3 4
extern struct dirent *readdir(DIR *__dirp) __attribute__((__nonnull__(1)));
# 183 "/usr/include/dirent.h" 3 4
extern int readdir_r(DIR *__restrict __dirp,
                     struct dirent *__restrict __entry,
                     struct dirent **__restrict __result)
    __attribute__((__nonnull__(1, 2, 3))) __attribute__((__deprecated__));
# 209 "/usr/include/dirent.h" 3 4
extern void rewinddir(DIR *__dirp) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));

extern void seekdir(DIR *__dirp, long int __pos) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));

extern long int telldir(DIR *__dirp) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));

extern int dirfd(DIR *__dirp) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));
# 233 "/usr/include/dirent.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 2 3 4
# 161 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 1 3 4
# 38 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 3 4
# 1 "/usr/include/linux/limits.h" 1 3 4
# 39 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 2 3 4
# 162 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 2 3 4
# 234 "/usr/include/dirent.h" 2 3 4
# 245 "/usr/include/dirent.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 1 3 4
# 209 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 246 "/usr/include/dirent.h" 2 3 4
# 255 "/usr/include/dirent.h" 3 4
// extern int scandir(const char *__restrict __dir,
//                    struct dirent ***__restrict __namelist,
//                    int (*__selector)(const struct dirent *),
//                    int (*__cmp)(const struct dirent **,
//                                 const struct dirent **))
    // __attribute__((__nonnull__(1, 2)));
# 325 "/usr/include/dirent.h" 3 4
extern int alphasort(const struct dirent **__e1,
                     const struct dirent **__e2)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__)) __attribute__((__nonnull__(1, 2)));
# 353 "/usr/include/dirent.h" 3 4
extern __ssize_t getdirentries(int __fd, char *__restrict __buf,
                               size_t __nbytes,
                               __off_t *__restrict __basep)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(2, 4)));
# 402 "/usr/include/dirent.h" 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/dirent_ext.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/dirent_ext.h" 3 4

# 33 "/usr/include/x86_64-linux-gnu/bits/dirent_ext.h" 3 4

# 405 "/usr/include/dirent.h" 2 3 4
# 3 "gzip.c" 2
# 1 "/usr/include/errno.h" 1 3 4
# 28 "/usr/include/errno.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/errno.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/errno.h" 3 4
# 1 "/usr/include/linux/errno.h" 1 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/errno.h" 1 3 4
# 1 "/usr/include/asm-generic/errno.h" 1 3 4

# 1 "/usr/include/asm-generic/errno-base.h" 1 3 4
# 6 "/usr/include/asm-generic/errno.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/errno.h" 2 3 4
# 1 "/usr/include/linux/errno.h" 2 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/errno.h" 2 3 4
# 29 "/usr/include/errno.h" 2 3 4

extern int *__errno_location(void) __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
# 52 "/usr/include/errno.h" 3 4

# 4 "gzip.c" 2
# 1 "/usr/include/fcntl.h" 1 3 4
# 28 "/usr/include/fcntl.h" 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/fcntl.h" 1 3 4
# 35 "/usr/include/x86_64-linux-gnu/bits/fcntl.h" 3 4
struct flock
{
  short int l_type;
  short int l_whence;

  __off_t l_start;
  __off_t l_len;

  __pid_t l_pid;
};
# 61 "/usr/include/x86_64-linux-gnu/bits/fcntl.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 1 3 4
# 392 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 3 4

# 466 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 3 4

# 61 "/usr/include/x86_64-linux-gnu/bits/fcntl.h" 2 3 4
# 36 "/usr/include/fcntl.h" 2 3 4
# 50 "/usr/include/fcntl.h" 3 4
typedef __mode_t mode_t;

typedef __off_t off_t;
# 69 "/usr/include/fcntl.h" 3 4
typedef __pid_t pid_t;

# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h" 3 4
struct timespec
{
  __time_t tv_sec;

  __syscall_slong_t tv_nsec;
# 26 "/usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h" 3 4
};
# 76 "/usr/include/fcntl.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/stat.h" 1 3 4
# 46 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
struct stat
{
  __dev_t st_dev;

  __ino_t st_ino;

  __nlink_t st_nlink;
  __mode_t st_mode;

  __uid_t st_uid;
  __gid_t st_gid;

  int __pad0;

  __dev_t st_rdev;

  __off_t st_size;

  __blksize_t st_blksize;

  __blkcnt_t st_blocks;
# 91 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
  struct timespec st_atim;
  struct timespec st_mtim;
  struct timespec st_ctim;
# 106 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
  __syscall_slong_t __glibc_reserved[3];
# 115 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
};
# 79 "/usr/include/fcntl.h" 2 3 4
# 148 "/usr/include/fcntl.h" 3 4
extern int fcntl(int __fd, int __cmd, ...);
# 168 "/usr/include/fcntl.h" 3 4
extern int open(const char *__file, int __oflag, ...) __attribute__((__nonnull__(1)));
# 192 "/usr/include/fcntl.h" 3 4
extern int openat(int __fd, const char *__file, int __oflag, ...)
    __attribute__((__nonnull__(2)));
# 214 "/usr/include/fcntl.h" 3 4
extern int creat(const char *__file, mode_t __mode) __attribute__((__nonnull__(1)));
# 243 "/usr/include/fcntl.h" 3 4
extern int lockf(int __fd, int __cmd, off_t __len);
# 260 "/usr/include/fcntl.h" 3 4
extern int posix_fadvise(int __fd, off_t __offset, off_t __len,
                         int __advise) __attribute__((__nothrow__, __leaf__));
# 282 "/usr/include/fcntl.h" 3 4
extern int posix_fallocate(int __fd, off_t __offset, off_t __len);
# 304 "/usr/include/fcntl.h" 3 4

# 5 "gzip.c" 2
# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/limits.h" 1 3 4
# 34 "/usr/lib/gcc/x86_64-linux-gnu/9/include/limits.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/syslimits.h" 1 3 4

# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/limits.h" 1 3 4
# 194 "/usr/lib/gcc/x86_64-linux-gnu/9/include/limits.h" 3 4
# 1 "/usr/include/limits.h" 1 3 4
# 26 "/usr/include/limits.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 27 "/usr/include/limits.h" 2 3 4
# 187 "/usr/include/limits.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/posix2_lim.h" 1 3 4
# 188 "/usr/include/limits.h" 2 3 4
# 195 "/usr/lib/gcc/x86_64-linux-gnu/9/include/limits.h" 2 3 4
# 8 "/usr/lib/gcc/x86_64-linux-gnu/9/include/syslimits.h" 2 3 4
# 35 "/usr/lib/gcc/x86_64-linux-gnu/9/include/limits.h" 2 3 4
# 6 "gzip.c" 2
# 1 "/usr/include/malloc.h" 1 3 4
# 23 "/usr/include/malloc.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 1 3 4
# 143 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 321 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 3 4
typedef int wchar_t;
# 415 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 3 4
typedef struct
{
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
# 426 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 3 4
} max_align_t;
# 24 "/usr/include/malloc.h" 2 3 4
# 1 "/usr/include/stdio.h" 1 3 4
# 27 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 28 "/usr/include/stdio.h" 2 3 4

# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 1 3 4
# 34 "/usr/include/stdio.h" 2 3 4

# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 37 "/usr/include/stdio.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types/__fpos_t.h" 1 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h" 1 3 4
# 13 "/usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h" 3 4
typedef struct
{
  int __count;
  union
  {
    unsigned int __wch;
    char __wchb[4];
  } __value;
} __mbstate_t;
# 6 "/usr/include/x86_64-linux-gnu/bits/types/__fpos_t.h" 2 3 4

typedef struct _G_fpos_t
{
  __off_t __pos;
  __mbstate_t __state;
} __fpos_t;
# 40 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/__fpos64_t.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/bits/types/__fpos64_t.h" 3 4
typedef struct _G_fpos64_t
{
  __off64_t __pos;
  __mbstate_t __state;
} __fpos64_t;
# 41 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/__FILE.h" 1 3 4

struct _IO_FILE;
typedef struct _IO_FILE __FILE;
# 42 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/FILE.h" 1 3 4

struct _IO_FILE;

typedef struct _IO_FILE FILE;
# 43 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h" 1 3 4
# 35 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h" 3 4
struct _IO_FILE;
struct _IO_marker;
struct _IO_codecvt;
struct _IO_wide_data;

typedef void _IO_lock_t;

struct _IO_FILE
{
  int _flags;

  char *_IO_read_ptr;
  char *_IO_read_end;
  char *_IO_read_base;
  char *_IO_write_base;
  char *_IO_write_ptr;
  char *_IO_write_end;
  char *_IO_buf_base;
  char *_IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;
  int _flags2;
  __off_t _old_offset;

  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];

  _IO_lock_t *_lock;

  __off64_t _offset;

  struct _IO_codecvt *_codecvt;
  struct _IO_wide_data *_wide_data;
  struct _IO_FILE *_freeres_list;
  void *_freeres_buf;
  size_t __pad5;
  int _mode;

  char _unused2[15 * sizeof(int) - 4 * sizeof(void *) - sizeof(size_t)];
};
# 44 "/usr/include/stdio.h" 2 3 4
# 52 "/usr/include/stdio.h" 3 4
typedef __gnuc_va_list va_list;
# 77 "/usr/include/stdio.h" 3 4
typedef __ssize_t ssize_t;

typedef __fpos_t fpos_t;
# 133 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdio_lim.h" 1 3 4
# 134 "/usr/include/stdio.h" 2 3 4

extern FILE *stdin;
extern FILE *stdout;
extern FILE *stderr;

extern int remove(const char *__filename) __attribute__((__nothrow__, __leaf__));

extern int rename(const char *__old, const char *__new) __attribute__((__nothrow__, __leaf__));

extern int renameat(int __oldfd, const char *__old, int __newfd,
                    const char *__new) __attribute__((__nothrow__, __leaf__));
# 173 "/usr/include/stdio.h" 3 4
extern FILE *tmpfile(void);
# 187 "/usr/include/stdio.h" 3 4
extern char *tmpnam(char *__s) __attribute__((__nothrow__, __leaf__));

extern char *tmpnam_r(char *__s) __attribute__((__nothrow__, __leaf__));
# 204 "/usr/include/stdio.h" 3 4
extern char *tempnam(const char *__dir, const char *__pfx)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__malloc__));

extern int fclose(FILE *__stream);

extern int fflush(FILE *__stream);
# 227 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked(FILE *__stream);
# 246 "/usr/include/stdio.h" 3 4
extern FILE *fopen(const char *__restrict __filename,
                   const char *__restrict __modes);

extern FILE *freopen(const char *__restrict __filename,
                     const char *__restrict __modes,
                     FILE *__restrict __stream);
# 279 "/usr/include/stdio.h" 3 4
extern FILE *fdopen(int __fd, const char *__modes) __attribute__((__nothrow__, __leaf__));
# 292 "/usr/include/stdio.h" 3 4
extern FILE *fmemopen(void *__s, size_t __len, const char *__modes)
    __attribute__((__nothrow__, __leaf__));

extern FILE *open_memstream(char **__bufloc, size_t *__sizeloc) __attribute__((__nothrow__, __leaf__));

extern void setbuf(FILE *__restrict __stream, char *__restrict __buf) __attribute__((__nothrow__, __leaf__));

extern int setvbuf(FILE *__restrict __stream, char *__restrict __buf,
                   int __modes, size_t __n) __attribute__((__nothrow__, __leaf__));

extern void setbuffer(FILE *__restrict __stream, char *__restrict __buf,
                      size_t __size) __attribute__((__nothrow__, __leaf__));

extern void setlinebuf(FILE *__stream) __attribute__((__nothrow__, __leaf__));

extern int fprintf(FILE *__restrict __stream,
                   const char *__restrict __format, ...);

extern int printf(const char *__restrict __format, ...);

extern int sprintf(char *__restrict __s,
                   const char *__restrict __format, ...) __attribute__((__nothrow__));

extern int vfprintf(FILE *__restrict __s, const char *__restrict __format,
                    __gnuc_va_list __arg);

extern int vprintf(const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf(char *__restrict __s, const char *__restrict __format,
                    __gnuc_va_list __arg) __attribute__((__nothrow__));

extern int snprintf(char *__restrict __s, size_t __maxlen,
                    const char *__restrict __format, ...)
    __attribute__((__nothrow__)) __attribute__((__format__(__printf__, 3, 4)));

extern int vsnprintf(char *__restrict __s, size_t __maxlen,
                     const char *__restrict __format, __gnuc_va_list __arg)
    __attribute__((__nothrow__)) __attribute__((__format__(__printf__, 3, 0)));
# 379 "/usr/include/stdio.h" 3 4
extern int vdprintf(int __fd, const char *__restrict __fmt,
                    __gnuc_va_list __arg)
    __attribute__((__format__(__printf__, 2, 0)));
extern int dprintf(int __fd, const char *__restrict __fmt, ...)
    __attribute__((__format__(__printf__, 2, 3)));

extern int fscanf(FILE *__restrict __stream,
                  const char *__restrict __format, ...);

extern int scanf(const char *__restrict __format, ...);

extern int sscanf(const char *__restrict __s,
                  const char *__restrict __format, ...) __attribute__((__nothrow__, __leaf__));

extern int fscanf(FILE *__restrict __stream, const char *__restrict __format, ...) __asm__(""
                                                                                           "__isoc99_fscanf")

    ;
extern int scanf(const char *__restrict __format, ...) __asm__(""
                                                               "__isoc99_scanf");
extern int sscanf(const char *__restrict __s, const char *__restrict __format, ...) __asm__(""
                                                                                            "__isoc99_sscanf") __attribute__((__nothrow__, __leaf__))

;
# 432 "/usr/include/stdio.h" 3 4
extern int vfscanf(FILE *__restrict __s, const char *__restrict __format,
                   __gnuc_va_list __arg)
    __attribute__((__format__(__scanf__, 2, 0)));

extern int vscanf(const char *__restrict __format, __gnuc_va_list __arg)
    __attribute__((__format__(__scanf__, 1, 0)));

extern int vsscanf(const char *__restrict __s,
                   const char *__restrict __format, __gnuc_va_list __arg)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__format__(__scanf__, 2, 0)));

extern int vfscanf(FILE *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__(""
                                                                                                        "__isoc99_vfscanf")

    __attribute__((__format__(__scanf__, 2, 0)));
extern int vscanf(const char *__restrict __format, __gnuc_va_list __arg) __asm__(""
                                                                                 "__isoc99_vscanf")

    __attribute__((__format__(__scanf__, 1, 0)));
extern int vsscanf(const char *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__(""
                                                                                                              "__isoc99_vsscanf") __attribute__((__nothrow__, __leaf__))

__attribute__((__format__(__scanf__, 2, 0)));
# 485 "/usr/include/stdio.h" 3 4
extern int fgetc(FILE *__stream);
extern int getc(FILE *__stream);

extern int getchar(void);

extern int getc_unlocked(FILE *__stream);
extern int getchar_unlocked(void);
# 510 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked(FILE *__stream);
# 521 "/usr/include/stdio.h" 3 4
extern int fputc(int __c, FILE *__stream);
extern int putc(int __c, FILE *__stream);

extern int putchar(int __c);
# 537 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked(int __c, FILE *__stream);

extern int putc_unlocked(int __c, FILE *__stream);
extern int putchar_unlocked(int __c);

extern int getw(FILE *__stream);

extern int putw(int __w, FILE *__stream);

extern char *fgets(char *__restrict __s, int __n, FILE *__restrict __stream);
# 603 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim(char **__restrict __lineptr,
                            size_t *__restrict __n, int __delimiter,
                            FILE *__restrict __stream);
extern __ssize_t getdelim(char **__restrict __lineptr,
                          size_t *__restrict __n, int __delimiter,
                          FILE *__restrict __stream);

extern __ssize_t getline(char **__restrict __lineptr,
                         size_t *__restrict __n,
                         FILE *__restrict __stream);

extern int fputs(const char *__restrict __s, FILE *__restrict __stream);

extern int puts(const char *__s);

extern int ungetc(int __c, FILE *__stream);

extern size_t fread(void *__restrict __ptr, size_t __size,
                    size_t __n, FILE *__restrict __stream);

extern size_t fwrite(const void *__restrict __ptr, size_t __size,
                     size_t __n, FILE *__restrict __s);
# 673 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked(void *__restrict __ptr, size_t __size,
                             size_t __n, FILE *__restrict __stream);
extern size_t fwrite_unlocked(const void *__restrict __ptr, size_t __size,
                              size_t __n, FILE *__restrict __stream);

extern int fseek(FILE *__stream, long int __off, int __whence);

extern long int ftell(FILE *__stream);

extern void rewind(FILE *__stream);
# 707 "/usr/include/stdio.h" 3 4
extern int fseeko(FILE *__stream, __off_t __off, int __whence);

extern __off_t ftello(FILE *__stream);
# 731 "/usr/include/stdio.h" 3 4
extern int fgetpos(FILE *__restrict __stream, fpos_t *__restrict __pos);

extern int fsetpos(FILE *__stream, const fpos_t *__pos);
# 757 "/usr/include/stdio.h" 3 4
extern void clearerr(FILE *__stream) __attribute__((__nothrow__, __leaf__));

extern int feof(FILE *__stream) __attribute__((__nothrow__, __leaf__));

extern int ferror(FILE *__stream) __attribute__((__nothrow__, __leaf__));

extern void clearerr_unlocked(FILE *__stream) __attribute__((__nothrow__, __leaf__));
extern int feof_unlocked(FILE *__stream) __attribute__((__nothrow__, __leaf__));
extern int ferror_unlocked(FILE *__stream) __attribute__((__nothrow__, __leaf__));

extern void perror(const char *__s);

# 1 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern const char *const sys_errlist[];
# 782 "/usr/include/stdio.h" 2 3 4

extern int fileno(FILE *__stream) __attribute__((__nothrow__, __leaf__));

extern int fileno_unlocked(FILE *__stream) __attribute__((__nothrow__, __leaf__));
# 800 "/usr/include/stdio.h" 3 4
extern FILE *popen(const char *__command, const char *__modes);

extern int pclose(FILE *__stream);

extern char *ctermid(char *__s) __attribute__((__nothrow__, __leaf__));
# 840 "/usr/include/stdio.h" 3 4
extern void flockfile(FILE *__stream) __attribute__((__nothrow__, __leaf__));

extern int ftrylockfile(FILE *__stream) __attribute__((__nothrow__, __leaf__));

extern void funlockfile(FILE *__stream) __attribute__((__nothrow__, __leaf__));
# 858 "/usr/include/stdio.h" 3 4
extern int __uflow(FILE *);
extern int __overflow(FILE *, int);
# 873 "/usr/include/stdio.h" 3 4

# 25 "/usr/include/malloc.h" 2 3 4
# 35 "/usr/include/malloc.h" 3 4

extern void *malloc(size_t __size) __attribute__((__nothrow__, __leaf__)) __attribute__((__malloc__))
__attribute__((__alloc_size__(1)));

extern void *calloc(size_t __nmemb, size_t __size)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__malloc__)) __attribute__((__alloc_size__(1, 2)));

extern void *realloc(void *__ptr, size_t __size)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__warn_unused_result__)) __attribute__((__alloc_size__(2)));

extern void *reallocarray(void *__ptr, size_t __nmemb, size_t __size)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__warn_unused_result__)) __attribute__((__alloc_size__(2, 3)));

extern void free(void *__ptr) __attribute__((__nothrow__, __leaf__));

extern void *memalign(size_t __alignment, size_t __size)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__malloc__)) __attribute__((__alloc_size__(2)));

extern void *valloc(size_t __size) __attribute__((__nothrow__, __leaf__)) __attribute__((__malloc__))
__attribute__((__alloc_size__(1)));

extern void *pvalloc(size_t __size) __attribute__((__nothrow__, __leaf__)) __attribute__((__malloc__));

// extern void *(*__morecore)(ptrdiff_t __size);

extern void *__default_morecore(ptrdiff_t __size)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__malloc__));

struct mallinfo
{
  int arena;
  int ordblks;
  int smblks;
  int hblks;
  int hblkhd;
  int usmblks;
  int fsmblks;
  int uordblks;
  int fordblks;
  int keepcost;
};

extern struct mallinfo mallinfo(void) __attribute__((__nothrow__, __leaf__));
# 128 "/usr/include/malloc.h" 3 4
extern int mallopt(int __param, int __val) __attribute__((__nothrow__, __leaf__));

extern int malloc_trim(size_t __pad) __attribute__((__nothrow__, __leaf__));

extern size_t malloc_usable_size(void *__ptr) __attribute__((__nothrow__, __leaf__));

extern void malloc_stats(void) __attribute__((__nothrow__, __leaf__));

extern int malloc_info(int __options, FILE *__fp) __attribute__((__nothrow__, __leaf__));

// extern void (*volatile __free_hook)(void *__ptr,
//                                     const void *)
//     __attribute__((__deprecated__));
// extern void *(*volatile __malloc_hook)(size_t __size,
//                                        const void *)
//     __attribute__((__deprecated__));
// extern void *(*volatile __realloc_hook)(void *__ptr,
//                                         size_t __size,
//                                         const void *)
//     __attribute__((__deprecated__));
// extern void *(*volatile __memalign_hook)(size_t __alignment,
//                                          size_t __size,
//                                          const void *)
//     __attribute__((__deprecated__));
// extern void (*volatile __after_morecore_hook)(void);

# 7 "gzip.c" 2
# 1 "/usr/include/memory.h" 1 3 4
# 29 "/usr/include/memory.h" 3 4
# 1 "/usr/include/string.h" 1 3 4
# 26 "/usr/include/string.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 27 "/usr/include/string.h" 2 3 4

# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 1 3 4
# 34 "/usr/include/string.h" 2 3 4
# 43 "/usr/include/string.h" 3 4
extern void *memcpy(void *__restrict __dest, const void *__restrict __src,
                    size_t __n) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 2)));

extern void *memmove(void *__dest, const void *__src, size_t __n)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 2)));

extern void *memccpy(void *__restrict __dest, const void *__restrict __src,
                     int __c, size_t __n)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 2)));

extern void *memset(void *__s, int __c, size_t __n) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));

extern int memcmp(const void *__s1, const void *__s2, size_t __n)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__)) __attribute__((__nonnull__(1, 2)));
# 91 "/usr/include/string.h" 3 4
extern void *memchr(const void *__s, int __c, size_t __n)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__)) __attribute__((__nonnull__(1)));
# 122 "/usr/include/string.h" 3 4
extern char *strcpy(char *__restrict __dest, const char *__restrict __src)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 2)));

extern char *strncpy(char *__restrict __dest,
                     const char *__restrict __src, size_t __n)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 2)));

extern char *strcat(char *__restrict __dest, const char *__restrict __src)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 2)));

extern char *strncat(char *__restrict __dest, const char *__restrict __src,
                     size_t __n) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 2)));

extern int strcmp(const char *__s1, const char *__s2)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__)) __attribute__((__nonnull__(1, 2)));

extern int strncmp(const char *__s1, const char *__s2, size_t __n)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__)) __attribute__((__nonnull__(1, 2)));

extern int strcoll(const char *__s1, const char *__s2)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__)) __attribute__((__nonnull__(1, 2)));

extern size_t strxfrm(char *__restrict __dest,
                      const char *__restrict __src, size_t __n)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(2)));

extern int strcoll_l(const char *__s1, const char *__s2, locale_t __l)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__)) __attribute__((__nonnull__(1, 2, 3)));

extern size_t strxfrm_l(char *__dest, const char *__src, size_t __n,
                        locale_t __l) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(2, 4)));

extern char *strdup(const char *__s)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__malloc__)) __attribute__((__nonnull__(1)));

extern char *strndup(const char *__string, size_t __n)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__malloc__)) __attribute__((__nonnull__(1)));
# 226 "/usr/include/string.h" 3 4
extern char *strchr(const char *__s, int __c)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__)) __attribute__((__nonnull__(1)));
# 253 "/usr/include/string.h" 3 4
extern char *strrchr(const char *__s, int __c)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__)) __attribute__((__nonnull__(1)));
# 273 "/usr/include/string.h" 3 4
extern size_t strcspn(const char *__s, const char *__reject)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__)) __attribute__((__nonnull__(1, 2)));

extern size_t strspn(const char *__s, const char *__accept)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__)) __attribute__((__nonnull__(1, 2)));
# 303 "/usr/include/string.h" 3 4
extern char *strpbrk(const char *__s, const char *__accept)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__)) __attribute__((__nonnull__(1, 2)));
# 330 "/usr/include/string.h" 3 4
extern char *strstr(const char *__haystack, const char *__needle)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__)) __attribute__((__nonnull__(1, 2)));

extern char *strtok(char *__restrict __s, const char *__restrict __delim)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(2)));

extern char *__strtok_r(char *__restrict __s,
                        const char *__restrict __delim,
                        char **__restrict __save_ptr)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(2, 3)));

extern char *strtok_r(char *__restrict __s, const char *__restrict __delim,
                      char **__restrict __save_ptr)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(2, 3)));
# 385 "/usr/include/string.h" 3 4
extern size_t strlen(const char *__s)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__)) __attribute__((__nonnull__(1)));

extern size_t strnlen(const char *__string, size_t __maxlen)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__)) __attribute__((__nonnull__(1)));

extern char *strerror(int __errnum) __attribute__((__nothrow__, __leaf__));
# 410 "/usr/include/string.h" 3 4
extern int strerror_r(int __errnum, char *__buf, size_t __buflen) __asm__(""
                                                                          "__xpg_strerror_r") __attribute__((__nothrow__, __leaf__))

__attribute__((__nonnull__(2)));
# 428 "/usr/include/string.h" 3 4
extern char *strerror_l(int __errnum, locale_t __l) __attribute__((__nothrow__, __leaf__));

# 1 "/usr/include/strings.h" 1 3 4
# 23 "/usr/include/strings.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 1 3 4
# 24 "/usr/include/strings.h" 2 3 4

extern int bcmp(const void *__s1, const void *__s2, size_t __n)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__)) __attribute__((__nonnull__(1, 2)));

extern void bcopy(const void *__src, void *__dest, size_t __n)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 2)));

extern void bzero(void *__s, size_t __n) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));
# 68 "/usr/include/strings.h" 3 4
extern char *index(const char *__s, int __c)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__)) __attribute__((__nonnull__(1)));
# 96 "/usr/include/strings.h" 3 4
extern char *rindex(const char *__s, int __c)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__)) __attribute__((__nonnull__(1)));

extern int ffs(int __i) __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));

extern int ffsl(long int __l) __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
__extension__ extern int ffsll(long long int __ll)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));

extern int strcasecmp(const char *__s1, const char *__s2)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__)) __attribute__((__nonnull__(1, 2)));

extern int strncasecmp(const char *__s1, const char *__s2, size_t __n)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__)) __attribute__((__nonnull__(1, 2)));

extern int strcasecmp_l(const char *__s1, const char *__s2, locale_t __loc)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__)) __attribute__((__nonnull__(1, 2, 3)));

extern int strncasecmp_l(const char *__s1, const char *__s2,
                         size_t __n, locale_t __loc)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__)) __attribute__((__nonnull__(1, 2, 4)));

# 433 "/usr/include/string.h" 2 3 4

extern void explicit_bzero(void *__s, size_t __n) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));

extern char *strsep(char **__restrict __stringp,
                    const char *__restrict __delim)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 2)));

extern char *strsignal(int __sig) __attribute__((__nothrow__, __leaf__));

extern char *__stpcpy(char *__restrict __dest, const char *__restrict __src)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 2)));
extern char *stpcpy(char *__restrict __dest, const char *__restrict __src)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 2)));

extern char *__stpncpy(char *__restrict __dest,
                       const char *__restrict __src, size_t __n)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 2)));
extern char *stpncpy(char *__restrict __dest,
                     const char *__restrict __src, size_t __n)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 2)));
# 499 "/usr/include/string.h" 3 4

# 30 "/usr/include/memory.h" 2 3 4
# 8 "gzip.c" 2
# 1 "/usr/include/signal.h" 1 3 4
# 27 "/usr/include/signal.h" 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/signum.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/signum.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/signum-generic.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/signum.h" 2 3 4
# 31 "/usr/include/signal.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types/sig_atomic_t.h" 1 3 4

typedef __sig_atomic_t sig_atomic_t;
# 33 "/usr/include/signal.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types/sigset_t.h" 1 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h" 1 3 4

typedef struct
{
  unsigned long int __val[(1024 / (8 * sizeof(unsigned long int)))];
} __sigset_t;
# 5 "/usr/include/x86_64-linux-gnu/bits/types/sigset_t.h" 2 3 4

typedef __sigset_t sigset_t;
# 36 "/usr/include/signal.h" 2 3 4
# 46 "/usr/include/signal.h" 3 4
typedef __uid_t uid_t;
# 57 "/usr/include/signal.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/siginfo_t.h" 1 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 5 "/usr/include/x86_64-linux-gnu/bits/types/siginfo_t.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types/__sigval_t.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/types/__sigval_t.h" 3 4
union sigval
{
  int sival_int;
  void *sival_ptr;
};

typedef union sigval __sigval_t;
# 7 "/usr/include/x86_64-linux-gnu/bits/types/siginfo_t.h" 2 3 4
# 16 "/usr/include/x86_64-linux-gnu/bits/types/siginfo_t.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/siginfo-arch.h" 1 3 4
# 17 "/usr/include/x86_64-linux-gnu/bits/types/siginfo_t.h" 2 3 4
# 36 "/usr/include/x86_64-linux-gnu/bits/types/siginfo_t.h" 3 4
typedef struct
{
  int si_signo;

  int si_errno;

  int si_code;

  int __pad0;

  union
  {
    int _pad[((128 / sizeof(int)) - 4)];

    struct
    {
      __pid_t si_pid;
      __uid_t si_uid;
    } _kill;

    struct
    {
      int si_tid;
      int si_overrun;
      __sigval_t si_sigval;
    } _timer;

    struct
    {
      __pid_t si_pid;
      __uid_t si_uid;
      __sigval_t si_sigval;
    } _rt;

    struct
    {
      __pid_t si_pid;
      __uid_t si_uid;
      int si_status;
      __clock_t si_utime;
      __clock_t si_stime;
    } _sigchld;

    struct
    {
      void *si_addr;

      short int si_addr_lsb;
      union
      {

        struct
        {
          void *_lower;
          void *_upper;
        } _addr_bnd;

        __uint32_t _pkey;
      } _bounds;
    } _sigfault;

    struct
    {
      long int si_band;
      int si_fd;
    } _sigpoll;

    struct
    {
      void *_call_addr;
      int _syscall;
      unsigned int _arch;
    } _sigsys;

  } _sifields;
} siginfo_t;
# 58 "/usr/include/signal.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/siginfo-consts.h" 1 3 4
# 35 "/usr/include/x86_64-linux-gnu/bits/siginfo-consts.h" 3 4
enum
{
  SI_ASYNCNL = -60,
  SI_DETHREAD = -7,

  SI_TKILL,
  SI_SIGIO,

  SI_ASYNCIO,
  SI_MESGQ,
  SI_TIMER,

  SI_QUEUE,
  SI_USER,
  SI_KERNEL = 0x80
# 66 "/usr/include/x86_64-linux-gnu/bits/siginfo-consts.h" 3 4
};

enum
{
  ILL_ILLOPC = 1,

  ILL_ILLOPN,

  ILL_ILLADR,

  ILL_ILLTRP,

  ILL_PRVOPC,

  ILL_PRVREG,

  ILL_COPROC,

  ILL_BADSTK,

  ILL_BADIADDR

};

enum
{
  FPE_INTDIV = 1,

  FPE_INTOVF,

  FPE_FLTDIV,

  FPE_FLTOVF,

  FPE_FLTUND,

  FPE_FLTRES,

  FPE_FLTINV,

  FPE_FLTSUB,

  FPE_FLTUNK = 14,

  FPE_CONDTRAP

};

enum
{
  SEGV_MAPERR = 1,

  SEGV_ACCERR,

  SEGV_BNDERR,

  SEGV_PKUERR,

  SEGV_ACCADI,

  SEGV_ADIDERR,

  SEGV_ADIPERR

};

enum
{
  BUS_ADRALN = 1,

  BUS_ADRERR,

  BUS_OBJERR,

  BUS_MCEERR_AR,

  BUS_MCEERR_AO

};
# 172 "/usr/include/x86_64-linux-gnu/bits/siginfo-consts.h" 3 4
enum
{
  CLD_EXITED = 1,

  CLD_KILLED,

  CLD_DUMPED,

  CLD_TRAPPED,

  CLD_STOPPED,

  CLD_CONTINUED

};

enum
{
  POLL_IN = 1,

  POLL_OUT,

  POLL_MSG,

  POLL_ERR,

  POLL_PRI,

  POLL_HUP

};
# 59 "/usr/include/signal.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types/sigval_t.h" 1 3 4
# 16 "/usr/include/x86_64-linux-gnu/bits/types/sigval_t.h" 3 4
typedef __sigval_t sigval_t;
# 63 "/usr/include/signal.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types/sigevent_t.h" 1 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 5 "/usr/include/x86_64-linux-gnu/bits/types/sigevent_t.h" 2 3 4
# 17 "/usr/include/x86_64-linux-gnu/bits/types/sigevent_t.h" 3 4
typedef union pthread_attr_t pthread_attr_t;

typedef struct sigevent
{
  __sigval_t sigev_value;
  int sigev_signo;
  int sigev_notify;

  union
  {
    int _pad[((64 / sizeof(int)) - 4)];

    __pid_t _tid;

    struct
    {
      // void (*_function)(__sigval_t);
      pthread_attr_t *_attribute;
    } _sigev_thread;
  } _sigev_un;
} sigevent_t;
# 67 "/usr/include/signal.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/sigevent-consts.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/sigevent-consts.h" 3 4
enum
{
  SIGEV_SIGNAL = 0,

  SIGEV_NONE,

  SIGEV_THREAD,

  SIGEV_THREAD_ID = 4

};
# 68 "/usr/include/signal.h" 2 3 4

typedef void *__sighandler_t;

extern __sighandler_t __sysv_signal(int __sig, __sighandler_t __handler)
    __attribute__((__nothrow__, __leaf__));
# 88 "/usr/include/signal.h" 3 4
extern __sighandler_t signal(int __sig, __sighandler_t __handler)
    __attribute__((__nothrow__, __leaf__));
# 112 "/usr/include/signal.h" 3 4
extern int kill(__pid_t __pid, int __sig) __attribute__((__nothrow__, __leaf__));

extern int killpg(__pid_t __pgrp, int __sig) __attribute__((__nothrow__, __leaf__));

extern int raise(int __sig) __attribute__((__nothrow__, __leaf__));

extern __sighandler_t ssignal(int __sig, __sighandler_t __handler)
    __attribute__((__nothrow__, __leaf__));
extern int gsignal(int __sig) __attribute__((__nothrow__, __leaf__));

extern void psignal(int __sig, const char *__s);

extern void psiginfo(const siginfo_t *__pinfo, const char *__s);
# 170 "/usr/include/signal.h" 3 4
extern int sigblock(int __mask) __attribute__((__nothrow__, __leaf__)) __attribute__((__deprecated__));

extern int sigsetmask(int __mask) __attribute__((__nothrow__, __leaf__)) __attribute__((__deprecated__));

extern int siggetmask(void) __attribute__((__nothrow__, __leaf__)) __attribute__((__deprecated__));
# 190 "/usr/include/signal.h" 3 4
typedef __sighandler_t sig_t;

extern int sigemptyset(sigset_t *__set) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));

extern int sigfillset(sigset_t *__set) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));

extern int sigaddset(sigset_t *__set, int __signo) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));

extern int sigdelset(sigset_t *__set, int __signo) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));

extern int sigismember(const sigset_t *__set, int __signo)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));
# 226 "/usr/include/signal.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/sigaction.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/sigaction.h" 3 4
struct sigaction
{

  union
  {

    __sighandler_t sa_handler;

    // void (*sa_sigaction)(int, siginfo_t *, void *);
  } __sigaction_handler;

  __sigset_t sa_mask;

  int sa_flags;

  // void (*sa_restorer)(void);
};
# 227 "/usr/include/signal.h" 2 3 4

extern int sigprocmask(int __how, const sigset_t *__restrict __set,
                       sigset_t *__restrict __oset) __attribute__((__nothrow__, __leaf__));

extern int sigsuspend(const sigset_t *__set) __attribute__((__nonnull__(1)));

extern int sigaction(int __sig, const struct sigaction *__restrict __act,
                     struct sigaction *__restrict __oact) __attribute__((__nothrow__, __leaf__));

extern int sigpending(sigset_t *__set) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));

extern int sigwait(const sigset_t *__restrict __set, int *__restrict __sig)
    __attribute__((__nonnull__(1, 2)));

extern int sigwaitinfo(const sigset_t *__restrict __set,
                       siginfo_t *__restrict __info) __attribute__((__nonnull__(1)));

extern int sigtimedwait(const sigset_t *__restrict __set,
                        siginfo_t *__restrict __info,
                        const struct timespec *__restrict __timeout)
    __attribute__((__nonnull__(1)));

extern int sigqueue(__pid_t __pid, int __sig, const union sigval __val)
    __attribute__((__nothrow__, __leaf__));
# 286 "/usr/include/signal.h" 3 4
extern const char *const _sys_siglist[(64 + 1)];
extern const char *const sys_siglist[(64 + 1)];

# 1 "/usr/include/x86_64-linux-gnu/bits/sigcontext.h" 1 3 4
# 31 "/usr/include/x86_64-linux-gnu/bits/sigcontext.h" 3 4
struct _fpx_sw_bytes
{
  __uint32_t magic1;
  __uint32_t extended_size;
  __uint64_t xstate_bv;
  __uint32_t xstate_size;
  __uint32_t __glibc_reserved1[7];
};

struct _fpreg
{
  unsigned short significand[4];
  unsigned short exponent;
};

struct _fpxreg
{
  unsigned short significand[4];
  unsigned short exponent;
  unsigned short __glibc_reserved1[3];
};

struct _xmmreg
{
  __uint32_t element[4];
};
# 123 "/usr/include/x86_64-linux-gnu/bits/sigcontext.h" 3 4
struct _fpstate
{

  __uint16_t cwd;
  __uint16_t swd;
  __uint16_t ftw;
  __uint16_t fop;
  __uint64_t rip;
  __uint64_t rdp;
  __uint32_t mxcsr;
  __uint32_t mxcr_mask;
  struct _fpxreg _st[8];
  struct _xmmreg _xmm[16];
  __uint32_t __glibc_reserved1[24];
};

struct sigcontext
{
  __uint64_t r8;
  __uint64_t r9;
  __uint64_t r10;
  __uint64_t r11;
  __uint64_t r12;
  __uint64_t r13;
  __uint64_t r14;
  __uint64_t r15;
  __uint64_t rdi;
  __uint64_t rsi;
  __uint64_t rbp;
  __uint64_t rbx;
  __uint64_t rdx;
  __uint64_t rax;
  __uint64_t rcx;
  __uint64_t rsp;
  __uint64_t rip;
  __uint64_t eflags;
  unsigned short cs;
  unsigned short gs;
  unsigned short fs;
  unsigned short __pad0;
  __uint64_t err;
  __uint64_t trapno;
  __uint64_t oldmask;
  __uint64_t cr2;
  __extension__ union
  {
    struct _fpstate *fpstate;
    __uint64_t __fpstate_word;
  };
  __uint64_t __reserved1[8];
};

struct _xsave_hdr
{
  __uint64_t xstate_bv;
  __uint64_t __glibc_reserved1[2];
  __uint64_t __glibc_reserved2[5];
};

struct _ymmh_state
{
  __uint32_t ymmh_space[64];
};

struct _xstate
{
  struct _fpstate fpstate;
  struct _xsave_hdr xstate_hdr;
  struct _ymmh_state ymmh;
};
# 292 "/usr/include/signal.h" 2 3 4

extern int sigreturn(struct sigcontext *__scp) __attribute__((__nothrow__, __leaf__));

# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 1 3 4
# 302 "/usr/include/signal.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types/stack_t.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/types/stack_t.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/types/stack_t.h" 2 3 4

typedef struct
{
  void *ss_sp;
  int ss_flags;
  size_t ss_size;
} stack_t;
# 304 "/usr/include/signal.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/sys/ucontext.h" 1 3 4
# 37 "/usr/include/x86_64-linux-gnu/sys/ucontext.h" 3 4
__extension__ typedef long long int greg_t;
# 46 "/usr/include/x86_64-linux-gnu/sys/ucontext.h" 3 4
typedef greg_t gregset_t[23];
# 101 "/usr/include/x86_64-linux-gnu/sys/ucontext.h" 3 4
struct _libc_fpxreg
{
  unsigned short int significand[4];
  unsigned short int exponent;
  unsigned short int __glibc_reserved1[3];
};

struct _libc_xmmreg
{
  __uint32_t element[4];
};

struct _libc_fpstate
{

  __uint16_t cwd;
  __uint16_t swd;
  __uint16_t ftw;
  __uint16_t fop;
  __uint64_t rip;
  __uint64_t rdp;
  __uint32_t mxcsr;
  __uint32_t mxcr_mask;
  struct _libc_fpxreg _st[8];
  struct _libc_xmmreg _xmm[16];
  __uint32_t __glibc_reserved1[24];
};

typedef struct _libc_fpstate *fpregset_t;

typedef struct
{
  gregset_t gregs;

  fpregset_t fpregs;
  __extension__ unsigned long long __reserved1[8];
} mcontext_t;

typedef struct ucontext_t
{
  unsigned long int uc_flags;
  struct ucontext_t *uc_link;
  stack_t uc_stack;
  mcontext_t uc_mcontext;
  sigset_t uc_sigmask;
  struct _libc_fpstate __fpregs_mem;
  __extension__ unsigned long long int __ssp[4];
} ucontext_t;
# 307 "/usr/include/signal.h" 2 3 4

extern int siginterrupt(int __sig, int __interrupt) __attribute__((__nothrow__, __leaf__));

# 1 "/usr/include/x86_64-linux-gnu/bits/sigstack.h" 1 3 4
# 317 "/usr/include/signal.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/ss_flags.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/ss_flags.h" 3 4
enum
{
  SS_ONSTACK = 1,

  SS_DISABLE

};
# 318 "/usr/include/signal.h" 2 3 4

extern int sigaltstack(const stack_t *__restrict __ss,
                       stack_t *__restrict __oss) __attribute__((__nothrow__, __leaf__));

# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_sigstack.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/types/struct_sigstack.h" 3 4
struct sigstack
{
  void *ss_sp;
  int ss_onstack;
};
# 328 "/usr/include/signal.h" 2 3 4

extern int sigstack(struct sigstack *__ss, struct sigstack *__oss)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__deprecated__));
# 358 "/usr/include/signal.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 1 3 4
# 44 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h" 1 3 4
# 21 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h" 2 3 4
# 45 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 2 3 4

typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;

typedef struct __pthread_internal_slist
{
  struct __pthread_internal_slist *__next;
} __pthread_slist_t;
# 74 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/struct_mutex.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/struct_mutex.h" 3 4
struct __pthread_mutex_s
{
  int __lock;
  unsigned int __count;
  int __owner;

  unsigned int __nusers;

  int __kind;

  short __spins;
  short __elision;
  __pthread_list_t __list;
# 53 "/usr/include/x86_64-linux-gnu/bits/struct_mutex.h" 3 4
};
# 75 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 2 3 4
# 87 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h" 3 4
struct __pthread_rwlock_arch_t
{
  unsigned int __readers;
  unsigned int __writers;
  unsigned int __wrphase_futex;
  unsigned int __writers_futex;
  unsigned int __pad3;
  unsigned int __pad4;

  int __cur_writer;
  int __shared;
  signed char __rwelision;

  unsigned char __pad1[7];

  unsigned long int __pad2;

  unsigned int __flags;
# 55 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h" 3 4
};
# 88 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 2 3 4

struct __pthread_cond_s
{
  __extension__ union
  {
    __extension__ unsigned long long int __wseq;
    struct
    {
      unsigned int __low;
      unsigned int __high;
    } __wseq32;
  };
  __extension__ union
  {
    __extension__ unsigned long long int __g1_start;
    struct
    {
      unsigned int __low;
      unsigned int __high;
    } __g1_start32;
  };
  unsigned int __g_refs[2];
  unsigned int __g_size[2];
  unsigned int __g1_orig_size;
  unsigned int __wrefs;
  unsigned int __g_signals[2];
};
# 24 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 2 3 4

typedef unsigned long int pthread_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;

typedef unsigned int pthread_key_t;

typedef int pthread_once_t;

union pthread_attr_t
{
  char __size[56];
  long int __align;
};

typedef union
{
  struct __pthread_mutex_s __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;

typedef union
{
  struct __pthread_cond_s __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;

typedef union
{
  struct __pthread_rwlock_arch_t __data;
  char __size[56];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;

typedef volatile int pthread_spinlock_t;

typedef union
{
  char __size[32];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 359 "/usr/include/signal.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/sigthread.h" 1 3 4
# 31 "/usr/include/x86_64-linux-gnu/bits/sigthread.h" 3 4
extern int pthread_sigmask(int __how,
                           const __sigset_t *__restrict __newmask,
                           __sigset_t *__restrict __oldmask) __attribute__((__nothrow__, __leaf__));

extern int pthread_kill(pthread_t __threadid, int __signo) __attribute__((__nothrow__, __leaf__));
# 360 "/usr/include/signal.h" 2 3 4

extern int __libc_current_sigrtmin(void) __attribute__((__nothrow__, __leaf__));

extern int __libc_current_sigrtmax(void) __attribute__((__nothrow__, __leaf__));

# 1 "/usr/include/x86_64-linux-gnu/bits/signal_ext.h" 1 3 4
# 375 "/usr/include/signal.h" 2 3 4

# 9 "gzip.c" 2

# 1 "/usr/include/stdlib.h" 1 3 4
# 25 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 26 "/usr/include/stdlib.h" 2 3 4

# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 1 3 4
# 32 "/usr/include/stdlib.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 1 3 4
# 52 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 3 4
typedef enum
{
  P_ALL,
  P_PID,
  P_PGID
} idtype_t;
# 40 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 1 3 4
# 41 "/usr/include/stdlib.h" 2 3 4
# 55 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 1 3 4
# 120 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/long-double.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 2 3 4
# 121 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 2 3 4
# 56 "/usr/include/stdlib.h" 2 3 4

typedef struct
{
  int quot;
  int rem;
} div_t;

typedef struct
{
  long int quot;
  long int rem;
} ldiv_t;

__extension__ typedef struct
{
  long long int quot;
  long long int rem;
} lldiv_t;
# 97 "/usr/include/stdlib.h" 3 4
extern size_t __ctype_get_mb_cur_max(void) __attribute__((__nothrow__, __leaf__));

extern double atof(const char *__nptr)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__)) __attribute__((__nonnull__(1)));

extern int atoi(const char *__nptr)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__)) __attribute__((__nonnull__(1)));

extern long int atol(const char *__nptr)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__)) __attribute__((__nonnull__(1)));

__extension__ extern long long int atoll(const char *__nptr)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__)) __attribute__((__nonnull__(1)));

extern double strtod(const char *__restrict __nptr,
                     char **__restrict __endptr)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));

extern float strtof(const char *__restrict __nptr,
                    char **__restrict __endptr) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));

extern long double strtold(const char *__restrict __nptr,
                           char **__restrict __endptr)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));
# 176 "/usr/include/stdlib.h" 3 4
extern long int strtol(const char *__restrict __nptr,
                       char **__restrict __endptr, int __base)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));

extern unsigned long int strtoul(const char *__restrict __nptr,
                                 char **__restrict __endptr, int __base)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));

__extension__ extern long long int strtoq(const char *__restrict __nptr,
                                          char **__restrict __endptr, int __base)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));

__extension__ extern unsigned long long int strtouq(const char *__restrict __nptr,
                                                    char **__restrict __endptr, int __base)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));

__extension__ extern long long int strtoll(const char *__restrict __nptr,
                                           char **__restrict __endptr, int __base)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));

__extension__ extern unsigned long long int strtoull(const char *__restrict __nptr,
                                                     char **__restrict __endptr, int __base)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));
# 385 "/usr/include/stdlib.h" 3 4
extern char *l64a(long int __n) __attribute__((__nothrow__, __leaf__));

extern long int a64l(const char *__s)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__pure__)) __attribute__((__nonnull__(1)));

# 1 "/usr/include/x86_64-linux-gnu/sys/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4

typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;

typedef __loff_t loff_t;

typedef __ino_t ino_t;
# 59 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __dev_t dev_t;

typedef __gid_t gid_t;
# 74 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __nlink_t nlink_t;
# 103 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __id_t id_t;
# 114 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;

typedef __key_t key_t;

# 1 "/usr/include/x86_64-linux-gnu/bits/types/clock_t.h" 1 3 4

typedef __clock_t clock_t;
# 127 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types/clockid_t.h" 1 3 4

typedef __clockid_t clockid_t;
# 129 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/time_t.h" 1 3 4

typedef __time_t time_t;
# 130 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/timer_t.h" 1 3 4

typedef __timer_t timer_t;
# 131 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
# 144 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 1 3 4
# 145 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4

typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;

# 1 "/usr/include/x86_64-linux-gnu/bits/stdint-intn.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/stdint-intn.h" 3 4
typedef __int8_t int8_t;
typedef __int16_t int16_t;
typedef __int32_t int32_t;
typedef __int64_t int64_t;
# 156 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4

typedef __uint8_t u_int8_t;
typedef __uint16_t u_int16_t;
typedef __uint32_t u_int32_t;
typedef __uint64_t u_int64_t;

typedef int register_t __attribute__((__mode__(__word__)));
# 176 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 35 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 1 3 4
# 33 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
static __inline __uint16_t
__bswap_16(__uint16_t __bsx)
{

  return __bsx;
}

static __inline __uint32_t
__bswap_32(__uint32_t __bsx)
{

  return __bsx;
}
# 69 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
__extension__ static __inline __uint64_t
__bswap_64(__uint64_t __bsx)
{

  return __bsx;
}
# 36 "/usr/include/endian.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h" 1 3 4
# 32 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h" 3 4
static __inline __uint16_t
__uint16_identity(__uint16_t __x)
{
  return __x;
}

static __inline __uint32_t
__uint32_identity(__uint32_t __x)
{
  return __x;
}

static __inline __uint64_t
__uint64_identity(__uint64_t __x)
{
  return __x;
}
# 37 "/usr/include/endian.h" 2 3 4
# 177 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/sys/select.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/select.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/select.h" 2 3 4
# 31 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h" 1 3 4

struct timeval
{
  __time_t tv_sec;
  __suseconds_t tv_usec;
};
# 38 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4

typedef __suseconds_t suseconds_t;

typedef long int __fd_mask;
# 59 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
typedef struct
{

  __fd_mask __fds_bits[1024 / (8 * (int)sizeof(__fd_mask))];

} fd_set;

typedef __fd_mask fd_mask;
# 91 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4

# 101 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern int select(int __nfds, fd_set *__restrict __readfds,
                  fd_set *__restrict __writefds,
                  fd_set *__restrict __exceptfds,
                  struct timeval *__restrict __timeout);
# 113 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern int pselect(int __nfds, fd_set *__restrict __readfds,
                   fd_set *__restrict __writefds,
                   fd_set *__restrict __exceptfds,
                   const struct timespec *__restrict __timeout,
                   const __sigset_t *__restrict __sigmask);
# 126 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4

# 180 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4

typedef __blksize_t blksize_t;

typedef __blkcnt_t blkcnt_t;

typedef __fsblkcnt_t fsblkcnt_t;

typedef __fsfilcnt_t fsfilcnt_t;
# 230 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4

# 395 "/usr/include/stdlib.h" 2 3 4

extern long int random(void) __attribute__((__nothrow__, __leaf__));

extern void srandom(unsigned int __seed) __attribute__((__nothrow__, __leaf__));

extern char *initstate(unsigned int __seed, char *__statebuf,
                       size_t __statelen) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(2)));

extern char *setstate(char *__statebuf) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));

struct random_data
{
  int32_t *fptr;
  int32_t *rptr;
  int32_t *state;
  int rand_type;
  int rand_deg;
  int rand_sep;
  int32_t *end_ptr;
};

extern int random_r(struct random_data *__restrict __buf,
                    int32_t *__restrict __result) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 2)));

extern int srandom_r(unsigned int __seed, struct random_data *__buf)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(2)));

extern int initstate_r(unsigned int __seed, char *__restrict __statebuf,
                       size_t __statelen,
                       struct random_data *__restrict __buf)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(2, 4)));

extern int setstate_r(char *__restrict __statebuf,
                      struct random_data *__restrict __buf)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 2)));

extern int rand(void) __attribute__((__nothrow__, __leaf__));

extern void srand(unsigned int __seed) __attribute__((__nothrow__, __leaf__));

extern int rand_r(unsigned int *__seed) __attribute__((__nothrow__, __leaf__));

extern double drand48(void) __attribute__((__nothrow__, __leaf__));
extern double erand48(unsigned short int __xsubi[3]) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));

extern long int lrand48(void) __attribute__((__nothrow__, __leaf__));
extern long int nrand48(unsigned short int __xsubi[3])
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));

extern long int mrand48(void) __attribute__((__nothrow__, __leaf__));
extern long int jrand48(unsigned short int __xsubi[3])
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));

extern void srand48(long int __seedval) __attribute__((__nothrow__, __leaf__));
extern unsigned short int *seed48(unsigned short int __seed16v[3])
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));
extern void lcong48(unsigned short int __param[7]) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));

struct drand48_data
{
  unsigned short int __x[3];
  unsigned short int __old_x[3];
  unsigned short int __c;
  unsigned short int __init;
  __extension__ unsigned long long int __a;
};

extern int drand48_r(struct drand48_data *__restrict __buffer,
                     double *__restrict __result) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 2)));
extern int erand48_r(unsigned short int __xsubi[3],
                     struct drand48_data *__restrict __buffer,
                     double *__restrict __result) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 2)));

extern int lrand48_r(struct drand48_data *__restrict __buffer,
                     long int *__restrict __result)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 2)));
extern int nrand48_r(unsigned short int __xsubi[3],
                     struct drand48_data *__restrict __buffer,
                     long int *__restrict __result)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 2)));

extern int mrand48_r(struct drand48_data *__restrict __buffer,
                     long int *__restrict __result)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 2)));
extern int jrand48_r(unsigned short int __xsubi[3],
                     struct drand48_data *__restrict __buffer,
                     long int *__restrict __result)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 2)));

extern int srand48_r(long int __seedval, struct drand48_data *__buffer)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(2)));

extern int seed48_r(unsigned short int __seed16v[3],
                    struct drand48_data *__buffer) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 2)));

extern int lcong48_r(unsigned short int __param[7],
                     struct drand48_data *__buffer)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 2)));

extern void *malloc(size_t __size) __attribute__((__nothrow__, __leaf__)) __attribute__((__malloc__))
__attribute__((__alloc_size__(1)));

extern void *calloc(size_t __nmemb, size_t __size)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__malloc__)) __attribute__((__alloc_size__(1, 2)));

extern void *realloc(void *__ptr, size_t __size)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__warn_unused_result__)) __attribute__((__alloc_size__(2)));

extern void *reallocarray(void *__ptr, size_t __nmemb, size_t __size)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__warn_unused_result__))
    __attribute__((__alloc_size__(2, 3)));

extern void free(void *__ptr) __attribute__((__nothrow__, __leaf__));

# 1 "/usr/include/alloca.h" 1 3 4
# 24 "/usr/include/alloca.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 1 3 4
# 25 "/usr/include/alloca.h" 2 3 4

extern void *alloca(size_t __size) __attribute__((__nothrow__, __leaf__));

# 569 "/usr/include/stdlib.h" 2 3 4

extern void *valloc(size_t __size) __attribute__((__nothrow__, __leaf__)) __attribute__((__malloc__))
__attribute__((__alloc_size__(1)));

extern int posix_memalign(void **__memptr, size_t __alignment, size_t __size)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));

extern void *aligned_alloc(size_t __alignment, size_t __size)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__malloc__)) __attribute__((__alloc_size__(2)));

extern void abort(void) __attribute__((__nothrow__, __leaf__)) __attribute__((__noreturn__));

extern int atexit(void *__func) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));

extern int at_quick_exit(void *__func) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));

extern int on_exit(void *__func, void *__arg)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));

extern void exit(int __status) __attribute__((__nothrow__, __leaf__)) __attribute__((__noreturn__));

extern void quick_exit(int __status) __attribute__((__nothrow__, __leaf__)) __attribute__((__noreturn__));

extern void _Exit(int __status) __attribute__((__nothrow__, __leaf__)) __attribute__((__noreturn__));

extern char *getenv(const char *__name) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));
# 647 "/usr/include/stdlib.h" 3 4
extern int putenv(char *__string) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));

extern int setenv(const char *__name, const char *__value, int __replace)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(2)));

extern int unsetenv(const char *__name) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));

extern int clearenv(void) __attribute__((__nothrow__, __leaf__));
# 675 "/usr/include/stdlib.h" 3 4
extern char *mktemp(char *__template) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));
# 688 "/usr/include/stdlib.h" 3 4
extern int mkstemp(char *__template) __attribute__((__nonnull__(1)));
# 710 "/usr/include/stdlib.h" 3 4
extern int mkstemps(char *__template, int __suffixlen) __attribute__((__nonnull__(1)));
# 731 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp(char *__template) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));
# 784 "/usr/include/stdlib.h" 3 4
extern int system(const char *__command);
# 800 "/usr/include/stdlib.h" 3 4
extern char *realpath(const char *__restrict __name,
                      char *__restrict __resolved) __attribute__((__nothrow__, __leaf__));

// typedef int (*__compar_fn_t)(const void *, const void *);
# 820 "/usr/include/stdlib.h" 3 4
extern void *bsearch(const void *__key, const void *__base,
                     size_t __nmemb, size_t __size, void *__compar)
    __attribute__((__nonnull__(1, 2, 5)));

extern void qsort(void *__base, size_t __nmemb, size_t __size,
                  void *__compar) __attribute__((__nonnull__(1, 4)));
# 840 "/usr/include/stdlib.h" 3 4
extern int abs(int __x) __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern long int labs(long int __x) __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));

__extension__ extern long long int llabs(long long int __x)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));

extern div_t div(int __numer, int __denom)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
extern ldiv_t ldiv(long int __numer, long int __denom)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));

__extension__ extern lldiv_t lldiv(long long int __numer,
                                   long long int __denom)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
# 872 "/usr/include/stdlib.h" 3 4
extern char *ecvt(double __value, int __ndigit, int *__restrict __decpt,
                  int *__restrict __sign) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(3, 4)));

extern char *fcvt(double __value, int __ndigit, int *__restrict __decpt,
                  int *__restrict __sign) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(3, 4)));

extern char *gcvt(double __value, int __ndigit, char *__buf)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(3)));

extern char *qecvt(long double __value, int __ndigit,
                   int *__restrict __decpt, int *__restrict __sign)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(3, 4)));
extern char *qfcvt(long double __value, int __ndigit,
                   int *__restrict __decpt, int *__restrict __sign)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(3, 4)));
extern char *qgcvt(long double __value, int __ndigit, char *__buf)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(3)));

extern int ecvt_r(double __value, int __ndigit, int *__restrict __decpt,
                  int *__restrict __sign, char *__restrict __buf,
                  size_t __len) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(3, 4, 5)));
extern int fcvt_r(double __value, int __ndigit, int *__restrict __decpt,
                  int *__restrict __sign, char *__restrict __buf,
                  size_t __len) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(3, 4, 5)));

extern int qecvt_r(long double __value, int __ndigit,
                   int *__restrict __decpt, int *__restrict __sign,
                   char *__restrict __buf, size_t __len)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(3, 4, 5)));
extern int qfcvt_r(long double __value, int __ndigit,
                   int *__restrict __decpt, int *__restrict __sign,
                   char *__restrict __buf, size_t __len)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(3, 4, 5)));

extern int mblen(const char *__s, size_t __n) __attribute__((__nothrow__, __leaf__));

extern int mbtowc(wchar_t *__restrict __pwc,
                  const char *__restrict __s, size_t __n) __attribute__((__nothrow__, __leaf__));

extern int wctomb(char *__s, wchar_t __wchar) __attribute__((__nothrow__, __leaf__));

extern size_t mbstowcs(wchar_t *__restrict __pwcs,
                       const char *__restrict __s, size_t __n) __attribute__((__nothrow__, __leaf__));

extern size_t wcstombs(char *__restrict __s,
                       const wchar_t *__restrict __pwcs, size_t __n)
    __attribute__((__nothrow__, __leaf__));

extern int rpmatch(const char *__response) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));
# 957 "/usr/include/stdlib.h" 3 4
extern int getsubopt(char **__restrict __optionp,
                     char *const *__restrict __tokens,
                     char **__restrict __valuep)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 2, 3)));
# 1003 "/usr/include/stdlib.h" 3 4
extern int getloadavg(double __loadavg[], int __nelem)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));
# 1013 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h" 1 3 4
# 1014 "/usr/include/stdlib.h" 2 3 4
# 1023 "/usr/include/stdlib.h" 3 4

# 11 "gzip.c" 2

# 1 "/usr/include/x86_64-linux-gnu/sys/dir.h" 1 3 4
# 13 "gzip.c" 2
# 1 "/usr/include/x86_64-linux-gnu/sys/file.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/sys/file.h" 3 4

# 50 "/usr/include/x86_64-linux-gnu/sys/file.h" 3 4
extern int flock(int __fd, int __operation) __attribute__((__nothrow__, __leaf__));

# 14 "gzip.c" 2
# 1 "/usr/include/x86_64-linux-gnu/sys/stat.h" 1 3 4
# 99 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/stat.h" 1 3 4
# 102 "/usr/include/x86_64-linux-gnu/sys/stat.h" 2 3 4
# 205 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int stat(const char *__restrict __file,
                struct stat *__restrict __buf) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 2)));

extern int fstat(int __fd, struct stat *__buf) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(2)));
# 234 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int fstatat(int __fd, const char *__restrict __file,
                   struct stat *__restrict __buf, int __flag)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(2, 3)));
# 259 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int lstat(const char *__restrict __file,
                 struct stat *__restrict __buf) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 2)));
# 280 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int chmod(const char *__file, __mode_t __mode)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));

extern int lchmod(const char *__file, __mode_t __mode)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));

extern int fchmod(int __fd, __mode_t __mode) __attribute__((__nothrow__, __leaf__));

extern int fchmodat(int __fd, const char *__file, __mode_t __mode,
                    int __flag)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(2)));

extern __mode_t umask(__mode_t __mask) __attribute__((__nothrow__, __leaf__));
# 317 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int mkdir(const char *__path, __mode_t __mode)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));

extern int mkdirat(int __fd, const char *__path, __mode_t __mode)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(2)));

extern int mknod(const char *__path, __mode_t __mode, __dev_t __dev)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));

extern int mknodat(int __fd, const char *__path, __mode_t __mode,
                   __dev_t __dev) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(2)));

extern int mkfifo(const char *__path, __mode_t __mode)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));

extern int mkfifoat(int __fd, const char *__path, __mode_t __mode)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(2)));

extern int utimensat(int __fd, const char *__path,
                     const struct timespec __times[2],
                     int __flags)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(2)));

extern int futimens(int __fd, const struct timespec __times[2]) __attribute__((__nothrow__, __leaf__));
# 395 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int __fxstat(int __ver, int __fildes, struct stat *__stat_buf)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(3)));
extern int __xstat(int __ver, const char *__filename,
                   struct stat *__stat_buf) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(2, 3)));
extern int __lxstat(int __ver, const char *__filename,
                    struct stat *__stat_buf) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(2, 3)));
extern int __fxstatat(int __ver, int __fildes, const char *__filename,
                      struct stat *__stat_buf, int __flag)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(3, 4)));
# 438 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int __xmknod(int __ver, const char *__path, __mode_t __mode,
                    __dev_t *__dev) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(2, 4)));

extern int __xmknodat(int __ver, int __fd, const char *__path,
                      __mode_t __mode, __dev_t *__dev)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(3, 5)));
# 534 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4

# 15 "gzip.c" 2
# 1 "/usr/include/x86_64-linux-gnu/sys/time.h" 1 3 4
# 34 "/usr/include/x86_64-linux-gnu/sys/time.h" 3 4

# 52 "/usr/include/x86_64-linux-gnu/sys/time.h" 3 4
struct timezone
{
  int tz_minuteswest;
  int tz_dsttime;
};
# 66 "/usr/include/x86_64-linux-gnu/sys/time.h" 3 4
extern int gettimeofday(struct timeval *__restrict __tv,
                        void *__restrict __tz) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));

extern int settimeofday(const struct timeval *__tv,
                        const struct timezone *__tz)
    __attribute__((__nothrow__, __leaf__));

extern int adjtime(const struct timeval *__delta,
                   struct timeval *__olddelta) __attribute__((__nothrow__, __leaf__));

enum __itimer_which
{

  ITIMER_REAL = 0,

  ITIMER_VIRTUAL = 1,

  ITIMER_PROF = 2

};

struct itimerval
{

  struct timeval it_interval;

  struct timeval it_value;
};

typedef int __itimer_which_t;

extern int getitimer(__itimer_which_t __which,
                     struct itimerval *__value) __attribute__((__nothrow__, __leaf__));

extern int setitimer(__itimer_which_t __which,
                     const struct itimerval *__restrict __new,
                     struct itimerval *__restrict __old) __attribute__((__nothrow__, __leaf__));

extern int utimes(const char *__file, const struct timeval __tvp[2])
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));

extern int lutimes(const char *__file, const struct timeval __tvp[2])
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));

extern int futimes(int __fd, const struct timeval __tvp[2]) __attribute__((__nothrow__, __leaf__));
# 187 "/usr/include/x86_64-linux-gnu/sys/time.h" 3 4

# 16 "gzip.c" 2

# 1 "/usr/include/time.h" 1 3 4
# 29 "/usr/include/time.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 1 3 4
# 30 "/usr/include/time.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/time.h" 1 3 4
# 34 "/usr/include/time.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_tm.h" 1 3 4

struct tm
{
  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;

  long int tm_gmtoff;
  const char *tm_zone;
};
# 40 "/usr/include/time.h" 2 3 4
# 48 "/usr/include/time.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_itimerspec.h" 1 3 4

struct itimerspec
{
  struct timespec it_interval;
  struct timespec it_value;
};
# 49 "/usr/include/time.h" 2 3 4
struct sigevent;
# 68 "/usr/include/time.h" 3 4

extern clock_t clock(void) __attribute__((__nothrow__, __leaf__));

extern time_t time(time_t *__timer) __attribute__((__nothrow__, __leaf__));

extern double difftime(time_t __time1, time_t __time0)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));

extern time_t mktime(struct tm *__tp) __attribute__((__nothrow__, __leaf__));

extern size_t strftime(char *__restrict __s, size_t __maxsize,
                       const char *__restrict __format,
                       const struct tm *__restrict __tp) __attribute__((__nothrow__, __leaf__));
# 104 "/usr/include/time.h" 3 4
extern size_t strftime_l(char *__restrict __s, size_t __maxsize,
                         const char *__restrict __format,
                         const struct tm *__restrict __tp,
                         locale_t __loc) __attribute__((__nothrow__, __leaf__));
# 119 "/usr/include/time.h" 3 4
extern struct tm *gmtime(const time_t *__timer) __attribute__((__nothrow__, __leaf__));

extern struct tm *localtime(const time_t *__timer) __attribute__((__nothrow__, __leaf__));

extern struct tm *gmtime_r(const time_t *__restrict __timer,
                           struct tm *__restrict __tp) __attribute__((__nothrow__, __leaf__));

extern struct tm *localtime_r(const time_t *__restrict __timer,
                              struct tm *__restrict __tp) __attribute__((__nothrow__, __leaf__));

extern char *asctime(const struct tm *__tp) __attribute__((__nothrow__, __leaf__));

extern char *ctime(const time_t *__timer) __attribute__((__nothrow__, __leaf__));

extern char *asctime_r(const struct tm *__restrict __tp,
                       char *__restrict __buf) __attribute__((__nothrow__, __leaf__));

extern char *ctime_r(const time_t *__restrict __timer,
                     char *__restrict __buf) __attribute__((__nothrow__, __leaf__));

extern char *__tzname[2];
extern int __daylight;
extern long int __timezone;

extern char *tzname[2];

extern void tzset(void) __attribute__((__nothrow__, __leaf__));

extern int daylight;
extern long int timezone;
# 190 "/usr/include/time.h" 3 4
extern time_t timegm(struct tm *__tp) __attribute__((__nothrow__, __leaf__));

extern time_t timelocal(struct tm *__tp) __attribute__((__nothrow__, __leaf__));

extern int dysize(int __year) __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));
# 205 "/usr/include/time.h" 3 4
extern int nanosleep(const struct timespec *__requested_time,
                     struct timespec *__remaining);

extern int clock_getres(clockid_t __clock_id, struct timespec *__res) __attribute__((__nothrow__, __leaf__));

extern int clock_gettime(clockid_t __clock_id, struct timespec *__tp) __attribute__((__nothrow__, __leaf__));

extern int clock_settime(clockid_t __clock_id, const struct timespec *__tp)
    __attribute__((__nothrow__, __leaf__));

extern int clock_nanosleep(clockid_t __clock_id, int __flags,
                           const struct timespec *__req,
                           struct timespec *__rem);

extern int clock_getcpuclockid(pid_t __pid, clockid_t *__clock_id) __attribute__((__nothrow__, __leaf__));

extern int timer_create(clockid_t __clock_id,
                        struct sigevent *__restrict __evp,
                        timer_t *__restrict __timerid) __attribute__((__nothrow__, __leaf__));

extern int timer_delete(timer_t __timerid) __attribute__((__nothrow__, __leaf__));

extern int timer_settime(timer_t __timerid, int __flags,
                         const struct itimerspec *__restrict __value,
                         struct itimerspec *__restrict __ovalue) __attribute__((__nothrow__, __leaf__));

extern int timer_gettime(timer_t __timerid, struct itimerspec *__value)
    __attribute__((__nothrow__, __leaf__));

extern int timer_getoverrun(timer_t __timerid) __attribute__((__nothrow__, __leaf__));

extern int timespec_get(struct timespec *__ts, int __base)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));
# 301 "/usr/include/time.h" 3 4

# 18 "gzip.c" 2
# 1 "/usr/include/unistd.h" 1 3 4
# 27 "/usr/include/unistd.h" 3 4

# 202 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/posix_opt.h" 1 3 4
# 203 "/usr/include/unistd.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/environments.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/environments.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/environments.h" 2 3 4
# 207 "/usr/include/unistd.h" 2 3 4
# 226 "/usr/include/unistd.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h" 1 3 4
# 227 "/usr/include/unistd.h" 2 3 4
# 255 "/usr/include/unistd.h" 3 4
typedef __useconds_t useconds_t;
# 267 "/usr/include/unistd.h" 3 4
typedef __intptr_t intptr_t;

typedef __socklen_t socklen_t;
# 287 "/usr/include/unistd.h" 3 4
extern int access(const char *__name, int __type) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));
# 304 "/usr/include/unistd.h" 3 4
extern int faccessat(int __fd, const char *__file, int __type, int __flag)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(2)));
# 334 "/usr/include/unistd.h" 3 4
extern __off_t lseek(int __fd, __off_t __offset, int __whence) __attribute__((__nothrow__, __leaf__));
# 353 "/usr/include/unistd.h" 3 4
extern int close(int __fd);

extern ssize_t read(int __fd, void *__buf, size_t __nbytes);

extern ssize_t write(int __fd, const void *__buf, size_t __n);
# 376 "/usr/include/unistd.h" 3 4
extern ssize_t pread(int __fd, void *__buf, size_t __nbytes,
                     __off_t __offset);

extern ssize_t pwrite(int __fd, const void *__buf, size_t __n,
                      __off_t __offset);
# 417 "/usr/include/unistd.h" 3 4
extern int pipe(int __pipedes[2]) __attribute__((__nothrow__, __leaf__));
# 432 "/usr/include/unistd.h" 3 4
extern unsigned int alarm(unsigned int __seconds) __attribute__((__nothrow__, __leaf__));
# 444 "/usr/include/unistd.h" 3 4
extern unsigned int sleep(unsigned int __seconds);

extern __useconds_t ualarm(__useconds_t __value, __useconds_t __interval)
    __attribute__((__nothrow__, __leaf__));

extern int usleep(__useconds_t __useconds);
# 469 "/usr/include/unistd.h" 3 4
extern int pause(void);

extern int chown(const char *__file, __uid_t __owner, __gid_t __group)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));

extern int fchown(int __fd, __uid_t __owner, __gid_t __group) __attribute__((__nothrow__, __leaf__));

extern int lchown(const char *__file, __uid_t __owner, __gid_t __group)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));

extern int fchownat(int __fd, const char *__file, __uid_t __owner,
                    __gid_t __group, int __flag)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(2)));

extern int chdir(const char *__path) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));

extern int fchdir(int __fd) __attribute__((__nothrow__, __leaf__));
# 511 "/usr/include/unistd.h" 3 4
extern char *getcwd(char *__buf, size_t __size) __attribute__((__nothrow__, __leaf__));
# 525 "/usr/include/unistd.h" 3 4
extern char *getwd(char *__buf)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1))) __attribute__((__deprecated__));

extern int dup(int __fd) __attribute__((__nothrow__, __leaf__));

extern int dup2(int __fd, int __fd2) __attribute__((__nothrow__, __leaf__));
# 543 "/usr/include/unistd.h" 3 4
extern char **__environ;

extern int execve(const char *__path, char *const __argv[],
                  char *const __envp[]) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 2)));

extern int fexecve(int __fd, char *const __argv[], char *const __envp[])
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(2)));

extern int execv(const char *__path, char *const __argv[])
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 2)));

extern int execle(const char *__path, const char *__arg, ...)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 2)));

extern int execl(const char *__path, const char *__arg, ...)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 2)));

extern int execvp(const char *__file, char *const __argv[])
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 2)));

extern int execlp(const char *__file, const char *__arg, ...)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 2)));
# 598 "/usr/include/unistd.h" 3 4
extern int nice(int __inc) __attribute__((__nothrow__, __leaf__));

extern void _exit(int __status) __attribute__((__noreturn__));

# 1 "/usr/include/x86_64-linux-gnu/bits/confname.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3 4
enum
{
  _PC_LINK_MAX,

  _PC_MAX_CANON,

  _PC_MAX_INPUT,

  _PC_NAME_MAX,

  _PC_PATH_MAX,

  _PC_PIPE_BUF,

  _PC_CHOWN_RESTRICTED,

  _PC_NO_TRUNC,

  _PC_VDISABLE,

  _PC_SYNC_IO,

  _PC_ASYNC_IO,

  _PC_PRIO_IO,

  _PC_SOCK_MAXBUF,

  _PC_FILESIZEBITS,

  _PC_REC_INCR_XFER_SIZE,

  _PC_REC_MAX_XFER_SIZE,

  _PC_REC_MIN_XFER_SIZE,

  _PC_REC_XFER_ALIGN,

  _PC_ALLOC_SIZE_MIN,

  _PC_SYMLINK_MAX,

  _PC_2_SYMLINKS

};

enum
{
  _SC_ARG_MAX,

  _SC_CHILD_MAX,

  _SC_CLK_TCK,

  _SC_NGROUPS_MAX,

  _SC_OPEN_MAX,

  _SC_STREAM_MAX,

  _SC_TZNAME_MAX,

  _SC_JOB_CONTROL,

  _SC_SAVED_IDS,

  _SC_REALTIME_SIGNALS,

  _SC_PRIORITY_SCHEDULING,

  _SC_TIMERS,

  _SC_ASYNCHRONOUS_IO,

  _SC_PRIORITIZED_IO,

  _SC_SYNCHRONIZED_IO,

  _SC_FSYNC,

  _SC_MAPPED_FILES,

  _SC_MEMLOCK,

  _SC_MEMLOCK_RANGE,

  _SC_MEMORY_PROTECTION,

  _SC_MESSAGE_PASSING,

  _SC_SEMAPHORES,

  _SC_SHARED_MEMORY_OBJECTS,

  _SC_AIO_LISTIO_MAX,

  _SC_AIO_MAX,

  _SC_AIO_PRIO_DELTA_MAX,

  _SC_DELAYTIMER_MAX,

  _SC_MQ_OPEN_MAX,

  _SC_MQ_PRIO_MAX,

  _SC_VERSION,

  _SC_PAGESIZE,

  _SC_RTSIG_MAX,

  _SC_SEM_NSEMS_MAX,

  _SC_SEM_VALUE_MAX,

  _SC_SIGQUEUE_MAX,

  _SC_TIMER_MAX,

  _SC_BC_BASE_MAX,

  _SC_BC_DIM_MAX,

  _SC_BC_SCALE_MAX,

  _SC_BC_STRING_MAX,

  _SC_COLL_WEIGHTS_MAX,

  _SC_EQUIV_CLASS_MAX,

  _SC_EXPR_NEST_MAX,

  _SC_LINE_MAX,

  _SC_RE_DUP_MAX,

  _SC_CHARCLASS_NAME_MAX,

  _SC_2_VERSION,

  _SC_2_C_BIND,

  _SC_2_C_DEV,

  _SC_2_FORT_DEV,

  _SC_2_FORT_RUN,

  _SC_2_SW_DEV,

  _SC_2_LOCALEDEF,

  _SC_PII,

  _SC_PII_XTI,

  _SC_PII_SOCKET,

  _SC_PII_INTERNET,

  _SC_PII_OSI,

  _SC_POLL,

  _SC_SELECT,

  _SC_UIO_MAXIOV,

  _SC_IOV_MAX = _SC_UIO_MAXIOV,

  _SC_PII_INTERNET_STREAM,

  _SC_PII_INTERNET_DGRAM,

  _SC_PII_OSI_COTS,

  _SC_PII_OSI_CLTS,

  _SC_PII_OSI_M,

  _SC_T_IOV_MAX,

  _SC_THREADS,

  _SC_THREAD_SAFE_FUNCTIONS,

  _SC_GETGR_R_SIZE_MAX,

  _SC_GETPW_R_SIZE_MAX,

  _SC_LOGIN_NAME_MAX,

  _SC_TTY_NAME_MAX,

  _SC_THREAD_DESTRUCTOR_ITERATIONS,

  _SC_THREAD_KEYS_MAX,

  _SC_THREAD_STACK_MIN,

  _SC_THREAD_THREADS_MAX,

  _SC_THREAD_ATTR_STACKADDR,

  _SC_THREAD_ATTR_STACKSIZE,

  _SC_THREAD_PRIORITY_SCHEDULING,

  _SC_THREAD_PRIO_INHERIT,

  _SC_THREAD_PRIO_PROTECT,

  _SC_THREAD_PROCESS_SHARED,

  _SC_NPROCESSORS_CONF,

  _SC_NPROCESSORS_ONLN,

  _SC_PHYS_PAGES,

  _SC_AVPHYS_PAGES,

  _SC_ATEXIT_MAX,

  _SC_PASS_MAX,

  _SC_XOPEN_VERSION,

  _SC_XOPEN_XCU_VERSION,

  _SC_XOPEN_UNIX,

  _SC_XOPEN_CRYPT,

  _SC_XOPEN_ENH_I18N,

  _SC_XOPEN_SHM,

  _SC_2_CHAR_TERM,

  _SC_2_C_VERSION,

  _SC_2_UPE,

  _SC_XOPEN_XPG2,

  _SC_XOPEN_XPG3,

  _SC_XOPEN_XPG4,

  _SC_CHAR_BIT,

  _SC_CHAR_MAX,

  _SC_CHAR_MIN,

  _SC_INT_MAX,

  _SC_INT_MIN,

  _SC_LONG_BIT,

  _SC_WORD_BIT,

  _SC_MB_LEN_MAX,

  _SC_NZERO,

  _SC_SSIZE_MAX,

  _SC_SCHAR_MAX,

  _SC_SCHAR_MIN,

  _SC_SHRT_MAX,

  _SC_SHRT_MIN,

  _SC_UCHAR_MAX,

  _SC_UINT_MAX,

  _SC_ULONG_MAX,

  _SC_USHRT_MAX,

  _SC_NL_ARGMAX,

  _SC_NL_LANGMAX,

  _SC_NL_MSGMAX,

  _SC_NL_NMAX,

  _SC_NL_SETMAX,

  _SC_NL_TEXTMAX,

  _SC_XBS5_ILP32_OFF32,

  _SC_XBS5_ILP32_OFFBIG,

  _SC_XBS5_LP64_OFF64,

  _SC_XBS5_LPBIG_OFFBIG,

  _SC_XOPEN_LEGACY,

  _SC_XOPEN_REALTIME,

  _SC_XOPEN_REALTIME_THREADS,

  _SC_ADVISORY_INFO,

  _SC_BARRIERS,

  _SC_BASE,

  _SC_C_LANG_SUPPORT,

  _SC_C_LANG_SUPPORT_R,

  _SC_CLOCK_SELECTION,

  _SC_CPUTIME,

  _SC_THREAD_CPUTIME,

  _SC_DEVICE_IO,

  _SC_DEVICE_SPECIFIC,

  _SC_DEVICE_SPECIFIC_R,

  _SC_FD_MGMT,

  _SC_FIFO,

  _SC_PIPE,

  _SC_FILE_ATTRIBUTES,

  _SC_FILE_LOCKING,

  _SC_FILE_SYSTEM,

  _SC_MONOTONIC_CLOCK,

  _SC_MULTI_PROCESS,

  _SC_SINGLE_PROCESS,

  _SC_NETWORKING,

  _SC_READER_WRITER_LOCKS,

  _SC_SPIN_LOCKS,

  _SC_REGEXP,

  _SC_REGEX_VERSION,

  _SC_SHELL,

  _SC_SIGNALS,

  _SC_SPAWN,

  _SC_SPORADIC_SERVER,

  _SC_THREAD_SPORADIC_SERVER,

  _SC_SYSTEM_DATABASE,

  _SC_SYSTEM_DATABASE_R,

  _SC_TIMEOUTS,

  _SC_TYPED_MEMORY_OBJECTS,

  _SC_USER_GROUPS,

  _SC_USER_GROUPS_R,

  _SC_2_PBS,

  _SC_2_PBS_ACCOUNTING,

  _SC_2_PBS_LOCATE,

  _SC_2_PBS_MESSAGE,

  _SC_2_PBS_TRACK,

  _SC_SYMLOOP_MAX,

  _SC_STREAMS,

  _SC_2_PBS_CHECKPOINT,

  _SC_V6_ILP32_OFF32,

  _SC_V6_ILP32_OFFBIG,

  _SC_V6_LP64_OFF64,

  _SC_V6_LPBIG_OFFBIG,

  _SC_HOST_NAME_MAX,

  _SC_TRACE,

  _SC_TRACE_EVENT_FILTER,

  _SC_TRACE_INHERIT,

  _SC_TRACE_LOG,

  _SC_LEVEL1_ICACHE_SIZE,

  _SC_LEVEL1_ICACHE_ASSOC,

  _SC_LEVEL1_ICACHE_LINESIZE,

  _SC_LEVEL1_DCACHE_SIZE,

  _SC_LEVEL1_DCACHE_ASSOC,

  _SC_LEVEL1_DCACHE_LINESIZE,

  _SC_LEVEL2_CACHE_SIZE,

  _SC_LEVEL2_CACHE_ASSOC,

  _SC_LEVEL2_CACHE_LINESIZE,

  _SC_LEVEL3_CACHE_SIZE,

  _SC_LEVEL3_CACHE_ASSOC,

  _SC_LEVEL3_CACHE_LINESIZE,

  _SC_LEVEL4_CACHE_SIZE,

  _SC_LEVEL4_CACHE_ASSOC,

  _SC_LEVEL4_CACHE_LINESIZE,

  _SC_IPV6 = _SC_LEVEL1_ICACHE_SIZE + 50,

  _SC_RAW_SOCKETS,

  _SC_V7_ILP32_OFF32,

  _SC_V7_ILP32_OFFBIG,

  _SC_V7_LP64_OFF64,

  _SC_V7_LPBIG_OFFBIG,

  _SC_SS_REPL_MAX,

  _SC_TRACE_EVENT_NAME_MAX,

  _SC_TRACE_NAME_MAX,

  _SC_TRACE_SYS_MAX,

  _SC_TRACE_USER_EVENT_MAX,

  _SC_XOPEN_STREAMS,

  _SC_THREAD_ROBUST_PRIO_INHERIT,

  _SC_THREAD_ROBUST_PRIO_PROTECT

};

enum
{
  _CS_PATH,

  _CS_V6_WIDTH_RESTRICTED_ENVS,

  _CS_GNU_LIBC_VERSION,

  _CS_GNU_LIBPTHREAD_VERSION,

  _CS_V5_WIDTH_RESTRICTED_ENVS,

  _CS_V7_WIDTH_RESTRICTED_ENVS,

  _CS_LFS_CFLAGS = 1000,

  _CS_LFS_LDFLAGS,

  _CS_LFS_LIBS,

  _CS_LFS_LINTFLAGS,

  _CS_LFS64_CFLAGS,

  _CS_LFS64_LDFLAGS,

  _CS_LFS64_LIBS,

  _CS_LFS64_LINTFLAGS,

  _CS_XBS5_ILP32_OFF32_CFLAGS = 1100,

  _CS_XBS5_ILP32_OFF32_LDFLAGS,

  _CS_XBS5_ILP32_OFF32_LIBS,

  _CS_XBS5_ILP32_OFF32_LINTFLAGS,

  _CS_XBS5_ILP32_OFFBIG_CFLAGS,

  _CS_XBS5_ILP32_OFFBIG_LDFLAGS,

  _CS_XBS5_ILP32_OFFBIG_LIBS,

  _CS_XBS5_ILP32_OFFBIG_LINTFLAGS,

  _CS_XBS5_LP64_OFF64_CFLAGS,

  _CS_XBS5_LP64_OFF64_LDFLAGS,

  _CS_XBS5_LP64_OFF64_LIBS,

  _CS_XBS5_LP64_OFF64_LINTFLAGS,

  _CS_XBS5_LPBIG_OFFBIG_CFLAGS,

  _CS_XBS5_LPBIG_OFFBIG_LDFLAGS,

  _CS_XBS5_LPBIG_OFFBIG_LIBS,

  _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS,

  _CS_POSIX_V6_ILP32_OFF32_CFLAGS,

  _CS_POSIX_V6_ILP32_OFF32_LDFLAGS,

  _CS_POSIX_V6_ILP32_OFF32_LIBS,

  _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS,

  _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS,

  _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS,

  _CS_POSIX_V6_ILP32_OFFBIG_LIBS,

  _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS,

  _CS_POSIX_V6_LP64_OFF64_CFLAGS,

  _CS_POSIX_V6_LP64_OFF64_LDFLAGS,

  _CS_POSIX_V6_LP64_OFF64_LIBS,

  _CS_POSIX_V6_LP64_OFF64_LINTFLAGS,

  _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS,

  _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS,

  _CS_POSIX_V6_LPBIG_OFFBIG_LIBS,

  _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS,

  _CS_POSIX_V7_ILP32_OFF32_CFLAGS,

  _CS_POSIX_V7_ILP32_OFF32_LDFLAGS,

  _CS_POSIX_V7_ILP32_OFF32_LIBS,

  _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS,

  _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS,

  _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS,

  _CS_POSIX_V7_ILP32_OFFBIG_LIBS,

  _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS,

  _CS_POSIX_V7_LP64_OFF64_CFLAGS,

  _CS_POSIX_V7_LP64_OFF64_LDFLAGS,

  _CS_POSIX_V7_LP64_OFF64_LIBS,

  _CS_POSIX_V7_LP64_OFF64_LINTFLAGS,

  _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS,

  _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS,

  _CS_POSIX_V7_LPBIG_OFFBIG_LIBS,

  _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS,

  _CS_V6_ENV,

  _CS_V7_ENV

};
# 610 "/usr/include/unistd.h" 2 3 4

extern long int pathconf(const char *__path, int __name)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));

extern long int fpathconf(int __fd, int __name) __attribute__((__nothrow__, __leaf__));

extern long int sysconf(int __name) __attribute__((__nothrow__, __leaf__));

extern size_t confstr(int __name, char *__buf, size_t __len) __attribute__((__nothrow__, __leaf__));

extern __pid_t getpid(void) __attribute__((__nothrow__, __leaf__));

extern __pid_t getppid(void) __attribute__((__nothrow__, __leaf__));

extern __pid_t getpgrp(void) __attribute__((__nothrow__, __leaf__));

extern __pid_t __getpgid(__pid_t __pid) __attribute__((__nothrow__, __leaf__));

extern __pid_t getpgid(__pid_t __pid) __attribute__((__nothrow__, __leaf__));

extern int setpgid(__pid_t __pid, __pid_t __pgid) __attribute__((__nothrow__, __leaf__));
# 660 "/usr/include/unistd.h" 3 4
extern int setpgrp(void) __attribute__((__nothrow__, __leaf__));

extern __pid_t setsid(void) __attribute__((__nothrow__, __leaf__));

extern __pid_t getsid(__pid_t __pid) __attribute__((__nothrow__, __leaf__));

extern __uid_t getuid(void) __attribute__((__nothrow__, __leaf__));

extern __uid_t geteuid(void) __attribute__((__nothrow__, __leaf__));

extern __gid_t getgid(void) __attribute__((__nothrow__, __leaf__));

extern __gid_t getegid(void) __attribute__((__nothrow__, __leaf__));

extern int getgroups(int __size, __gid_t __list[]) __attribute__((__nothrow__, __leaf__));
# 700 "/usr/include/unistd.h" 3 4
extern int setuid(__uid_t __uid) __attribute__((__nothrow__, __leaf__));

extern int setreuid(__uid_t __ruid, __uid_t __euid) __attribute__((__nothrow__, __leaf__));

extern int seteuid(__uid_t __uid) __attribute__((__nothrow__, __leaf__));

extern int setgid(__gid_t __gid) __attribute__((__nothrow__, __leaf__));

extern int setregid(__gid_t __rgid, __gid_t __egid) __attribute__((__nothrow__, __leaf__));

extern int setegid(__gid_t __gid) __attribute__((__nothrow__, __leaf__));
# 756 "/usr/include/unistd.h" 3 4
extern __pid_t fork(void) __attribute__((__nothrow__));

extern __pid_t vfork(void) __attribute__((__nothrow__, __leaf__));

extern char *ttyname(int __fd) __attribute__((__nothrow__, __leaf__));

extern int ttyname_r(int __fd, char *__buf, size_t __buflen)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(2)));

extern int isatty(int __fd) __attribute__((__nothrow__, __leaf__));

extern int ttyslot(void) __attribute__((__nothrow__, __leaf__));

extern int link(const char *__from, const char *__to)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 2)));

extern int linkat(int __fromfd, const char *__from, int __tofd,
                  const char *__to, int __flags)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(2, 4)));

extern int symlink(const char *__from, const char *__to)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 2)));

extern ssize_t readlink(const char *__restrict __path,
                        char *__restrict __buf, size_t __len)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 2)));

extern int symlinkat(const char *__from, int __tofd,
                     const char *__to) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 3)));

extern ssize_t readlinkat(int __fd, const char *__restrict __path,
                          char *__restrict __buf, size_t __len)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(2, 3)));

extern int unlink(const char *__name) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));

extern int unlinkat(int __fd, const char *__name, int __flag)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(2)));

extern int rmdir(const char *__path) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));

extern __pid_t tcgetpgrp(int __fd) __attribute__((__nothrow__, __leaf__));

extern int tcsetpgrp(int __fd, __pid_t __pgrp_id) __attribute__((__nothrow__, __leaf__));

extern char *getlogin(void);

extern int getlogin_r(char *__name, size_t __name_len) __attribute__((__nonnull__(1)));

extern int setlogin(const char *__name) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));

# 1 "/usr/include/x86_64-linux-gnu/bits/getopt_posix.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/getopt_posix.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/getopt_core.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/getopt_core.h" 3 4

extern char *optarg;
# 50 "/usr/include/x86_64-linux-gnu/bits/getopt_core.h" 3 4
extern int optind;

extern int opterr;

extern int optopt;
# 91 "/usr/include/x86_64-linux-gnu/bits/getopt_core.h" 3 4
extern int getopt(int ___argc, char *const *___argv, const char *__shortopts)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(2, 3)));

# 28 "/usr/include/x86_64-linux-gnu/bits/getopt_posix.h" 2 3 4

# 49 "/usr/include/x86_64-linux-gnu/bits/getopt_posix.h" 3 4

# 870 "/usr/include/unistd.h" 2 3 4

extern int gethostname(char *__name, size_t __len) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));

extern int sethostname(const char *__name, size_t __len)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));

extern int sethostid(long int __id) __attribute__((__nothrow__, __leaf__));

extern int getdomainname(char *__name, size_t __len)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));
extern int setdomainname(const char *__name, size_t __len)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));

extern int vhangup(void) __attribute__((__nothrow__, __leaf__));

extern int revoke(const char *__file) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));

extern int profil(unsigned short int *__sample_buffer, size_t __size,
                  size_t __offset, unsigned int __scale)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));

extern int acct(const char *__name) __attribute__((__nothrow__, __leaf__));

extern char *getusershell(void) __attribute__((__nothrow__, __leaf__));
extern void endusershell(void) __attribute__((__nothrow__, __leaf__));
extern void setusershell(void) __attribute__((__nothrow__, __leaf__));

extern int daemon(int __nochdir, int __noclose) __attribute__((__nothrow__, __leaf__));

extern int chroot(const char *__path) __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));

extern char *getpass(const char *__prompt) __attribute__((__nonnull__(1)));

extern int fsync(int __fd);
# 967 "/usr/include/unistd.h" 3 4
extern long int gethostid(void);

extern void sync(void) __attribute__((__nothrow__, __leaf__));

extern int getpagesize(void) __attribute__((__nothrow__, __leaf__)) __attribute__((__const__));

extern int getdtablesize(void) __attribute__((__nothrow__, __leaf__));
# 991 "/usr/include/unistd.h" 3 4
extern int truncate(const char *__file, __off_t __length)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));
# 1014 "/usr/include/unistd.h" 3 4
extern int ftruncate(int __fd, __off_t __length) __attribute__((__nothrow__, __leaf__));
# 1035 "/usr/include/unistd.h" 3 4
extern int brk(void *__addr) __attribute__((__nothrow__, __leaf__));

extern void *sbrk(intptr_t __delta) __attribute__((__nothrow__, __leaf__));
# 1056 "/usr/include/unistd.h" 3 4
extern long int syscall(long int __sysno, ...) __attribute__((__nothrow__, __leaf__));
# 1115 "/usr/include/unistd.h" 3 4
extern int fdatasync(int __fildes);
# 1124 "/usr/include/unistd.h" 3 4
extern char *crypt(const char *__key, const char *__salt)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1, 2)));
# 1161 "/usr/include/unistd.h" 3 4
int getentropy(void *__buffer, size_t __length);
# 1170 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/unistd_ext.h" 1 3 4
# 1171 "/usr/include/unistd.h" 2 3 4

# 19 "gzip.c" 2
# 1 "/usr/include/utime.h" 1 3 4
# 27 "/usr/include/utime.h" 3 4

# 36 "/usr/include/utime.h" 3 4
struct utimbuf
{
  __time_t actime;
  __time_t modtime;
};

extern int utime(const char *__file,
                 const struct utimbuf *__file_times)
    __attribute__((__nothrow__, __leaf__)) __attribute__((__nonnull__(1)));

# 20 "gzip.c" 2
# 377 "gzip.c"

# 377 "gzip.c"
typedef void *voidp;
# 390 "gzip.c"
typedef unsigned char uch;
typedef unsigned short ush;
typedef unsigned long ulg;
# 407 "gzip.c"
extern int method;
# 463 "gzip.c"
extern uch inbuf[];
extern uch outbuf[];
extern ush d_buf[];
extern uch window[];

extern ush prev[];

extern unsigned insize;
extern unsigned inptr;
extern unsigned outcnt;
extern int rsync;

extern off_t bytes_in;
extern off_t bytes_out;
extern off_t header_bytes;

extern int ifd;
extern int ofd;
extern char ifname[];
extern char ofname[];
extern char *progname;

extern time_t time_stamp;
extern off_t ifile_size;

typedef int file_t;
# 539 "gzip.c"
extern int decrypt;
extern int exit_code;
extern int verbose;
extern int quiet;
extern int level;
extern int test;
extern int to_stdout;
extern int save_orig_name;
# 608 "gzip.c"
extern int zip(int in, int out);
extern int file_read(char *buf, unsigned size);

extern int unzip(int in, int out);
extern int check_zipfile(int in);

extern int unpack(int in, int out);

extern int unlzh(int in, int out);

void abort_gzip_signal(void);

void lm_init(int pack_level, ush *flags);
off_t deflate(void);

void ct_init(ush *attr, int *method);
int ct_tally(int dist, int lc);
off_t flush_block(char *buf, ulg stored_len, int pad, int eof);

void bi_init(file_t zipfile);
void send_bits(int value, int length);
unsigned bi_reverse(unsigned value, int length);
void bi_windup(void);
void copy_block(char *buf, unsigned len, int header);
// extern int (*read_buf)(char *buf, unsigned size);

extern int copy(int in, int out);
extern ulg updcrc(uch *s, unsigned n);
extern void clear_bufs(void);
extern int fill_inbuf(int eof_ok);
extern void flush_outbuf(void);
extern void flush_window(void);
extern void write_buf(int fd, voidp buf, unsigned cnt);
extern char *strlwr(char *s);
extern char *base_name(char *fname);
extern int xunlink(char *fname);
extern void make_simple_name(char *name);
extern char *add_envopt(int *argcp, char ***argvp, char *env);
extern void error(char *m);
extern void warning(char *m);
extern void read_error(void);
extern void write_error(void);
extern void display_ratio(off_t num, off_t den, FILE *file);
extern void fprint_off(FILE *, off_t, int);
extern voidp xmalloc(unsigned int size);

extern int inflate(void);

extern int yesno(void);
# 691 "gzip.c"
static file_t zfile;

static unsigned short bi_buf;
# 703 "gzip.c"
static int bi_valid;

// int (*read_buf)(char *buf, unsigned size);
# 718 "gzip.c"
void bi_init(file_t zipfile)
{
  zfile = zipfile;
  bi_buf = 0;
  bi_valid = 0;

  if (zfile != (-1))
  {
    // read_buf = file_read;
  }
}

void send_bits(int value, int length)
{
# 753 "gzip.c"
  if (bi_valid > (int)(8 * 2 * sizeof(char)) - length)
  {
    bi_buf |= (value << bi_valid);
    {
      if (outcnt < 16384 - 2)
      {
        outbuf[outcnt++] = (uch)((bi_buf) & 0xff);
        outbuf[outcnt++] = (uch)((ush)(bi_buf) >> 8);
      }
      else
      {
        {
          outbuf[outcnt++] = (uch)((uch)((bi_buf) & 0xff));
          if (outcnt == 16384)
            flush_outbuf();
        };
        {
          outbuf[outcnt++] = (uch)((uch)((ush)(bi_buf) >> 8));
          if (outcnt == 16384)
            flush_outbuf();
        };
      }
    };
    bi_buf = (ush)value >> ((8 * 2 * sizeof(char)) - bi_valid);
    bi_valid += length - (8 * 2 * sizeof(char));
  }
  else
  {
    bi_buf |= value << bi_valid;
    bi_valid += length;
  }
}

unsigned bi_reverse(unsigned code, int len)
{
  register unsigned res = 0;
  do
  {
    res |= code & 1;
    code >>= 1, res <<= 1;
  } while (--len > 0);
  return res >> 1;
}

void bi_windup()
{
  if (bi_valid > 8)
  {
    {
      if (outcnt < 16384 - 2)
      {
        outbuf[outcnt++] = (uch)((bi_buf) & 0xff);
        outbuf[outcnt++] = (uch)((ush)(bi_buf) >> 8);
      }
      else
      {
        {
          outbuf[outcnt++] = (uch)((uch)((bi_buf) & 0xff));
          if (outcnt == 16384)
            flush_outbuf();
        };
        {
          outbuf[outcnt++] = (uch)((uch)((ush)(bi_buf) >> 8));
          if (outcnt == 16384)
            flush_outbuf();
        };
      }
    };
  }
  else if (bi_valid > 0)
  {
    {
      outbuf[outcnt++] = (uch)(bi_buf);
      if (outcnt == 16384)
        flush_outbuf();
    };
  }
  bi_buf = 0;
  bi_valid = 0;
}

void copy_block(char *buf, unsigned len, int header)
{
  bi_windup();

  if (header)
  {
    {
      if (outcnt < 16384 - 2)
      {
        outbuf[outcnt++] = (uch)(((ush)len) & 0xff);
        outbuf[outcnt++] = (uch)((ush)((ush)len) >> 8);
      }
      else
      {
        {
          outbuf[outcnt++] = (uch)((uch)(((ush)len) & 0xff));
          if (outcnt == 16384)
            flush_outbuf();
        };
        {
          outbuf[outcnt++] = (uch)((uch)((ush)((ush)len) >> 8));
          if (outcnt == 16384)
            flush_outbuf();
        };
      }
    };
    {
      if (outcnt < 16384 - 2)
      {
        outbuf[outcnt++] = (uch)(((ush)~len) & 0xff);
        outbuf[outcnt++] = (uch)((ush)((ush)~len) >> 8);
      }
      else
      {
        {
          outbuf[outcnt++] = (uch)((uch)(((ush)~len) & 0xff));
          if (outcnt == 16384)
            flush_outbuf();
        };
        {
          outbuf[outcnt++] = (uch)((uch)((ush)((ush)~len) >> 8));
          if (outcnt == 16384)
            flush_outbuf();
        };
      }
    };
  }

  while (len--)
  {

    {
      outbuf[outcnt++] = (uch)(*buf++);
      if (outcnt == 16384)
        flush_outbuf();
    };
  }
}
# 930 "gzip.c"
extern int maxbits;
extern int block_mode;

extern int lzw(int in, int out);
extern int unlzw(int in, int out);
# 1003 "gzip.c"
typedef ush Pos;
typedef unsigned IPos;
# 1029 "gzip.c"
ulg window_size = (ulg)2 * 0x8000;

long block_start;

static unsigned ins_h;
# 1048 "gzip.c"
unsigned int prev_length;

unsigned strstart;
unsigned match_start;
static int eofile;
static unsigned lookahead;

unsigned max_chain_length;

static unsigned int max_lazy_match;
# 1074 "gzip.c"
static int compr_level;

unsigned good_match;

static ulg rsync_sum;
static ulg rsync_chunk_end;

typedef struct config
{
  ush good_length;
  ush max_lazy;
  ush nice_length;
  ush max_chain;
} config;

int nice_match;

static config configuration_table[10] = {

    {0, 0, 0, 0},
    {4, 4, 8, 4},
    {4, 5, 16, 8},
    {4, 6, 32, 32},

    {4, 4, 16, 16},
    {8, 16, 32, 32},
    {8, 16, 128, 128},
    {8, 32, 128, 256},
    {32, 128, 258, 1024},
    {32, 258, 258, 4096}};
# 1127 "gzip.c"
static void fill_window(void);
static off_t deflate_fast(void);

int longest_match(IPos cur_match);
# 1163 "gzip.c"
void lm_init(int pack_level, ush *flags)
{
  register unsigned j;

  if (pack_level < 1 || pack_level > 9)
    error("bad pack level");
  compr_level = pack_level;

  memset((voidp)((char *)(prev + 0x8000)), 0, ((unsigned)(1 << 15) * sizeof(*(prev + 0x8000))));

  rsync_chunk_end = 0xFFFFFFFFUL;
  rsync_sum = 0;

  max_lazy_match = configuration_table[pack_level].max_lazy;
  good_match = configuration_table[pack_level].good_length;

  nice_match = configuration_table[pack_level].nice_length;

  max_chain_length = configuration_table[pack_level].max_chain;
  if (pack_level == 1)
  {
    *flags |= 4;
  }
  else if (pack_level == 9)
  {
    *flags |= 2;
  }

  strstart = 0;
  block_start = 0L;

  // lookahead = read_buf((char *)window,
  //                      sizeof(int) <= 2 ? (unsigned)0x8000 : 2 * 0x8000);

  if (lookahead == 0 || lookahead == (unsigned)
# 1208 "gzip.c" 3 4
                                         (-1)
# 1208 "gzip.c"
  )
  {
    eofile = 1, lookahead = 0;
    return;
  }
  eofile = 0;

  while (lookahead < (258 + 3 + 1) && !eofile)
    fill_window();

  ins_h = 0;
  for (j = 0; j < 3 - 1; j++)
    (ins_h = (((ins_h) << ((15 + 3 - 1) / 3)) ^ (window[j])) & ((unsigned)(1 << 15) - 1));
}
# 1238 "gzip.c"
int longest_match(IPos cur_match)
{
  unsigned chain_length = max_chain_length;
  register uch *scan = window + strstart;
  register uch *match;
  register int len;
  int best_len = prev_length;
  IPos limit = strstart > (IPos)(0x8000 - (258 + 3 + 1)) ? strstart - (IPos)(0x8000 - (258 + 3 + 1)) : 0;
# 1266 "gzip.c"
  register uch *strend = window + strstart + 258;
  register uch scan_end1 = scan[best_len - 1];
  register uch scan_end = scan[best_len];

  if (prev_length >= good_match)
  {
    chain_length >>= 2;
  };

  do
  {
    ;
    match = window + cur_match;
# 1318 "gzip.c"
    if (match[best_len] != scan_end ||
        match[best_len - 1] != scan_end1 ||
        *match != *scan ||
        *++match != scan[1])
      continue;

    scan += 2, match++;

    do
    {
    } while (*++scan == *++match && *++scan == *++match &&
             *++scan == *++match && *++scan == *++match &&
             *++scan == *++match && *++scan == *++match &&
             *++scan == *++match && *++scan == *++match &&
             scan < strend);

    len = 258 - (int)(strend - scan);
    scan = strend - 258;

    if (len > best_len)
    {
      match_start = cur_match;
      best_len = len;
      if (len >= nice_match)
        break;

      scan_end1 = scan[best_len - 1];
      scan_end = scan[best_len];
    }
  } while ((cur_match = prev[cur_match & (0x8000 - 1)]) > limit && --chain_length != 0);

  return best_len;
}
# 1397 "gzip.c"
static void fill_window()
{
  register unsigned n, m;
  unsigned more = (unsigned)(window_size - (ulg)lookahead - (ulg)strstart);

  if (more == (unsigned)
# 1406 "gzip.c" 3 4
                  (-1)
# 1406 "gzip.c"
  )
  {

    more--;
  }
  else if (strstart >= 0x8000 + (0x8000 - (258 + 3 + 1)))
  {

    ;

    memcpy((char *)window, (char *)window + 0x8000, (unsigned)0x8000);
    match_start -= 0x8000;
    strstart -= 0x8000;
    if (rsync_chunk_end != 0xFFFFFFFFUL)
      rsync_chunk_end -= 0x8000;

    block_start -= (long)0x8000;

    for (n = 0; n < (unsigned)(1 << 15); n++)
    {
      m = (prev + 0x8000)[n];
      (prev + 0x8000)[n] = (Pos)(m >= 0x8000 ? m - 0x8000 : 0);
    }
    for (n = 0; n < 0x8000; n++)
    {
      m = prev[n];
      prev[n] = (Pos)(m >= 0x8000 ? m - 0x8000 : 0);
    }
    more += 0x8000;
  }

  if (!eofile)
  {
    // n = read_buf((char *)window + strstart + lookahead, more);
    if (n == 0 || n == (unsigned)
# 1441 "gzip.c" 3 4
                           (-1)
# 1441 "gzip.c"
    )
    {
      eofile = 1;
    }
    else
    {
      lookahead += n;
    }
  }
}

static void rsync_roll(unsigned start, unsigned num)
{
  unsigned i;

  if (start < 4096)
  {

    for (i = start; i < 4096; i++)
    {
      if (i == start + num)
        return;
      rsync_sum += (ulg)window[i];
    }
    num -= (4096 - start);
    start = 4096;
  }

  for (i = start; i < start + num; i++)
  {

    rsync_sum += (ulg)window[i];

    rsync_sum -= (ulg)window[i - 4096];
    if (rsync_chunk_end == 0xFFFFFFFFUL && ((rsync_sum) % 4096 == 0))
      rsync_chunk_end = i;
  }
}
# 1496 "gzip.c"
static off_t deflate_fast()
{
  IPos hash_head;
  int flush;
  unsigned match_length = 0;

  prev_length = 3 - 1;
  while (lookahead != 0)
  {

    ((ins_h = (((ins_h) << ((15 + 3 - 1) / 3)) ^ (window[(strstart) + 3 - 1])) & ((unsigned)(1 << 15) - 1)), prev[(strstart) & (0x8000 - 1)] = hash_head = (prev + 0x8000)[ins_h], (prev + 0x8000)[ins_h] = (strstart));

    if (hash_head != 0 && strstart - hash_head <= (0x8000 - (258 + 3 + 1)) &&
        strstart <= window_size - (258 + 3 + 1))
    {

      match_length = longest_match(hash_head);

      if (match_length > lookahead)
        match_length = lookahead;
    }
    if (match_length >= 3)
    {
      ;

      flush = ct_tally(strstart - match_start, match_length - 3);

      lookahead -= match_length;

      do
      {
        if (rsync)
          rsync_roll((strstart), (match_length));
      } while (0);

      if (match_length <= max_lazy_match)
      {
        match_length--;
        do
        {
          strstart++;
          ((ins_h = (((ins_h) << ((15 + 3 - 1) / 3)) ^ (window[(strstart) + 3 - 1])) & ((unsigned)(1 << 15) - 1)), prev[(strstart) & (0x8000 - 1)] = hash_head = (prev + 0x8000)[ins_h], (prev + 0x8000)[ins_h] = (strstart));

        } while (--match_length != 0);
        strstart++;
      }
      else
      {
        strstart += match_length;
        match_length = 0;
        ins_h = window[strstart];
        (ins_h = (((ins_h) << ((15 + 3 - 1) / 3)) ^ (window[strstart + 1])) & ((unsigned)(1 << 15) - 1));
      }
    }
    else
    {

      ;
      flush = ct_tally(0, window[strstart]);
      do
      {
        if (rsync)
          rsync_roll((strstart), (1));
      } while (0);
      lookahead--;
      strstart++;
    }
    if (rsync && strstart > rsync_chunk_end)
    {
      rsync_chunk_end = 0xFFFFFFFFUL;
      flush = 2;
    }
    if (flush)
      flush_block(block_start >= 0L ? (char *)&window[(unsigned)block_start] : (char *)
# 1566 "gzip.c" 3 4
                                                                                   ((void *)0)
# 1566 "gzip.c"
                      ,
                  (long)strstart - block_start, flush - 1, (0)),
          block_start = strstart;

    while (lookahead < (258 + 3 + 1) && !eofile)
      fill_window();
  }
  return flush_block(block_start >= 0L ? (char *)&window[(unsigned)block_start] : (char *)
# 1576 "gzip.c" 3 4
                                                                                      ((void *)0)
# 1576 "gzip.c"
                         ,
                     (long)strstart - block_start, flush - 1, (1));
}

off_t deflate()
{
  IPos hash_head;
  IPos prev_match;
  int flush;
  int match_available = 0;
  register unsigned match_length = 3 - 1;

  if (compr_level <= 3)
    return deflate_fast();

  while (lookahead != 0)
  {

    ((ins_h = (((ins_h) << ((15 + 3 - 1) / 3)) ^ (window[(strstart) + 3 - 1])) & ((unsigned)(1 << 15) - 1)), prev[(strstart) & (0x8000 - 1)] = hash_head = (prev + 0x8000)[ins_h], (prev + 0x8000)[ins_h] = (strstart));

    prev_length = match_length, prev_match = match_start;
    match_length = 3 - 1;

    if (hash_head != 0 && prev_length < max_lazy_match &&
        strstart - hash_head <= (0x8000 - (258 + 3 + 1)) &&
        strstart <= window_size - (258 + 3 + 1))
    {

      match_length = longest_match(hash_head);

      if (match_length > lookahead)
        match_length = lookahead;

      if (match_length == 3 && strstart - match_start > 4096)
      {

        match_length--;
      }
    }

    if (prev_length >= 3 && match_length <= prev_length)
    {

      ;

      flush = ct_tally(strstart - 1 - prev_match, prev_length - 3);

      lookahead -= prev_length - 1;
      prev_length -= 2;
      do
      {
        if (rsync)
          rsync_roll((strstart), (prev_length + 1));
      } while (0);
      do
      {
        strstart++;
        ((ins_h = (((ins_h) << ((15 + 3 - 1) / 3)) ^ (window[(strstart) + 3 - 1])) & ((unsigned)(1 << 15) - 1)), prev[(strstart) & (0x8000 - 1)] = hash_head = (prev + 0x8000)[ins_h], (prev + 0x8000)[ins_h] = (strstart));

      } while (--prev_length != 0);
      match_available = 0;
      match_length = 3 - 1;
      strstart++;

      if (rsync && strstart > rsync_chunk_end)
      {
        rsync_chunk_end = 0xFFFFFFFFUL;
        flush = 2;
      }
      if (flush)
        flush_block(block_start >= 0L ? (char *)&window[(unsigned)block_start] : (char *)
# 1657 "gzip.c" 3 4
                                                                                     ((void *)0)
# 1657 "gzip.c"
                        ,
                    (long)strstart - block_start, flush - 1, (0)),
            block_start = strstart;
    }
    else if (match_available)
    {

      ;
      flush = ct_tally(0, window[strstart - 1]);
      if (rsync && strstart > rsync_chunk_end)
      {
        rsync_chunk_end = 0xFFFFFFFFUL;
        flush = 2;
      }
      if (flush)
        flush_block(block_start >= 0L ? (char *)&window[(unsigned)block_start] : (char *)
# 1669 "gzip.c" 3 4
                                                                                     ((void *)0)
# 1669 "gzip.c"
                        ,
                    (long)strstart - block_start, flush - 1, (0)),
            block_start = strstart;
      do
      {
        if (rsync)
          rsync_roll((strstart), (1));
      } while (0);
      strstart++;
      lookahead--;
    }
    else
    {

      if (rsync && strstart > rsync_chunk_end)
      {

        rsync_chunk_end = 0xFFFFFFFFUL;
        flush = 2;
        flush_block(block_start >= 0L ? (char *)&window[(unsigned)block_start] : (char *)
# 1681 "gzip.c" 3 4
                                                                                     ((void *)0)
# 1681 "gzip.c"
                        ,
                    (long)strstart - block_start, flush - 1, (0)),
            block_start = strstart;
      }
      match_available = 1;
      do
      {
        if (rsync)
          rsync_roll((strstart), (1));
      } while (0);
      strstart++;
      lookahead--;
    };

    while (lookahead < (258 + 3 + 1) && !eofile)
      fill_window();
  }
  if (match_available)
    ct_tally(0, window[strstart - 1]);

  return flush_block(block_start >= 0L ? (char *)&window[(unsigned)block_start] : (char *)
# 1699 "gzip.c" 3 4
                                                                                      ((void *)0)
# 1699 "gzip.c"
                         ,
                     (long)strstart - block_start, flush - 1, (1));
}
# 1791 "gzip.c"
extern char *optarg;
# 1805 "gzip.c"
extern int optind;

extern int opterr;

extern int optopt;
# 1837 "gzip.c"
struct option
{

  const char *name;

  int has_arg;
  int *flag;
  int val;
};
# 1887 "gzip.c"
extern int getopt(int __argc, char *const *__argv, const char *__shortopts);

extern int getopt_long(int __argc, char *const *__argv, const char *__shortopts,
                       const struct option *__longopts, int *__longind);
extern int getopt_long_only(int __argc, char *const *__argv,
                            const char *__shortopts,
                            const struct option *__longopts, int *__longind);

extern int _getopt_internal(int __argc, char *const *__argv,
                            const char *__shortopts,
                            const struct option *__longopts, int *__longind,
                            int __long_only);
# 1931 "gzip.c"
char *optarg;
# 1946 "gzip.c"
int optind = 1;

int __getopt_initialized;
# 1961 "gzip.c"
static char *nextchar;

int opterr = 1;

int optopt = '?';
# 2003 "gzip.c"
static enum ordering {
  REQUIRE_ORDER,
  PERMUTE,
  RETURN_IN_ORDER
};
enum ordering ordering;

static char *posixly_correct;

extern char *getenv();

static char *
strchr(const char *str, int chr)
{
  while (*str)
  {
    if (*str == chr)
      return (char *)str;
    str++;
  }
  return 0;
}
# 2053 "gzip.c"
static int first_nonopt;
static int last_nonopt;
# 2112 "gzip.c"
static void exchange(char **);

static void
exchange(char **argv)
{
  int bottom = first_nonopt;
  int middle = last_nonopt;
  int top = optind;
  char *tem;
# 2151 "gzip.c"
  while (top > middle && middle > bottom)
  {
    if (top - middle > middle - bottom)
    {

      int len = middle - bottom;
      register int i;

      for (i = 0; i < len; i++)
      {
        tem = argv[bottom + i];
        argv[bottom + i] = argv[top - (middle - bottom) + i];
        argv[top - (middle - bottom) + i] = tem;
        ;
      }

      top -= len;
    }
    else
    {

      int len = top - middle;
      register int i;

      for (i = 0; i < len; i++)
      {
        tem = argv[bottom + i];
        argv[bottom + i] = argv[middle + i];
        argv[middle + i] = tem;
        ;
      }

      bottom += len;
    }
  }

  first_nonopt += (optind - last_nonopt);
  last_nonopt = optind;
}

static const char *_getopt_initialize(int, char *const *, const char *);

static const char *
_getopt_initialize(int argc,
                   char *const *argv,
                   const char *optstring)

{

  first_nonopt = last_nonopt = optind;

  nextchar =
# 2212 "gzip.c" 3 4
      ((void *)0)
# 2212 "gzip.c"
      ;

  posixly_correct = getenv("POSIXLY_CORRECT");

  if (optstring[0] == '-')
  {
    ordering = RETURN_IN_ORDER;
    ++optstring;
  }
  else if (optstring[0] == '+')
  {
    ordering = REQUIRE_ORDER;
    ++optstring;
  }
  else if (posixly_correct !=
# 2228 "gzip.c" 3 4
           ((void *)0)
# 2228 "gzip.c"
  )
    ordering = REQUIRE_ORDER;
  else
    ordering = PERMUTE;
# 2263 "gzip.c"
  return optstring;
}
# 2322 "gzip.c"
int _getopt_internal(int argc,
                     char *const *argv,
                     const char *optstring,
                     const struct option *longopts,
                     int *longind,
                     int long_only)
{
  int print_errors = opterr;
  if (optstring[0] == ':')
    print_errors = 0;

  if (argc < 1)
    return -1;

  optarg =
# 2338 "gzip.c" 3 4
      ((void *)0)
# 2338 "gzip.c"
      ;

  if (optind == 0 || !__getopt_initialized)
  {
    if (optind == 0)
      optind = 1;
    optstring = _getopt_initialize(argc, argv, optstring);
    __getopt_initialized = 1;
  }
# 2360 "gzip.c"
  if (nextchar ==
# 2360 "gzip.c" 3 4
          ((void *)0)
# 2360 "gzip.c"
      || *nextchar == '\0')
  {

    if (last_nonopt > optind)
      last_nonopt = optind;
    if (first_nonopt > optind)
      first_nonopt = optind;

    if (ordering == PERMUTE)
    {

      if (first_nonopt != last_nonopt && last_nonopt != optind)
        exchange((char **)argv);
      else if (last_nonopt != optind)
        first_nonopt = optind;

      while (optind < argc && (argv[optind][0] != '-' || argv[optind][1] == '\0'))
        optind++;
      last_nonopt = optind;
    }

    if (optind != argc && !strcmp(argv[optind], "--"))
    {
      optind++;

      if (first_nonopt != last_nonopt && last_nonopt != optind)
        exchange((char **)argv);
      else if (first_nonopt == last_nonopt)
        first_nonopt = optind;
      last_nonopt = argc;

      optind = argc;
    }

    if (optind == argc)
    {

      if (first_nonopt != last_nonopt)
        optind = first_nonopt;
      return -1;
    }

    if ((argv[optind][0] != '-' || argv[optind][1] == '\0'))
    {
      if (ordering == REQUIRE_ORDER)
        return -1;
      optarg = argv[optind++];
      return 1;
    }

    nextchar = (argv[optind] + 1 + (longopts !=
# 2434 "gzip.c" 3 4
                                        ((void *)0)
# 2434 "gzip.c"
                                    && argv[optind][1] == '-'));
  }
# 2452 "gzip.c"
  if (longopts !=
# 2452 "gzip.c" 3 4
          ((void *)0)

# 2453 "gzip.c"
      && (argv[optind][1] == '-' || (long_only && (argv[optind][2] || !strchr(optstring, argv[optind][1])))))
  {
    char *nameend;
    const struct option *p;
    const struct option *pfound =
# 2458 "gzip.c" 3 4
        ((void *)0)
# 2458 "gzip.c"
        ;
    int exact = 0;
    int ambig = 0;
    int indfound = -1;
    int option_index;

    for (nameend = nextchar; *nameend && *nameend != '='; nameend++)
      ;

    for (p = longopts, option_index = 0; p->name; p++, option_index++)
      if (!strncmp(p->name, nextchar, nameend - nextchar))
      {
        if ((unsigned int)(nameend - nextchar) == (unsigned int)strlen(p->name))
        {

          pfound = p;
          indfound = option_index;
          exact = 1;
          break;
        }
        else if (pfound ==
# 2481 "gzip.c" 3 4
                 ((void *)0)
# 2481 "gzip.c"
        )
        {

          pfound = p;
          indfound = option_index;
        }
        else if (long_only || pfound->has_arg != p->has_arg || pfound->flag != p->flag || pfound->val != p->val)

          ambig = 1;
      }

    if (ambig && !exact)
    {
      if (print_errors)
        fprintf(
# 2498 "gzip.c" 3 4
            stderr
# 2498 "gzip.c"
            ,
            ("%s: option `%s' is ambiguous\n"),
            argv[0], argv[optind]);
      nextchar += strlen(nextchar);
      optind++;
      optopt = 0;
      return '?';
    }

    if (pfound !=
# 2506 "gzip.c" 3 4
        ((void *)0)
# 2506 "gzip.c"
    )
    {
      option_index = indfound;
      optind++;
      if (*nameend)
      {

        if (pfound->has_arg)
          optarg = nameend + 1;
        else
        {
          if (print_errors)
          {
            if (argv[optind - 1][1] == '-')

              fprintf(
# 2522 "gzip.c" 3 4
                  stderr
# 2522 "gzip.c"
                  ,
                  ("%s: option `--%s' doesn't allow an argument\n"),
                  argv[0], pfound->name);
            else

              fprintf(
# 2527 "gzip.c" 3 4
                  stderr
# 2527 "gzip.c"
                  ,
                  ("%s: option `%c%s' doesn't allow an argument\n"),
                  argv[0], argv[optind - 1][0], pfound->name);
          }

          nextchar += strlen(nextchar);

          optopt = pfound->val;
          return '?';
        }
      }
      else if (pfound->has_arg == 1)
      {
        if (optind < argc)
          optarg = argv[optind++];
        else
        {
          if (print_errors)
            fprintf(
# 2545 "gzip.c" 3 4
                stderr
# 2545 "gzip.c"
                ,
                ("%s: option `%s' requires an argument\n"),
                argv[0], argv[optind - 1]);
          nextchar += strlen(nextchar);
          optopt = pfound->val;
          return optstring[0] == ':' ? ':' : '?';
        }
      }
      nextchar += strlen(nextchar);
      if (longind !=
# 2554 "gzip.c" 3 4
          ((void *)0)
# 2554 "gzip.c"
      )
        *longind = option_index;
      if (pfound->flag)
      {
        *(pfound->flag) = pfound->val;
        return 0;
      }
      return pfound->val;
    }

    if (!long_only || argv[optind][1] == '-' || strchr(optstring, *nextchar) ==
# 2569 "gzip.c" 3 4
                                                    ((void *)0)
# 2569 "gzip.c"
    )
    {
      if (print_errors)
      {
        if (argv[optind][1] == '-')

          fprintf(
# 2575 "gzip.c" 3 4
              stderr
# 2575 "gzip.c"
              ,
              ("%s: unrecognized option `--%s'\n"),
              argv[0], nextchar);
        else

          fprintf(
# 2579 "gzip.c" 3 4
              stderr
# 2579 "gzip.c"
              ,
              ("%s: unrecognized option `%c%s'\n"),
              argv[0], argv[optind][0], nextchar);
      }
      nextchar = (char *)"";
      optind++;
      optopt = 0;
      return '?';
    }
  }

  {
    char c = *nextchar++;
    char *temp = strchr(optstring, c);

    if (*nextchar == '\0')
      ++optind;

    if (temp ==
# 2599 "gzip.c" 3 4
            ((void *)0)
# 2599 "gzip.c"
        || c == ':')
    {
      if (print_errors)
      {
        if (posixly_correct)

          fprintf(
# 2605 "gzip.c" 3 4
              stderr
# 2605 "gzip.c"
              ,
              ("%s: illegal option -- %c\n"),
              argv[0], c);
        else
          fprintf(
# 2608 "gzip.c" 3 4
              stderr
# 2608 "gzip.c"
              ,
              ("%s: invalid option -- %c\n"),
              argv[0], c);
      }
      optopt = c;
      return '?';
    }

    if (temp[0] == 'W' && temp[1] == ';')
    {
      char *nameend;
      const struct option *p;
      const struct option *pfound =
# 2619 "gzip.c" 3 4
          ((void *)0)
# 2619 "gzip.c"
          ;
      int exact = 0;
      int ambig = 0;
      int indfound = 0;
      int option_index;

      if (*nextchar != '\0')
      {
        optarg = nextchar;

        optind++;
      }
      else if (optind == argc)
      {
        if (print_errors)
        {

          fprintf(
# 2638 "gzip.c" 3 4
              stderr
# 2638 "gzip.c"
              ,
              ("%s: option requires an argument -- %c\n"),
              argv[0], c);
        }
        optopt = c;
        if (optstring[0] == ':')
          c = ':';
        else
          c = '?';
        return c;
      }
      else

        optarg = argv[optind++];

      for (nextchar = nameend = optarg; *nameend && *nameend != '='; nameend++)
        ;

      for (p = longopts, option_index = 0; p->name; p++, option_index++)
        if (!strncmp(p->name, nextchar, nameend - nextchar))
        {
          if ((unsigned int)(nameend - nextchar) == strlen(p->name))
          {

            pfound = p;
            indfound = option_index;
            exact = 1;
            break;
          }
          else if (pfound ==
# 2672 "gzip.c" 3 4
                   ((void *)0)
# 2672 "gzip.c"
          )
          {

            pfound = p;
            indfound = option_index;
          }
          else

            ambig = 1;
        }
      if (ambig && !exact)
      {
        if (print_errors)
          fprintf(
# 2685 "gzip.c" 3 4
              stderr
# 2685 "gzip.c"
              ,
              ("%s: option `-W %s' is ambiguous\n"),
              argv[0], argv[optind]);
        nextchar += strlen(nextchar);
        optind++;
        return '?';
      }
      if (pfound !=
# 2691 "gzip.c" 3 4
          ((void *)0)
# 2691 "gzip.c"
      )
      {
        option_index = indfound;
        if (*nameend)
        {

          if (pfound->has_arg)
            optarg = nameend + 1;
          else
          {
            if (print_errors)
              fprintf(
# 2703 "gzip.c" 3 4
                  stderr
# 2703 "gzip.c"
                  ,
                  ("%s: option `-W %s' doesn't allow an argument\n"),
                  argv[0], pfound->name);

            nextchar += strlen(nextchar);
            return '?';
          }
        }
        else if (pfound->has_arg == 1)
        {
          if (optind < argc)
            optarg = argv[optind++];
          else
          {
            if (print_errors)
              fprintf(
# 2718 "gzip.c" 3 4
                  stderr
# 2718 "gzip.c"
                  ,
                  ("%s: option `%s' requires an argument\n"),
                  argv[0], argv[optind - 1]);
            nextchar += strlen(nextchar);
            return optstring[0] == ':' ? ':' : '?';
          }
        }
        nextchar += strlen(nextchar);
        if (longind !=
# 2726 "gzip.c" 3 4
            ((void *)0)
# 2726 "gzip.c"
        )
          *longind = option_index;
        if (pfound->flag)
        {
          *(pfound->flag) = pfound->val;
          return 0;
        }
        return pfound->val;
      }
      nextchar =
# 2735 "gzip.c" 3 4
          ((void *)0)
# 2735 "gzip.c"
          ;
      return 'W';
    }
    if (temp[1] == ':')
    {
      if (temp[2] == ':')
      {

        if (*nextchar != '\0')
        {
          optarg = nextchar;
          optind++;
        }
        else
          optarg =
# 2749 "gzip.c" 3 4
              ((void *)0)
# 2749 "gzip.c"
              ;
        nextchar =
# 2750 "gzip.c" 3 4
            ((void *)0)
# 2750 "gzip.c"
            ;
      }
      else
      {

        if (*nextchar != '\0')
        {
          optarg = nextchar;

          optind++;
        }
        else if (optind == argc)
        {
          if (print_errors)
          {

            fprintf(
# 2767 "gzip.c" 3 4
                stderr
# 2767 "gzip.c"
                ,
                ("%s: option requires an argument -- %c\n"),
                argv[0], c);
          }
          optopt = c;
          if (optstring[0] == ':')
            c = ':';
          else
            c = '?';
        }
        else

          optarg = argv[optind++];
        nextchar =
# 2781 "gzip.c" 3 4
            ((void *)0)
# 2781 "gzip.c"
            ;
      }
    }
    return c;
  }
}

int getopt(int argc,
           char *const *argv,
           const char *optstring)

{
  return _getopt_internal(argc, argv, optstring,
                          (const struct option *)0,
                          (int *)0,
                          0);
}
# 2849 "gzip.c"
static char *license_msg[] = {
    "Copyright 2002 Free Software Foundation",
    "Copyright 1992-1993 Jean-loup Gailly",
    "This program comes with ABSOLUTELY NO WARRANTY.",
    "You may redistribute copies of this program",
    "under the terms of the GNU General Public License.",
    "For more information about these matters, see the file named COPYING.",
    0};
# 2925 "gzip.c"
typedef void *sig_type;
# 2973 "gzip.c"
uch inbuf[0x8000 + 64];
uch outbuf[16384 + 2048];
ush d_buf[0x8000];
uch window[2L * 0x8000];

ush prev[1L << 16];

int ascii = 0;
int to_stdout = 0;
int decompress = 0;
int force = 0;
int no_name = -1;
int no_time = -1;
int recursive = 0;
int list = 0;
int verbose = 0;
int quiet = 0;
int do_lzw = 0;
int test = 0;
int foreground;
char *progname;
int maxbits = 16;
int method = 8;
int level = 6;
int exit_code = 0;
int save_orig_name;
int last_member;
int part_nb;
time_t time_stamp;
off_t ifile_size;
char *env;
char **args =
# 3010 "gzip.c" 3 4
    ((void *)0)
# 3010 "gzip.c"
    ;
char *z_suffix;
size_t z_len;

off_t bytes_in;
off_t bytes_out;
off_t total_in;
off_t total_out;
char ifname[1024];
char ofname[1024];
int remove_ofname = 0;
struct stat istat;
int ifd;
int ofd;
unsigned insize;
unsigned inptr;
unsigned outcnt;
int rsync = 0;

struct option longopts[] =
    {

        {"ascii", 0, 0, 'a'},
        {"to-stdout", 0, 0, 'c'},
        {"stdout", 0, 0, 'c'},
        {"decompress", 0, 0, 'd'},
        {"uncompress", 0, 0, 'd'},

        {"force", 0, 0, 'f'},
        {"help", 0, 0, 'h'},

        {"list", 0, 0, 'l'},
        {"license", 0, 0, 'L'},
        {"no-name", 0, 0, 'n'},
        {"name", 0, 0, 'N'},
        {"quiet", 0, 0, 'q'},
        {"silent", 0, 0, 'q'},
        {"recursive", 0, 0, 'r'},
        {"suffix", 1, 0, 'S'},
        {"test", 0, 0, 't'},
        {"no-time", 0, 0, 'T'},
        {"verbose", 0, 0, 'v'},
        {"version", 0, 0, 'V'},
        {"fast", 0, 0, '1'},
        {"best", 0, 0, '9'},
        {"lzw", 0, 0, 'Z'},
        {"bits", 1, 0, 'b'},
        {"rsyncable", 0, 0, 'R'},
        {0, 0, 0, 0}};

static void usage(void);
static void help(void);
static void license(void);
static void version(void);
static int input_eof(void);
static void treat_stdin(void);
static void treat_file(char *iname);
static int create_outfile(void);
static int do_stat(char *name, struct stat *sbuf);
static char *get_suffix(char *name);
static int get_istat(char *iname, struct stat *sbuf);
static int make_ofname(void);
static int same_file(struct stat *stat1, struct stat *stat2);
static int name_too_long(char *name, struct stat *statb);
static void shorten_name(char *name);
static int get_method(int in);
static void do_list(int ifd, int method);
static int check_ofname(void);
static void copy_stat(struct stat *ifstat);
static void do_exit(int exitcode);
int main(int argc, char **argv);
int (*work)(int infile, int outfile) = zip;

static void treat_dir(char *dir);

static void reset_times(char *name, struct stat *statb);

static void usage()
{
  printf("usage: %s [-%scdfhlLnN%stvV19] [-S suffix] [file ...]\n",
         progname,
         0 ? "a" : "", 0 ? "" : "r");
}

static void help()
{
  static char *help_msg[] = {

      " -c --stdout      write on standard output, keep original files unchanged",
      " -d --decompress  decompress",

      " -f --force       force overwrite of output file and compress links",
      " -h --help        give this help",

      " -l --list        list compressed file contents",
      " -L --license     display software license",

      " -n --no-name     do not save or restore the original name and time stamp",
      " -N --name        save or restore the original name and time stamp",
      " -q --quiet       suppress all warnings",

      " -r --recursive   operate recursively on directories",

      " -S .suf  --suffix .suf     use suffix .suf on compressed files",
      " -t --test        test compressed file integrity",
      " -v --verbose     verbose mode",
      " -V --version     display version number",
      " -1 --fast        compress faster",
      " -9 --best        compress better",

      "    --rsyncable   Make rsync-friendly archive",
      " file...          files to (de)compress. If none given, use standard input.",
      "Report bugs to <bug-gzip@gnu.org>.",
      0};
  char **p = help_msg;

  printf("%s %s\n(%s)\n", progname, "1.3.5", "2002-09-30");
  usage();
  while (*p)
    printf("%s\n", *p++);
}

static void license()
{
  char **p = license_msg;

  printf("%s %s\n(%s)\n", progname, "1.3.5", "2002-09-30");
  while (*p)
    printf("%s\n", *p++);
}

static void version()
{
  license();
  printf("Compilation options:\n%s %s ", "DIRENT", "UTIME");

  printf("STDC_HEADERS ");

  printf("HAVE_UNISTD_H ");

  printf("HAVE_MEMORY_H ");

  printf("HAVE_STRING_H ");

  printf("HAVE_LSTAT ");
# 3199 "gzip.c"
  printf("\n");
  printf("Written by Jean-loup Gailly.\n");
}

static void progerror(char *string)
{
  int e =
# 3206 "gzip.c" 3 4
      (*__errno_location())
# 3206 "gzip.c"
      ;
  fprintf(
# 3207 "gzip.c" 3 4
      stderr
# 3207 "gzip.c"
      ,
      "%s: ", progname);

# 3208 "gzip.c" 3 4
  (*__errno_location())
# 3208 "gzip.c"
      = e;
  perror(string);
  exit_code = 1;
}

int main(int argc,
         char **argv)

{
  int file_count;
  int proglen;
  int optc;

  ;

  progname = base_name(argv[0]);
  proglen = strlen(progname);

  if (proglen > 4 && (strcmp((progname + proglen - 4), (".exe")) == 0))
  {
    progname[proglen - 4] = '\0';
  }

  env = add_envopt(&argc, &argv, "GZIP");
  if (env !=
# 3234 "gzip.c" 3 4
      ((void *)0)
# 3234 "gzip.c"
  )
    args = argv;

  foreground = signal(
# 3236 "gzip.c" 3 4
                   2
# 3236 "gzip.c"
                   ,
# 3236 "gzip.c" 3 4
                   ((__sighandler_t)1)
# 3236 "gzip.c"
                       ) !=
# 3236 "gzip.c" 3 4
               ((__sighandler_t)1)
# 3236 "gzip.c"
      ;
  if (foreground)
  {
    (void)signal(
# 3238 "gzip.c" 3 4
        2
# 3238 "gzip.c"
        // ,
        // (sig_type)abort_gzip_signal
        );
  }

  if (signal(
# 3241 "gzip.c" 3 4
          15
# 3241 "gzip.c"
          ,
# 3241 "gzip.c" 3 4
          ((__sighandler_t)1)
# 3241 "gzip.c"
              ) !=
# 3241 "gzip.c" 3 4
      ((__sighandler_t)1)
# 3241 "gzip.c"
  )
  {
    (void)signal(
# 3242 "gzip.c" 3 4
        15
# 3242 "gzip.c"
        // ,
        // (sig_type)abort_gzip_signal
        );
  }

  if (signal(
# 3246 "gzip.c" 3 4
          1
# 3246 "gzip.c"
          ,
# 3246 "gzip.c" 3 4
          ((__sighandler_t)1)
# 3246 "gzip.c"
              ) !=
# 3246 "gzip.c" 3 4
      ((__sighandler_t)1)
# 3246 "gzip.c"
  )
  {
    (void)signal(
# 3247 "gzip.c" 3 4
        1
# 3247 "gzip.c"
        // ,
        // (sig_type)abort_gzip_signal
        );
  }
# 3259 "gzip.c"
  if (strncmp(progname, "un", 2) == 0 || strncmp(progname, "gun", 3) == 0)
  {
    decompress = 1;
  }
  else if ((strcmp((progname + 1), ("cat")) == 0) || (strcmp((progname), ("gzcat")) == 0))
  {
    decompress = to_stdout = 1;
  }

  z_suffix = ".gz";
  z_len = strlen(z_suffix);

  while ((optc = getopt_long(argc, argv, "ab:cdfhH?lLmMnNqrS:tvVZ123456789",
                             longopts, (int *)0)) != -1)
  {
    switch (optc)
    {
    case 'a':
      ascii = 1;
      break;
    case 'b':
      maxbits = atoi(optarg);
      for (; *optarg; optarg++)
        if (!('0' <= *optarg && *optarg <= '9'))
        {
          fprintf(
# 3281 "gzip.c" 3 4
              stderr
# 3281 "gzip.c"
              ,
              "%s: -b operand is not an integer\n",
              progname);
          usage();
          do_exit(1);
        }
      break;
    case 'c':
      to_stdout = 1;
      break;
    case 'd':
      decompress = 1;
      break;
    case 'f':
      force++;
      break;
    case 'h':
    case 'H':
    case '?':
      help();
      do_exit(0);
      break;
    case 'l':
      list = decompress = to_stdout = 1;
      break;
    case 'L':
      license();
      do_exit(0);
      break;
    case 'm':
      no_time = 1;
      break;
    case 'M':
      no_time = 0;
      break;
    case 'n':
      no_name = no_time = 1;
      break;
    case 'N':
      no_name = no_time = 0;
      break;
    case 'q':
      quiet = 1;
      verbose = 0;
      break;
    case 'r':

      recursive = 1;
      break;

    case 'R':
      rsync = 1;
      break;

    case 'S':

      z_len = strlen(optarg);
      z_suffix = optarg;
      break;
    case 't':
      test = decompress = to_stdout = 1;
      break;
    case 'v':
      verbose++;
      quiet = 0;
      break;
    case 'V':
      version();
      do_exit(0);
      break;
    case 'Z':

      fprintf(
# 3338 "gzip.c" 3 4
          stderr
# 3338 "gzip.c"
          ,
          "%s: -Z not supported in this version\n",
          progname);
      usage();
      do_exit(1);
      break;

    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
      level = optc - '0';
      break;
    default:

      usage();
      do_exit(1);
    }
  }

  if (quiet && signal(
# 3356 "gzip.c" 3 4
                   13
# 3356 "gzip.c"
                   ,
# 3356 "gzip.c" 3 4
                   ((__sighandler_t)1)
# 3356 "gzip.c"
                       ) !=
# 3356 "gzip.c" 3 4
                   ((__sighandler_t)1)
# 3356 "gzip.c"
  )
    signal(
# 3357 "gzip.c" 3 4
        13
# 3357 "gzip.c"
        // ,
        // (sig_type)abort_gzip_signal
        );

  if (no_time < 0)
    no_time = decompress;
  if (no_name < 0)
    no_name = decompress;

  file_count = argc - optind;

  if (ascii && !quiet)
  {
    fprintf(
# 3371 "gzip.c" 3 4
        stderr
# 3371 "gzip.c"
        ,
        "%s: option --ascii ignored on this system\n",
        progname);
  }

  if ((z_len == 0 && !decompress) || z_len > 30)
  {
    fprintf(
# 3376 "gzip.c" 3 4
        stderr
# 3376 "gzip.c"
        ,
        "%s: incorrect suffix '%s'\n",
        progname, z_suffix);
    do_exit(1);
  }
  // if (do_lzw && !decompress)
  //   work = lzw;

  ;
  ;
  ;
  ;

  ;

  if (file_count != 0)
  {
    if (to_stdout && !test && !list && (!decompress || !ascii))
    {
      ;
    }
    while (optind < argc)
    {
      treat_file(argv[optind++]);
    }
  }
  else
  {
    treat_stdin();
  }
  if (list && !quiet && file_count > 1)
  {
    do_list(-1, -1);
  }
  do_exit(exit_code);
  return exit_code;
}

static int
input_eof()
{
  if (!decompress || last_member)
    return 1;

  if (inptr == insize)
  {
    if (insize != 0x8000 || fill_inbuf(1) ==
# 3421 "gzip.c" 3 4
                                (-1)
# 3421 "gzip.c"
    )
      return 1;

    inptr = 0;
  }

  return 0;
}

static void treat_stdin()
{
  if (!force && !list &&
      isatty(fileno((FILE *)(decompress ?
# 3437 "gzip.c" 3 4
                                        stdin
# 3437 "gzip.c"
                                        :
# 3437 "gzip.c" 3 4
                                        stdout
# 3437 "gzip.c"
                             ))))
  {
# 3450 "gzip.c"
    fprintf(
# 3450 "gzip.c" 3 4
        stderr
# 3450 "gzip.c"
        ,
        "%s: compressed data not %s a terminal. Use -f to force %scompression.\n",
        progname, decompress ? "read from" : "written to",
        decompress ? "de" : "");
    fprintf(
# 3454 "gzip.c" 3 4
        stderr
# 3454 "gzip.c"
        ,
        "For help, type: %s -h\n", progname);
    do_exit(1);
  }

  if (decompress || !ascii)
  {
    ;
  }
  if (!test && !list && (!decompress || !ascii))
  {
    ;
  }
  strcpy(ifname, "stdin");
  strcpy(ofname, "stdout");

  time_stamp = 0;

  if (list || !no_time)
  {
    if (fstat(fileno(
# 3472 "gzip.c" 3 4
                  stdin
# 3472 "gzip.c"
                  ),
              &istat) != 0)
    {
      progerror("standard input");
      do_exit(1);
    }

    time_stamp = istat.
# 3479 "gzip.c" 3 4
                 st_mtim.tv_sec
# 3479 "gzip.c"
        ;
  }
  ifile_size = -1L;

  clear_bufs();
  to_stdout = 1;
  part_nb = 0;

  if (decompress)
  {
    method = get_method(ifd);
    if (method < 0)
    {
      do_exit(exit_code);
    }
  }
  if (list)
  {
    do_list(ifd, method);
    return;
  }

  for (;;)
  {
    if ((*work)(fileno(
# 3502 "gzip.c" 3 4
                    stdin
# 3502 "gzip.c"
                    ),
                fileno(
# 3502 "gzip.c" 3 4
                    stdout
# 3502 "gzip.c"
                    )) != 0)
      return;

    if (input_eof())
      break;

    method = get_method(ifd);
    if (method < 0)
      return;
    bytes_out = 0;
  }

  if (verbose)
  {
    if (test)
    {
      fprintf(
# 3514 "gzip.c" 3 4
          stderr
# 3514 "gzip.c"
          ,
          " OK\n");
    }
    else if (!decompress)
    {
      display_ratio(bytes_in - (bytes_out - header_bytes), bytes_in,
# 3517 "gzip.c" 3 4
                    stderr
# 3517 "gzip.c"
      );
      fprintf(
# 3518 "gzip.c" 3 4
          stderr
# 3518 "gzip.c"
          ,
          "\n");
    }
  }
}

static void treat_file(char *iname)
{

  if ((strcmp((iname), ("-")) == 0))
  {
    int cflag = to_stdout;
    treat_stdin();
    to_stdout = cflag;
    return;
  }

  if (get_istat(iname, &istat) != 0)
    return;

  if (
# 3546 "gzip.c" 3 4
      ((((
# 3546 "gzip.c"
            istat.st_mode
# 3546 "gzip.c" 3 4
            )) &
        0170000) == (0040000))
# 3546 "gzip.c"
  )
  {

    if (recursive)
    {
      struct stat st;
      st = istat;
      treat_dir(iname);

      reset_times(iname, &st);
    }
    else

    {
      if (!quiet)
        fprintf(
# 3558 "gzip.c" 3 4
            stderr
# 3558 "gzip.c"
            ,
            "%s: %s is a directory -- ignored\n", progname, ifname);
      if (exit_code == 0)
        exit_code = 2;
    };
    return;
  }
  if (!
# 3561 "gzip.c" 3 4
      ((((
# 3561 "gzip.c"
            istat.st_mode
# 3561 "gzip.c" 3 4
            )) &
        0170000) == (0100000))
# 3561 "gzip.c"
  )
  {
    {
      if (!quiet)
        fprintf(
# 3562 "gzip.c" 3 4
            stderr
# 3562 "gzip.c"
            ,
            "%s: %s is not a directory or a regular file - ignored\n", progname, ifname);
      if (exit_code == 0)
        exit_code = 2;
    }

    ;
    return;
  }
  if (istat.st_nlink > 1 && !to_stdout && !force)
  {
    {
      if (!quiet)
        fprintf(
# 3568 "gzip.c" 3 4
            stderr
# 3568 "gzip.c"
            ,
            "%s: %s has %lu other link%c -- unchanged\n", progname, ifname, (unsigned long)istat.st_nlink - 1, istat.st_nlink > 2 ? 's' : ' ');
      if (exit_code == 0)
        exit_code = 2;
    }

    ;
    return;
  }

  ifile_size = istat.st_size;
  time_stamp = no_time && !list ? 0 : istat.
# 3575 "gzip.c" 3 4
                                      st_mtim.tv_sec
# 3575 "gzip.c"
      ;

  if (to_stdout && !list && !test)
  {
    strcpy(ofname, "stdout");
  }
  else if (make_ofname() != 0)
  {
    return;
  }

  ifd = open(ifname, ascii && !decompress ?
# 3591 "gzip.c" 3 4
                                          00
# 3591 "gzip.c"
                                          :
# 3591 "gzip.c" 3 4
                                          00
# 3591 "gzip.c"
                                              | 0,
             (
# 3591 "gzip.c" 3 4
                 0400
# 3591 "gzip.c"
                 |
# 3591 "gzip.c" 3 4
                 0200
# 3591 "gzip.c"
                 ));
  if (ifd == -1)
  {
    progerror(ifname);
    return;
  }
  clear_bufs();
  part_nb = 0;

  if (decompress)
  {
    method = get_method(ifd);
    if (method < 0)
    {
      close(ifd);
      return;
    }
  }
  if (list)
  {
    do_list(ifd, method);
    close(ifd);
    return;
  }

  if (to_stdout)
  {
    ofd = fileno(
# 3618 "gzip.c" 3 4
        stdout
# 3618 "gzip.c"
    );
  }
  else
  {
    if (create_outfile() != 0)
      return;

    if (!decompress && save_orig_name && !verbose && !quiet)
    {
      fprintf(
# 3624 "gzip.c" 3 4
          stderr
# 3624 "gzip.c"
          ,
          "%s: %s compressed to %s\n",
          progname, ifname, ofname);
    }
  }

  if (!save_orig_name)
    save_orig_name = !no_name;

  if (verbose)
  {
    fprintf(
# 3632 "gzip.c" 3 4
        stderr
# 3632 "gzip.c"
        ,
        "%s:\t", ifname);
  }

  for (;;)
  {
    if ((*work)(ifd, ofd) != 0)
    {
      method = -1;
      break;
    }

    if (input_eof())
      break;

    method = get_method(ifd);
    if (method < 0)
      break;
    bytes_out = 0;
  }

  close(ifd);
  if (!to_stdout)
  {

    copy_stat(&istat);
    if (close(ofd))
      write_error();
  }
  if (method == -1)
  {
    if (!to_stdout)
      xunlink(ofname);
    return;
  }

  if (verbose)
  {
    if (test)
    {
      fprintf(
# 3665 "gzip.c" 3 4
          stderr
# 3665 "gzip.c"
          ,
          " OK");
    }
    else if (decompress)
    {
      display_ratio(bytes_out - (bytes_in - header_bytes), bytes_out,
# 3667 "gzip.c" 3 4
                    stderr
# 3667 "gzip.c"
      );
    }
    else
    {
      display_ratio(bytes_in - (bytes_out - header_bytes), bytes_in,
# 3669 "gzip.c" 3 4
                    stderr
# 3669 "gzip.c"
      );
    }
    if (!test && !to_stdout)
    {
      fprintf(
# 3672 "gzip.c" 3 4
          stderr
# 3672 "gzip.c"
          ,
          " -- replaced with %s", ofname);
    }
    fprintf(
# 3674 "gzip.c" 3 4
        stderr
# 3674 "gzip.c"
        ,
        "\n");
  }
}
# 3687 "gzip.c"
static int create_outfile()
{
  struct stat ostat;
  int flags =
# 3690 "gzip.c" 3 4
      01
# 3690 "gzip.c"
      |
# 3690 "gzip.c" 3 4
      0100
# 3690 "gzip.c"
      |
# 3690 "gzip.c" 3 4
      0200
# 3690 "gzip.c"
      | 0;

  if (ascii && decompress)
  {
    flags &= ~0;
  }
  for (;;)
  {

    if (check_ofname() != 0)
    {
      close(ifd);
      return 1;
    }

    remove_ofname = 1;
    ofd = open(ofname, flags, (
# 3703 "gzip.c" 3 4
                                  0400
# 3703 "gzip.c"
                                  |
# 3703 "gzip.c" 3 4
                                  0200
# 3703 "gzip.c"
                                  ));
    if (ofd == -1)
    {
      progerror(ofname);
      close(ifd);
      return 1;
    }

    if (fstat(ofd, &ostat) != 0)
    {

      progerror(ofname);
      close(ifd);
      close(ofd);
      xunlink(ofname);
      return 1;
    }
    if (!name_too_long(ofname, &ostat))
      return 0;

    if (decompress)
    {

      {
        if (!quiet)
          fprintf(
# 3725 "gzip.c" 3 4
              stderr
# 3725 "gzip.c"
              ,
              "%s: %s: warning, name truncated\n", progname, ofname);
        if (exit_code == 0)
          exit_code = 2;
      };
      return 0;
    }
    close(ofd);
    xunlink(ofname);

    shorten_name(ofname);
  }
}

static int do_stat(char *name, struct stat *sbuf)
{

# 3748 "gzip.c" 3 4
  (*__errno_location())
# 3748 "gzip.c"
      = 0;
  if (!to_stdout && !force)
  {
    return lstat(name, sbuf);
  }
  return stat(name, sbuf);
}
# 3767 "gzip.c"
static char *get_suffix(char *name)
{
  int nlen, slen;
  char suffix[30 + 3];
  static char *known_suffixes[] =
      {
# 3773 "gzip.c" 3 4
          ((void *)0)
# 3773 "gzip.c"
              ,
          ".gz", ".z", ".taz", ".tgz", "-gz", "-z", "_z",

# 3777 "gzip.c" 3 4
          ((void *)0)
# 3777 "gzip.c"
      };
  char **suf = known_suffixes;

  *suf = z_suffix;
  if ((strcmp((z_suffix), ("z")) == 0))
    suf++;
# 3790 "gzip.c"
  nlen = strlen(name);
  if (nlen <= 30 + 2)
  {
    strcpy(suffix, name);
  }
  else
  {
    strcpy(suffix, name + nlen - 30 - 2);
  }
  strlwr(suffix);
  slen = strlen(suffix);
  do
  {
    int s = strlen(*suf);
    if (slen > s && suffix[slen - s - 1] != '/' && (strcmp((suffix + slen - s), (*suf)) == 0))
    {
      return name + nlen - s;
    }
  } while (*++suf !=
# 3804 "gzip.c" 3 4
           ((void *)0)
# 3804 "gzip.c"
  );

  return
# 3806 "gzip.c" 3 4
      ((void *)0)
# 3806 "gzip.c"
          ;
}
# 3817 "gzip.c"
static int get_istat(char *iname,
                     struct stat *sbuf)

{
  int ilen;
  int z_suffix_errno = 0;
  static char *suffixes[] = {
# 3823 "gzip.c" 3 4
      ((void *)0)
# 3823 "gzip.c"
          ,
      ".gz", ".z", "-z", ".Z",
# 3823 "gzip.c" 3 4
      ((void *)0)
# 3823 "gzip.c"
  };
  char **suf = suffixes;
  char *s;

  *suf = z_suffix;

  if (sizeof ifname - 1 <= strlen(iname))
    goto name_too_long;

  strcpy(ifname, iname);

  if (do_stat(ifname, sbuf) == 0)
    return 0;

  if (!decompress ||
# 3840 "gzip.c" 3 4
      (*__errno_location())
# 3840 "gzip.c"
          !=
# 3840 "gzip.c" 3 4
          2
# 3840 "gzip.c"
  )
  {
    progerror(ifname);
    return 1;
  }

  s = get_suffix(ifname);
  if (s !=
# 3848 "gzip.c" 3 4
      ((void *)0)
# 3848 "gzip.c"
  )
  {
    progerror(ifname);
    return 1;
  }

  ilen = strlen(ifname);
  if ((strcmp((z_suffix), (".gz")) == 0))
    suf++;

  do
  {
    char *s0 = s = *suf;
    strcpy(ifname, iname);
# 3874 "gzip.c"
    if (sizeof ifname <= ilen + strlen(s))
      goto name_too_long;
    strcat(ifname, s);
    if (do_stat(ifname, sbuf) == 0)
      return 0;
    if ((strcmp((s0), (z_suffix)) == 0))
      z_suffix_errno =
# 3879 "gzip.c" 3 4
          (*__errno_location())
# 3879 "gzip.c"
          ;
  } while (*++suf !=
# 3880 "gzip.c" 3 4
           ((void *)0)
# 3880 "gzip.c"
  );

  strcpy(ifname, iname);

  strcat(ifname, z_suffix);

# 3892 "gzip.c" 3 4
  (*__errno_location())
# 3892 "gzip.c"
      = z_suffix_errno;
  progerror(ifname);
  return 1;

name_too_long:
  fprintf(
# 3897 "gzip.c" 3 4
      stderr
# 3897 "gzip.c"
      ,
      "%s: %s: file name too long\n", progname, iname);
  exit_code = 1;
  return 1;
}

static int make_ofname()
{
  char *suff;

  strcpy(ofname, ifname);

  suff = get_suffix(ofname);

  if (decompress)
  {
    if (suff ==
# 3915 "gzip.c" 3 4
        ((void *)0)
# 3915 "gzip.c"
    )
    {

      if (!recursive && (list || test))
        return 0;

      if (verbose || (!recursive && !quiet))
      {
        {
          if (!quiet)
            fprintf(
# 3923 "gzip.c" 3 4
                stderr
# 3923 "gzip.c"
                ,
                "%s: %s: unknown suffix -- ignored\n", progname, ifname);
          if (exit_code == 0)
            exit_code = 2;
        };
      }
      return 2;
    }

    strlwr(suff);
    if ((strcmp((suff), (".tgz")) == 0) || (strcmp((suff), (".taz")) == 0))
    {
      strcpy(suff, ".tar");
    }
    else
    {
      *suff = '\0';
    }
  }
  else if (suff !=
# 3937 "gzip.c" 3 4
           ((void *)0)
# 3937 "gzip.c"
  )
  {

    if (verbose || (!recursive && !quiet))
    {

      fprintf(
# 3941 "gzip.c" 3 4
          stderr
# 3941 "gzip.c"
          ,
          "%s: %s already has %s suffix -- unchanged\n",
          progname, ifname, suff);
    }
    return 2;
  }
  else
  {
    save_orig_name = 0;
# 3971 "gzip.c"
    if (sizeof ofname <= strlen(ofname) + z_len)
      goto name_too_long;
    strcat(ofname, z_suffix);
  }
  return 0;

name_too_long:
{
  if (!quiet)
    fprintf(
# 3979 "gzip.c" 3 4
        stderr
# 3979 "gzip.c"
        ,
        "%s: %s: file name too long\n", progname, ifname);
  if (exit_code == 0)
    exit_code = 2;
};
  return 2;
}
# 3995 "gzip.c"
static int get_method(int in)
{
  uch flags;
  char magic[2];
  int imagic1;
  ulg stamp;

  if (force && to_stdout)
  {
    magic[0] = (char)(inptr < insize ? inbuf[inptr++] : fill_inbuf(1));
    imagic1 = (inptr < insize ? inbuf[inptr++] : fill_inbuf(1));
    magic[1] = (char)imagic1;
  }
  else
  {
    magic[0] = (char)(inptr < insize ? inbuf[inptr++] : fill_inbuf(0));
    magic[1] = (char)(inptr < insize ? inbuf[inptr++] : fill_inbuf(0));
    imagic1 = 0;
  }
  method = -1;
  part_nb++;
  header_bytes = 0;
  last_member = 0;

  if (memcmp(magic, "\037\213", 2) == 0 || memcmp(magic, "\037\236", 2) == 0)
  {

    method = (int)(inptr < insize ? inbuf[inptr++] : fill_inbuf(0));
    if (method != 8)
    {
      fprintf(
# 4027 "gzip.c" 3 4
          stderr
# 4027 "gzip.c"
          ,
          "%s: %s: unknown method %d -- not supported\n",
          progname, ifname, method);
      exit_code = 1;
      return -1;
    }
    // work = unzip;
    flags = (uch)(inptr < insize ? inbuf[inptr++] : fill_inbuf(0));

    if ((flags & 0x20) != 0)
    {
      fprintf(
# 4037 "gzip.c" 3 4
          stderr
# 4037 "gzip.c"
          ,
          "%s: %s is encrypted -- not supported\n",
          progname, ifname);
      exit_code = 1;
      return -1;
    }
    if ((flags & 0x02) != 0)
    {
      fprintf(
# 4044 "gzip.c" 3 4
          stderr
# 4044 "gzip.c"
          ,
          "%s: %s is a a multi-part gzip file -- not supported\n",
          progname, ifname);
      exit_code = 1;
      if (force <= 1)
        return -1;
    }
    if ((flags & 0xC0) != 0)
    {
      fprintf(
# 4051 "gzip.c" 3 4
          stderr
# 4051 "gzip.c"
          ,
          "%s: %s has flags 0x%x -- not supported\n",
          progname, ifname, flags);
      exit_code = 1;
      if (force <= 1)
        return -1;
    }
    stamp = (ulg)(inptr < insize ? inbuf[inptr++] : fill_inbuf(0));
    stamp |= ((ulg)(inptr < insize ? inbuf[inptr++] : fill_inbuf(0))) << 8;
    stamp |= ((ulg)(inptr < insize ? inbuf[inptr++] : fill_inbuf(0))) << 16;
    stamp |= ((ulg)(inptr < insize ? inbuf[inptr++] : fill_inbuf(0))) << 24;
    if (stamp != 0 && !no_time)
      time_stamp = stamp;

    (void)(inptr < insize ? inbuf[inptr++] : fill_inbuf(0));
    (void)(inptr < insize ? inbuf[inptr++] : fill_inbuf(0));

    if ((flags & 0x02) != 0)
    {
      unsigned part = (unsigned)(inptr < insize ? inbuf[inptr++] : fill_inbuf(0));
      part |= ((unsigned)(inptr < insize ? inbuf[inptr++] : fill_inbuf(0))) << 8;
      if (verbose)
      {
        fprintf(
# 4070 "gzip.c" 3 4
            stderr
# 4070 "gzip.c"
            ,
            "%s: %s: part number %u\n",
            progname, ifname, part);
      }
    }
    if ((flags & 0x04) != 0)
    {
      unsigned len = (unsigned)(inptr < insize ? inbuf[inptr++] : fill_inbuf(0));
      len |= ((unsigned)(inptr < insize ? inbuf[inptr++] : fill_inbuf(0))) << 8;
      if (verbose)
      {
        fprintf(
# 4078 "gzip.c" 3 4
            stderr
# 4078 "gzip.c"
            ,
            "%s: %s: extra field of %u bytes ignored\n",
            progname, ifname, len);
      }
      while (len--)
        (void)(inptr < insize ? inbuf[inptr++] : fill_inbuf(0));
    }

    if ((flags & 0x08) != 0)
    {
      if (no_name || (to_stdout && !list) || part_nb > 1)
      {

        char c;
        do
        {
          c = (inptr < insize ? inbuf[inptr++] : fill_inbuf(0));
        } while (c != 0);
      }
      else
      {

        char *p = base_name(ofname);
        char *base = p;
        char *base2;
        for (;;)
        {
          *p = (char)(inptr < insize ? inbuf[inptr++] : fill_inbuf(0));
          if (*p++ == '\0')
            break;
          if (p >= ofname + sizeof(ofname))
          {
            error("corrupted input -- file name too large");
          }
        }
        base2 = base_name(base);
        strcpy(base, base2);

        if (!list)
        {
          ;
          if (base)
            list = 0;
        }
      }
    }

    if ((flags & 0x10) != 0)
    {
      while ((inptr < insize ? inbuf[inptr++] : fill_inbuf(0)) != 0)
        ;
    }
    if (part_nb == 1)
    {
      header_bytes = inptr + 2 * sizeof(long);
    }
  }
  else if (memcmp(magic, "\120\113\003\004", 2) == 0 && inptr == 2 && memcmp((char *)inbuf, "\120\113\003\004", 4) == 0)
  {

    inptr = 0;
    // work = unzip;
    if (check_zipfile(in) != 0)
      return -1;

    last_member = 1;
  }
  else if (memcmp(magic, "\037\036", 2) == 0)
  {
    // work = unpack;
    method = 2;
  }
  else if (memcmp(magic, "\037\235", 2) == 0)
  {
    // work = unlzw;
    method = 1;
    last_member = 1;
  }
  else if (memcmp(magic, "\037\240", 2) == 0)
  {
    // work = unlzh;
    method = 3;
    last_member = 1;
  }
  else if (force && to_stdout && !list)
  {
    method = 0;
    // work = copy;
    inptr = 0;
    last_member = 1;
  }
  if (method >= 0)
    return method;

  if (part_nb == 1)
  {
    fprintf(
# 4154 "gzip.c" 3 4
        stderr
# 4154 "gzip.c"
        ,
        "\n%s: %s: not in gzip format\n", progname, ifname);
    exit_code = 1;
    return -1;
  }
  else
  {
    if (magic[0] == 0)
    {
      int inbyte;
      for (inbyte = imagic1; inbyte == 0; inbyte = (inptr < insize ? inbuf[inptr++] : fill_inbuf(1)))
        continue;
      if (inbyte ==
# 4163 "gzip.c" 3 4
          (-1)
# 4163 "gzip.c"
      )
      {
        if (verbose)
        {
          if (!quiet)
            fprintf(
# 4166 "gzip.c" 3 4
                stderr
# 4166 "gzip.c"
                ,
                "\n%s: %s: decompression OK, trailing zero bytes ignored\n", progname, ifname);
          if (exit_code == 0)
            exit_code = 2;
        };
        return -3;
      }
    }

    {
      if (!quiet)
        fprintf(
# 4172 "gzip.c" 3 4
            stderr
# 4172 "gzip.c"
            ,
            "\n%s: %s: decompression OK, trailing garbage ignored\n", progname, ifname);
      if (exit_code == 0)
        exit_code = 2;
    };
    return -2;
  }
}

static void do_list(int ifd, int method)
{
  ulg crc;
  static int first_time = 1;
  static char *methods[9] = {
      "store",
      "compr",
      "pack ",
      "lzh  ",
      "", "", "", "",
      "defla"};
  char *date;
  int positive_off_t_width = 1;
  off_t o;

  for (o = (~(off_t)0 - (~(off_t)0 << (sizeof(off_t) * 8 - 1))); 9 < o; o /= 10)
  {
    positive_off_t_width++;
  }

  if (first_time && method >= 0)
  {
    first_time = 0;
    if (verbose)
    {
      printf("method  crc     date  time  ");
    }
    if (!quiet)
    {
      printf("%*.*s %*.*s  ratio uncompressed_name\n",
             positive_off_t_width, positive_off_t_width, "compressed",
             positive_off_t_width, positive_off_t_width, "uncompressed");
    }
  }
  else if (method < 0)
  {
    if (total_in <= 0 || total_out <= 0)
      return;
    if (verbose)
    {
      printf("                            ");
    }
    if (verbose || !quiet)
    {
      fprint_off(
# 4220 "gzip.c" 3 4
          stdout
# 4220 "gzip.c"
          ,
          total_in, positive_off_t_width);
      printf(" ");
      fprint_off(
# 4222 "gzip.c" 3 4
          stdout
# 4222 "gzip.c"
          ,
          total_out, positive_off_t_width);
      printf(" ");
    }
    display_ratio(total_out - (total_in - header_bytes), total_out,
# 4225 "gzip.c" 3 4
                  stdout
# 4225 "gzip.c"
    );

    printf(" (totals)\n");
    return;
  }
  crc = (ulg)~0;
  bytes_out = -1L;
  bytes_in = ifile_size;

  if (method == 8 && !last_member)
  {

    bytes_in = lseek(ifd, (off_t)(-8),
# 4244 "gzip.c" 3 4
                     2
# 4244 "gzip.c"
    );
    if (bytes_in != -1L)
    {
      uch buf[8];
      bytes_in += 8L;
      if (read(ifd, (char *)buf, sizeof(buf)) != sizeof(buf))
      {
        read_error();
      }
      crc = ((ulg)(((ush)(uch)((buf)[0]) | ((ush)(uch)((buf)[1]) << 8))) | ((ulg)(((ush)(uch)(((buf) + 2)[0]) | ((ush)(uch)(((buf) + 2)[1]) << 8))) << 16));
      bytes_out = ((ulg)(((ush)(uch)((buf + 4)[0]) | ((ush)(uch)((buf + 4)[1]) << 8))) | ((ulg)(((ush)(uch)(((buf + 4) + 2)[0]) | ((ush)(uch)(((buf + 4) + 2)[1]) << 8))) << 16));
    }
  }

  date = ctime((time_t *)&time_stamp) + 4;
  date[12] = '\0';
  if (verbose)
  {
    printf("%5s %08lx %11s ", methods[method], crc, date);
  }
  fprint_off(
# 4261 "gzip.c" 3 4
      stdout
# 4261 "gzip.c"
      ,
      bytes_in, positive_off_t_width);
  printf(" ");
  fprint_off(
# 4263 "gzip.c" 3 4
      stdout
# 4263 "gzip.c"
      ,
      bytes_out, positive_off_t_width);
  printf(" ");
  if (bytes_in == -1L)
  {
    total_in = -1L;
    bytes_in = bytes_out = header_bytes = 0;
  }
  else if (total_in >= 0)
  {
    total_in += bytes_in;
  }
  if (bytes_out == -1L)
  {
    total_out = -1L;
    bytes_in = bytes_out = header_bytes = 0;
  }
  else if (total_out >= 0)
  {
    total_out += bytes_out;
  }
  display_ratio(bytes_out - (bytes_in - header_bytes), bytes_out,
# 4277 "gzip.c" 3 4
                stdout
# 4277 "gzip.c"
  );
  printf(" %s\n", ofname);
}

static int same_file(struct stat *stat1,
                     struct stat *stat2)

{
  return stat1->st_ino == stat2->st_ino && stat1->st_dev == stat2->st_dev
# 4300 "gzip.c"
      ;
}

static int name_too_long(
    char *name,
    struct stat *statb)

{
  int s = strlen(name);
  char c = name[s - 1];
  struct stat tstat;
  int res;

  tstat = *statb;
  name[s - 1] = '\0';
  res = lstat(name, &tstat) == 0 && same_file(statb, &tstat);
  name[s - 1] = c;
  ;
  return res;
}
# 4333 "gzip.c"
static void shorten_name(char *name)
{
  int len;
  char *trunc =
# 4337 "gzip.c" 3 4
      ((void *)0)
# 4337 "gzip.c"
      ;
  int plen;
  int min_part = 3;
  char *p;

  len = strlen(name);
  if (decompress)
  {
    if (len <= 1)
      error("name too short");
    name[len - 1] = '\0';
    return;
  }
  p = get_suffix(name);
  if (p ==
# 4349 "gzip.c" 3 4
      ((void *)0)
# 4349 "gzip.c"
  )
    error("can't recover suffix\n");
  *p = '\0';
  save_orig_name = 1;

  if (len > 4 && (strcmp((p - 4), (".tar")) == 0))
  {
    strcpy(p - 4, ".tgz");
    return;
  }

  do
  {
    p = strrchr(name, '/');
    p = p ? p + 1 : name;
    while (*p)
    {
      plen = strcspn(p, ".");
      p += plen;
      if (plen > min_part)
        trunc = p - 1;
      if (*p)
        p++;
    }
  } while (trunc ==
# 4370 "gzip.c" 3 4
               ((void *)0)
# 4370 "gzip.c"
           && --min_part != 0);

  if (trunc !=
# 4372 "gzip.c" 3 4
      ((void *)0)
# 4372 "gzip.c"
  )
  {
    do
    {
      trunc[0] = trunc[1];
    } while (*trunc++);
    trunc--;
  }
  else
  {
    trunc = strrchr(name, "."[0]);
    if (trunc ==
# 4379 "gzip.c" 3 4
        ((void *)0)
# 4379 "gzip.c"
    )
      error("internal error in shorten_name");
    if (trunc[1] == '\0')
      trunc--;
  }
  strcpy(trunc, z_suffix);
}
# 4399 "gzip.c"
static int check_ofname()
{
  struct stat ostat;

# 4407 "gzip.c" 3 4
  (*__errno_location())
# 4407 "gzip.c"
      = 0;
  while (lstat(ofname, &ostat) != 0)
  {
    if (
# 4409 "gzip.c" 3 4
        (*__errno_location())
# 4409 "gzip.c"
        !=
# 4409 "gzip.c" 3 4
        36
# 4409 "gzip.c"
    )
      return 0;
    shorten_name(ofname);
  }

  if (!decompress && name_too_long(ofname, &ostat))
  {
    shorten_name(ofname);
    if (lstat(ofname, &ostat) != 0)
      return 0;
  }

  if (same_file(&istat, &ostat))
  {
    if ((strcmp((ifname), (ofname)) == 0))
    {
      fprintf(
# 4429 "gzip.c" 3 4
          stderr
# 4429 "gzip.c"
          ,
          "%s: %s: cannot %scompress onto itself\n",
          progname, ifname, decompress ? "de" : "");
    }
    else
    {
      fprintf(
# 4432 "gzip.c" 3 4
          stderr
# 4432 "gzip.c"
          ,
          "%s: %s and %s are the same file\n",
          progname, ifname, ofname);
    }
    exit_code = 1;
    return 1;
  }

  if (!force)
  {
    int ok = 0;
    fprintf(
# 4441 "gzip.c" 3 4
        stderr
# 4441 "gzip.c"
        ,
        "%s: %s already exists;", progname, ofname);
    if (foreground && isatty(fileno(
# 4442 "gzip.c" 3 4
                          stdin
# 4442 "gzip.c"
                          )))
    {
      fprintf(
# 4443 "gzip.c" 3 4
          stderr
# 4443 "gzip.c"
          ,
          " do you wish to overwrite (y or n)? ");
      fflush(
# 4444 "gzip.c" 3 4
          stderr
# 4444 "gzip.c"
      );
      ok = yesno();
    }
    if (!ok)
    {
      fprintf(
# 4448 "gzip.c" 3 4
          stderr
# 4448 "gzip.c"
          ,
          "\tnot overwritten\n");
      if (exit_code == 0)
        exit_code = 2;
      return 1;
    }
  }
  if (xunlink(ofname))
  {
    progerror(ofname);
    return 1;
  }
  return 0;
}

static void reset_times(char *name, struct stat *statb)
{
  struct utimbuf timep;

  timep.actime = statb->
# 4472 "gzip.c" 3 4
                 st_atim.tv_sec
# 4472 "gzip.c"
      ;
  timep.modtime = statb->
# 4473 "gzip.c" 3 4
                  st_mtim.tv_sec
# 4473 "gzip.c"
      ;

  if (utime(name, &timep) && !
# 4476 "gzip.c" 3 4
                             ((((
# 4476 "gzip.c"
                                   statb->st_mode
# 4476 "gzip.c" 3 4
                                   )) &
                               0170000) == (0040000))
# 4476 "gzip.c"
  )
  {
    int e =
# 4477 "gzip.c" 3 4
        (*__errno_location())
# 4477 "gzip.c"
        ;
    {
      if (!quiet)
        fprintf(
# 4478 "gzip.c" 3 4
            stderr
# 4478 "gzip.c"
            ,
            "%s: ", progname);
      if (exit_code == 0)
        exit_code = 2;
    };
    if (!quiet)
    {

# 4480 "gzip.c" 3 4
      (*__errno_location())
# 4480 "gzip.c"
          = e;
      perror(ofname);
    }
  }
}

static void copy_stat(struct stat *ifstat)
{

  if (decompress && time_stamp != 0 && ifstat->
# 4496 "gzip.c" 3 4
                                           st_mtim.tv_sec
# 4496 "gzip.c"
                                           != time_stamp)
  {
    ifstat->
# 4497 "gzip.c" 3 4
        st_mtim.tv_sec
# 4497 "gzip.c"
        = time_stamp;
    if (verbose > 1)
    {
      fprintf(
# 4499 "gzip.c" 3 4
          stderr
# 4499 "gzip.c"
          ,
          "%s: time stamp restored\n", ofname);
    }
  }
  reset_times(ofname, ifstat);

  if (fchmod(ofd, ifstat->st_mode & 07777))
  {
    int e =
# 4506 "gzip.c" 3 4
        (*__errno_location())
# 4506 "gzip.c"
        ;
    {
      if (!quiet)
        fprintf(
# 4507 "gzip.c" 3 4
            stderr
# 4507 "gzip.c"
            ,
            "%s: ", progname);
      if (exit_code == 0)
        exit_code = 2;
    };
    if (!quiet)
    {

# 4509 "gzip.c" 3 4
      (*__errno_location())
# 4509 "gzip.c"
          = e;
      perror(ofname);
    }
  }

  fchown(ofd, ifstat->st_uid, ifstat->st_gid);

  remove_ofname = 0;

  if (xunlink(ifname))
  {
    int e =
# 4519 "gzip.c" 3 4
        (*__errno_location())
# 4519 "gzip.c"
        ;
    {
      if (!quiet)
        fprintf(
# 4520 "gzip.c" 3 4
            stderr
# 4520 "gzip.c"
            ,
            "%s: ", progname);
      if (exit_code == 0)
        exit_code = 2;
    };
    if (!quiet)
    {

# 4522 "gzip.c" 3 4
      (*__errno_location())
# 4522 "gzip.c"
          = e;
      perror(ifname);
    }
  }
}

static void treat_dir(char *dir)
{
  struct dirent *dp;
  DIR *dirp;
  char nbuf[1024];
  int len;

  dirp = opendir(dir);

  if (dirp ==
# 4543 "gzip.c" 3 4
      ((void *)0)
# 4543 "gzip.c"
  )
  {
    progerror(dir);
    return;
  }
# 4563 "gzip.c"
  while ((
# 4563 "gzip.c" 3 4
             (*__errno_location())
# 4563 "gzip.c"
             = 0,
             dp = readdir(dirp)) !=
# 4563 "gzip.c" 3 4
         ((void *)0)
# 4563 "gzip.c"
  )
  {

    if ((strcmp((dp->d_name), (".")) == 0) || (strcmp((dp->d_name), ("..")) == 0))
    {
      continue;
    }
    len = strlen(dir);
    if (len + strlen((dp)->d_name) + 1 < 1024 - 1)
    {
      strcpy(nbuf, dir);
      if (len != 0

      )
      {
        nbuf[len++] = '/';
      }
      strcpy(nbuf + len, dp->d_name);
      treat_file(nbuf);
    }
    else
    {
      fprintf(
# 4584 "gzip.c" 3 4
          stderr
# 4584 "gzip.c"
          ,
          "%s: %s/%s: pathname too long\n",
          progname, dir, dp->d_name);
      exit_code = 1;
    }
  }
  if (
# 4589 "gzip.c" 3 4
      (*__errno_location())
# 4589 "gzip.c"
      != 0)
    progerror(dir);
  if (closedir(dirp) != 0)
    progerror(dir);
}

static void do_exit(int exitcode)
{
  static int in_exit = 0;

  if (in_exit)
    exit(exitcode);
  in_exit = 1;
  if (env !=
# 4606 "gzip.c" 3 4
      ((void *)0)
# 4606 "gzip.c"
  )
    free(env), env =
# 4606 "gzip.c" 3 4
                   ((void *)0)
# 4606 "gzip.c"
        ;
  if (args !=
# 4607 "gzip.c" 3 4
      ((void *)0)
# 4607 "gzip.c"
  )
    free((char *)args), args =
# 4607 "gzip.c" 3 4
                            ((void *)0)
# 4607 "gzip.c"
        ;
  ;
  ;
  ;
  ;

  ;

  exit(exitcode);
}

static void do_remove()
{
  if (remove_ofname)
  {
    close(ofd);
    xunlink(ofname);
  }
}

void abort_gzip()
{
  do_remove();
  do_exit(1);
}

void abort_gzip_signal()
{
  do_remove();
  _exit(1);
}
# 4780 "gzip.c"
struct huft
{
  uch e;
  uch b;
  union
  {
    ush n;
    struct huft *t;
  } v;
};

int huft_build(unsigned *, unsigned, unsigned, ush *, ush *, struct huft **, int *);
int huft_free(struct huft *);
int inflate_codes(struct huft *, struct huft *, int, int);
int inflate_stored(void);
int inflate_fixed(void);
int inflate_dynamic(void);
int inflate_block(int *);
int inflate(void);
# 4815 "gzip.c"
static unsigned border[] = {
    16, 17, 18, 0, 8, 7, 9, 6, 10, 5, 11, 4, 12, 3, 13, 2, 14, 1, 15};
static ush cplens[] = {
    3, 4, 5, 6, 7, 8, 9, 10, 11, 13, 15, 17, 19, 23, 27, 31,
    35, 43, 51, 59, 67, 83, 99, 115, 131, 163, 195, 227, 258, 0, 0};

static ush cplext[] = {
    0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2,
    3, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 0, 99, 99};
static ush cpdist[] = {
    1, 2, 3, 4, 5, 7, 9, 13, 17, 25, 33, 49, 65, 97, 129, 193,
    257, 385, 513, 769, 1025, 1537, 2049, 3073, 4097, 6145,
    8193, 12289, 16385, 24577};
static ush cpdext[] = {
    0, 0, 0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6,
    7, 7, 8, 8, 9, 9, 10, 10, 11, 11,
    12, 12, 13, 13};
# 4866 "gzip.c"
ulg bb;
unsigned bk;

ush mask_bits[] = {
    0x0000,
    0x0001, 0x0003, 0x0007, 0x000f, 0x001f, 0x003f, 0x007f, 0x00ff,
    0x01ff, 0x03ff, 0x07ff, 0x0fff, 0x1fff, 0x3fff, 0x7fff, 0xffff};
# 4921 "gzip.c"
int lbits = 9;
int dbits = 6;

unsigned hufts;

int huft_build(unsigned *b,
               unsigned n,
               unsigned s,
               ush *d,
               ush *e,
               struct huft **t,
               int *m)

{
  unsigned a;
  unsigned c[16 + 1];
  unsigned f;
  int g;
  int h;
  register unsigned i;
  register unsigned j;
  register int k;
  int l;
  register unsigned *p;
  register struct huft *q;
  struct huft r;
  struct huft *u[16];
  unsigned v[288];
  register int w;
  unsigned x[16 + 1];
  unsigned *xp;
  int y;
  unsigned z;

  memset((voidp)(c), 0, (sizeof(c)));
  p = b;
  i = n;
  do
  {

    ;
    c[*p]++;
    p++;
  } while (--i);
  if (c[0] == n)
  {
    *t = (struct huft *)
# 4979 "gzip.c" 3 4
        ((void *)0)
# 4979 "gzip.c"
        ;
    *m = 0;
    return 0;
  }

  l = *m;
  for (j = 1; j <= 16; j++)
    if (c[j])
      break;
  k = j;
  if ((unsigned)l < j)
    l = j;
  for (i = 16; i; i--)
    if (c[i])
      break;
  g = i;
  if ((unsigned)l > i)
    l = i;
  *m = l;

  for (y = 1 << j; j < i; j++, y <<= 1)
    if ((y -= c[j]) < 0)
      return 2;
  if ((y -= c[i]) < 0)
    return 2;
  c[i] += y;

  x[1] = j = 0;
  p = c + 1;
  xp = x + 2;
  while (--i)
  {
    *xp++ = (j += *p++);
  }

  p = b;
  i = 0;
  do
  {
    if ((j = *p++) != 0)
      v[x[j]++] = i;
  } while (++i < n);
  n = x[g];

  x[0] = i = 0;
  p = v;
  h = -1;
  w = -l;
  u[0] = (struct huft *)
# 5033 "gzip.c" 3 4
      ((void *)0)
# 5033 "gzip.c"
      ;
  q = (struct huft *)
# 5034 "gzip.c" 3 4
      ((void *)0)
# 5034 "gzip.c"
      ;
  z = 0;

  for (; k <= g; k++)
  {
    a = c[k];
    while (a--)
    {

      while (k > w + l)
      {
        h++;
        w += l;

        z = (z = g - w) > (unsigned)l ? l : z;
        if ((f = 1 << (j = k - w)) > a + 1)
        {
          f -= a + 1;
          xp = c + k;
          if (j < z)
            while (++j < z)
            {
              if ((f <<= 1) <= *++xp)
                break;
              f -= *xp;
            }
        }
        z = 1 << j;

        if ((q = (struct huft *)malloc((z + 1) * sizeof(struct huft))) ==
            (struct huft *)
# 5068 "gzip.c" 3 4
                ((void *)0)
# 5068 "gzip.c"
        )
        {
          if (h)
            huft_free(u[0]);
          return 3;
        }
        hufts += z + 1;
        *t = q + 1;
        *(t = &(q->v.t)) = (struct huft *)
# 5076 "gzip.c" 3 4
            ((void *)0)
# 5076 "gzip.c"
            ;
        u[h] = ++q;

        if (h)
        {
          x[h] = i;
          r.b = (uch)l;
          r.e = (uch)(16 + j);
          r.v.t = q;
          j = i >> (w - l);
          u[h - 1][j] = r;
        }
      }

      r.b = (uch)(k - w);
      if (p >= v + n)
        r.e = 99;
      else if (*p < s)
      {
        r.e = (uch)(*p < 256 ? 16 : 15);
        r.v.n = (ush)(*p);
        p++;
      }
      else
      {
        r.e = (uch)e[*p - s];
        r.v.n = d[*p++ - s];
      }

      f = 1 << (k - w);
      for (j = i >> w; j < z; j += f)
        q[j] = r;

      for (j = 1 << (k - 1); i & j; j >>= 1)
        i ^= j;
      i ^= j;

      while ((i & ((1 << w) - 1)) != x[h])
      {
        h--;
        w -= l;
      }
    }
  }

  return y != 0 && g != 1;
}

int huft_free(
    struct huft *t)

{
  register struct huft *p, *q;

  p = t;
  while (p != (struct huft *)
# 5144 "gzip.c" 3 4
                  ((void *)0)
# 5144 "gzip.c"
  )
  {
    q = (--p)->v.t;
    free((char *)p);
    p = q;
  }
  return 0;
}

int inflate_codes(struct huft *tl, struct huft *td, int bl, int bd)
{
  register unsigned e;
  unsigned n, d;
  unsigned w;
  struct huft *t;
  unsigned ml, md;
  register ulg b;
  register unsigned k;

  b = bb;
  k = bk;
  w = outcnt;

  ml = mask_bits[bl];
  md = mask_bits[bd];
  for (;;)
  {
    {
      while (k < ((unsigned)bl))
      {
        b |= ((ulg)(uch)(inptr < insize ? inbuf[inptr++] : (outcnt = w, fill_inbuf(0)))) << k;
        k += 8;
      }
    }
    if ((e = (t = tl + ((unsigned)b & ml))->e) > 16)
      do
      {
        if (e == 99)
          return 1;
        {
          b >>= (t->b);
          k -= (t->b);
        }
        e -= 16;
        {
          while (k < (e))
          {
            b |= ((ulg)(uch)(inptr < insize ? inbuf[inptr++] : (outcnt = w, fill_inbuf(0)))) << k;
            k += 8;
          }
        }
      } while ((e = (t = t->v.t + ((unsigned)b & mask_bits[e]))->e) > 16);
    {
      b >>= (t->b);
      k -= (t->b);
    }
    if (e == 16)
    {
      window[w++] = (uch)t->v.n;
      ;
      if (w == 0x8000)
      {
        (outcnt = (w), flush_window());
        w = 0;
      }
    }
    else
    {

      if (e == 15)
        break;

      {
        while (k < (e))
        {
          b |= ((ulg)(uch)(inptr < insize ? inbuf[inptr++] : (outcnt = w, fill_inbuf(0)))) << k;
          k += 8;
        }
      }
      n = t->v.n + ((unsigned)b & mask_bits[e]);
      {
        b >>= (e);
        k -= (e);
      };

      {
        while (k < ((unsigned)bd))
        {
          b |= ((ulg)(uch)(inptr < insize ? inbuf[inptr++] : (outcnt = w, fill_inbuf(0)))) << k;
          k += 8;
        }
      }
      if ((e = (t = td + ((unsigned)b & md))->e) > 16)
        do
        {
          if (e == 99)
            return 1;
          {
            b >>= (t->b);
            k -= (t->b);
          }
          e -= 16;
          {
            while (k < (e))
            {
              b |= ((ulg)(uch)(inptr < insize ? inbuf[inptr++] : (outcnt = w, fill_inbuf(0)))) << k;
              k += 8;
            }
          }
        } while ((e = (t = t->v.t + ((unsigned)b & mask_bits[e]))->e) > 16);
      {
        b >>= (t->b);
        k -= (t->b);
      }
      {
        while (k < (e))
        {
          b |= ((ulg)(uch)(inptr < insize ? inbuf[inptr++] : (outcnt = w, fill_inbuf(0)))) << k;
          k += 8;
        }
      }
      d = w - t->v.n - ((unsigned)b & mask_bits[e]);
      {
        b >>= (e);
        k -= (e);
      };

      do
      {
        n -= (e = (e = 0x8000 - ((d &= 0x8000 - 1) > w ? d : w)) > n ? n : e);

        if (w - d >= e)
        {
          memcpy(window + w, window + d, e);
          w += e;
          d += e;
        }
        else

          do
          {
            window[w++] = window[d++];
            ;
          } while (--e);
        if (w == 0x8000)
        {
          (outcnt = (w), flush_window());
          w = 0;
        }
      } while (n);
    }
  }

  outcnt = w;
  bb = b;
  bk = k;

  return 0;
}

int inflate_stored()

{
  unsigned n;
  unsigned w;
  register ulg b;
  register unsigned k;

  b = bb;
  k = bk;
  w = outcnt;

  n = k & 7;
  {
    b >>= (n);
    k -= (n);
  };

  {
    while (k < (16))
    {
      b |= ((ulg)(uch)(inptr < insize ? inbuf[inptr++] : (outcnt = w, fill_inbuf(0)))) << k;
      k += 8;
    }
  }
  n = ((unsigned)b & 0xffff);
  {
    b >>= (16);
    k -= (16);
  }
  {
    while (k < (16))
    {
      b |= ((ulg)(uch)(inptr < insize ? inbuf[inptr++] : (outcnt = w, fill_inbuf(0)))) << k;
      k += 8;
    }
  }
  if (n != (unsigned)((~b) & 0xffff))
    return 1;
  {
    b >>= (16);
    k -= (16);
  }

  while (n--)
  {
    {
      while (k < (8))
      {
        b |= ((ulg)(uch)(inptr < insize ? inbuf[inptr++] : (outcnt = w, fill_inbuf(0)))) << k;
        k += 8;
      }
    }
    window[w++] = (uch)b;
    if (w == 0x8000)
    {
      (outcnt = (w), flush_window());
      w = 0;
    }
    {
      b >>= (8);
      k -= (8);
    }
  }

  outcnt = w;
  bb = b;
  bk = k;
  return 0;
}

int inflate_fixed()

{
  int i;
  struct huft *tl;
  struct huft *td;
  int bl;
  int bd;
  unsigned l[288];

  for (i = 0; i < 144; i++)
    l[i] = 8;
  for (; i < 256; i++)
    l[i] = 9;
  for (; i < 280; i++)
    l[i] = 7;
  for (; i < 288; i++)
    l[i] = 8;
  bl = 7;
  if ((i = huft_build(l, 288, 257, cplens, cplext, &tl, &bl)) != 0)
    return i;

  for (i = 0; i < 30; i++)
    l[i] = 5;
  bd = 5;
  if ((i = huft_build(l, 30, 0, cpdist, cpdext, &td, &bd)) > 1)
  {
    huft_free(tl);
    return i;
  }

  if (inflate_codes(tl, td, bl, bd))
    return 1;

  huft_free(tl);
  huft_free(td);
  return 0;
}

int inflate_dynamic()

{
  int i;
  unsigned j;
  unsigned l;
  unsigned m;
  unsigned n;
  unsigned w;
  struct huft *tl;
  struct huft *td;
  int bl;
  int bd;
  unsigned nb;
  unsigned nl;
  unsigned nd;

  unsigned ll[286 + 30];

  register ulg b;
  register unsigned k;

  b = bb;
  k = bk;
  w = outcnt;

  {
    while (k < (5))
    {
      b |= ((ulg)(uch)(inptr < insize ? inbuf[inptr++] : (outcnt = w, fill_inbuf(0)))) << k;
      k += 8;
    }
  }
  nl = 257 + ((unsigned)b & 0x1f);
  {
    b >>= (5);
    k -= (5);
  }
  {
    while (k < (5))
    {
      b |= ((ulg)(uch)(inptr < insize ? inbuf[inptr++] : (outcnt = w, fill_inbuf(0)))) << k;
      k += 8;
    }
  }
  nd = 1 + ((unsigned)b & 0x1f);
  {
    b >>= (5);
    k -= (5);
  }
  {
    while (k < (4))
    {
      b |= ((ulg)(uch)(inptr < insize ? inbuf[inptr++] : (outcnt = w, fill_inbuf(0)))) << k;
      k += 8;
    }
  }
  nb = 4 + ((unsigned)b & 0xf);
  {
    b >>= (4);
    k -= (4);
  }

  if (nl > 286 || nd > 30)

    return 1;

  for (j = 0; j < nb; j++)
  {
    {
      while (k < (3))
      {
        b |= ((ulg)(uch)(inptr < insize ? inbuf[inptr++] : (outcnt = w, fill_inbuf(0)))) << k;
        k += 8;
      }
    }
    ll[border[j]] = (unsigned)b & 7;
    {
      b >>= (3);
      k -= (3);
    }
  }
  for (; j < 19; j++)
    ll[border[j]] = 0;

  bl = 7;
  if ((i = huft_build(ll, 19, 19,
# 5429 "gzip.c" 3 4
                      ((void *)0)
# 5429 "gzip.c"
                          ,
# 5429 "gzip.c" 3 4
                      ((void *)0)
# 5429 "gzip.c"
                          ,
                      &tl, &bl)) != 0)
  {
    if (i == 1)
      huft_free(tl);
    return i;
  }

  if (tl ==
# 5436 "gzip.c" 3 4
      ((void *)0)
# 5436 "gzip.c"
  )
    return 2;

  n = nl + nd;
  m = mask_bits[bl];
  i = l = 0;
  while ((unsigned)i < n)
  {
    {
      while (k < ((unsigned)bl))
      {
        b |= ((ulg)(uch)(inptr < insize ? inbuf[inptr++] : (outcnt = w, fill_inbuf(0)))) << k;
        k += 8;
      }
    }
    j = (td = tl + ((unsigned)b & m))->b;
    {
      b >>= (j);
      k -= (j);
    }
    j = td->v.n;
    if (j < 16)
      ll[i++] = l = j;
    else if (j == 16)
    {
      {
        while (k < (2))
        {
          b |= ((ulg)(uch)(inptr < insize ? inbuf[inptr++] : (outcnt = w, fill_inbuf(0)))) << k;
          k += 8;
        }
      }
      j = 3 + ((unsigned)b & 3);
      {
        b >>= (2);
        k -= (2);
      }
      if ((unsigned)i + j > n)
        return 1;
      while (j--)
        ll[i++] = l;
    }
    else if (j == 17)
    {
      {
        while (k < (3))
        {
          b |= ((ulg)(uch)(inptr < insize ? inbuf[inptr++] : (outcnt = w, fill_inbuf(0)))) << k;
          k += 8;
        }
      }
      j = 3 + ((unsigned)b & 7);
      {
        b >>= (3);
        k -= (3);
      }
      if ((unsigned)i + j > n)
        return 1;
      while (j--)
        ll[i++] = 0;
      l = 0;
    }
    else
    {
      {
        while (k < (7))
        {
          b |= ((ulg)(uch)(inptr < insize ? inbuf[inptr++] : (outcnt = w, fill_inbuf(0)))) << k;
          k += 8;
        }
      }
      j = 11 + ((unsigned)b & 0x7f);
      {
        b >>= (7);
        k -= (7);
      }
      if ((unsigned)i + j > n)
        return 1;
      while (j--)
        ll[i++] = 0;
      l = 0;
    }
  }

  huft_free(tl);

  bb = b;
  bk = k;

  bl = lbits;
  if ((i = huft_build(ll, nl, 257, cplens, cplext, &tl, &bl)) != 0)
  {
    if (i == 1)
    {
      fprintf(
# 5500 "gzip.c" 3 4
          stderr
# 5500 "gzip.c"
          ,
          " incomplete literal tree\n");
      huft_free(tl);
    }
    return i;
  }
  bd = dbits;
  if ((i = huft_build(ll + nl, nd, 0, cpdist, cpdext, &td, &bd)) != 0)
  {
    if (i == 1)
    {
      fprintf(
# 5509 "gzip.c" 3 4
          stderr
# 5509 "gzip.c"
          ,
          " incomplete distance tree\n");

      huft_free(td);
    }
    huft_free(tl);
    return i;
  }

  if (inflate_codes(tl, td, bl, bd))
    return 1;

  huft_free(tl);
  huft_free(td);
  return 0;
}

int inflate_block(int *e)
{
  unsigned t;
  unsigned w;
  register ulg b;
  register unsigned k;

  b = bb;
  k = bk;
  w = outcnt;

  {
    while (k < (1))
    {
      b |= ((ulg)(uch)(inptr < insize ? inbuf[inptr++] : (outcnt = w, fill_inbuf(0)))) << k;
      k += 8;
    }
  }
  *e = (int)b & 1;
  {
    b >>= (1);
    k -= (1);
  }

  {
    while (k < (2))
    {
      b |= ((ulg)(uch)(inptr < insize ? inbuf[inptr++] : (outcnt = w, fill_inbuf(0)))) << k;
      k += 8;
    }
  }
  t = (unsigned)b & 3;
  {
    b >>= (2);
    k -= (2);
  }

  bb = b;
  bk = k;

  if (t == 2)
    return inflate_dynamic();
  if (t == 0)
    return inflate_stored();
  if (t == 1)
    return inflate_fixed();

  return 2;
}

int inflate()

{
  int e;
  int r;
  unsigned h;

  outcnt = 0;
  bk = 0;
  bb = 0;

  h = 0;
  do
  {
    hufts = 0;
    if ((r = inflate_block(&e)) != 0)
      return r;
    if (hufts > h)
      h = hufts;
  } while (!e);

  while (bk >= 8)
  {
    bk -= 8;
    inptr--;
  }

  (outcnt = (outcnt), flush_window());

  return 0;
}
# 5633 "gzip.c"
static int msg_done = 0;

int lzw(int in, int out)
{
  if (msg_done)
    return 1;
  msg_done = 1;
  fprintf(
# 5641 "gzip.c" 3 4
      stderr
# 5641 "gzip.c"
      ,
      "output in compress .Z format not supported\n");
  if (in != out)
  {
    exit_code = 1;
  }
  return 1;
}
# 5736 "gzip.c"
static int extra_lbits[29] = {0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 0};

static int extra_dbits[30] = {0, 0, 0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 10, 10, 11, 11, 12, 12, 13, 13};

static int extra_blbits[19] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 3, 7};
# 5802 "gzip.c"
typedef struct ct_data
{
  union
  {
    ush freq;
    ush code;
  } fc;
  union
  {
    ush dad;
    ush len;
  } dl;
} ct_data;
# 5821 "gzip.c"
static ct_data dyn_ltree[(2 * (256 + 1 + 29) + 1)];
static ct_data dyn_dtree[2 * 30 + 1];

static ct_data static_ltree[(256 + 1 + 29) + 2];

static ct_data static_dtree[30];

static ct_data bl_tree[2 * 19 + 1];

typedef struct tree_desc
{
  ct_data *dyn_tree;
  ct_data *static_tree;
  int *extra_bits;
  int extra_base;
  int elems;
  int max_length;
  int max_code;
} tree_desc;

static tree_desc l_desc =
    {dyn_ltree, static_ltree, extra_lbits, 256 + 1, (256 + 1 + 29), 15, 0};

static tree_desc d_desc =
    {dyn_dtree, static_dtree, extra_dbits, 0, 30, 15, 0};

static tree_desc bl_desc =
    {bl_tree, (ct_data *)0, extra_blbits, 0, 19, 7, 0};

static ush bl_count[15 + 1];

static uch bl_order[19] = {16, 17, 18, 0, 8, 7, 9, 6, 10, 5, 11, 4, 12, 3, 13, 2, 14, 1, 15};

static int heap[2 * (256 + 1 + 29) + 1];
static int heap_len;
static int heap_max;

static uch depth[2 * (256 + 1 + 29) + 1];

static uch length_code[258 - 3 + 1];

static uch dist_code[512];

static int base_length[29];

static int base_dist[30];

static uch flag_buf[(0x8000 / 8)];

static unsigned last_lit;
static unsigned last_dist;
static unsigned last_flags;
static uch flags;
static uch flag_bit;

static ulg opt_len;
static ulg static_len;

static off_t compressed_len;

static off_t input_len;

ush *file_type;
int *file_method;

extern long block_start;
extern unsigned strstart;

static void init_block(void);
static void pqdownheap(ct_data *tree, int k);
static void gen_bitlen(tree_desc *desc);
static void gen_codes(ct_data *tree, int max_code);
static void build_tree_1(tree_desc *desc);
static void scan_tree(ct_data *tree, int max_code);
static void send_tree(ct_data *tree, int max_code);
static int build_bl_tree(void);
static void send_all_trees(int lcodes, int dcodes, int blcodes);
static void compress_block(ct_data *ltree, ct_data *dtree);
static void set_file_type(void);
# 5973 "gzip.c"
void ct_init(ush *attr,
             int *methodp)
{
  int n;
  int bits;
  int length;
  int code;
  int dist;

  file_type = attr;
  file_method = methodp;
  compressed_len = input_len = 0L;

  if (static_dtree[0].dl.len != 0)
    return;

  length = 0;
  for (code = 0; code < 29 - 1; code++)
  {
    base_length[code] = length;
    for (n = 0; n < (1 << extra_lbits[code]); n++)
    {
      length_code[length++] = (uch)code;
    }
  };

  length_code[length - 1] = (uch)code;

  dist = 0;
  for (code = 0; code < 16; code++)
  {
    base_dist[code] = dist;
    for (n = 0; n < (1 << extra_dbits[code]); n++)
    {
      dist_code[dist++] = (uch)code;
    }
  };
  dist >>= 7;
  for (; code < 30; code++)
  {
    base_dist[code] = dist << 7;
    for (n = 0; n < (1 << (extra_dbits[code] - 7)); n++)
    {
      dist_code[256 + dist++] = (uch)code;
    }
  };

  for (bits = 0; bits <= 15; bits++)
    bl_count[bits] = 0;
  n = 0;
  while (n <= 143)
    static_ltree[n++].dl.len = 8, bl_count[8]++;
  while (n <= 255)
    static_ltree[n++].dl.len = 9, bl_count[9]++;
  while (n <= 279)
    static_ltree[n++].dl.len = 7, bl_count[7]++;
  while (n <= 287)
    static_ltree[n++].dl.len = 8, bl_count[8]++;

  gen_codes((ct_data *)static_ltree, (256 + 1 + 29) + 1);

  for (n = 0; n < 30; n++)
  {
    static_dtree[n].dl.len = 5;
    static_dtree[n].fc.code = bi_reverse(n, 5);
  }

  init_block();
}

static void init_block()
{
  int n;

  for (n = 0; n < (256 + 1 + 29); n++)
    dyn_ltree[n].fc.freq = 0;
  for (n = 0; n < 30; n++)
    dyn_dtree[n].fc.freq = 0;
  for (n = 0; n < 19; n++)
    bl_tree[n].fc.freq = 0;

  dyn_ltree[256].fc.freq = 1;
  opt_len = static_len = 0L;
  last_lit = last_dist = last_flags = 0;
  flags = 0;
  flag_bit = 1;
}
# 6092 "gzip.c"
static void pqdownheap(ct_data *tree,
                       int k)

{
  int v = heap[k];
  int j = k << 1;
  while (j <= heap_len)
  {

    if (j < heap_len && (tree[heap[j + 1]].fc.freq < tree[heap[j]].fc.freq || (tree[heap[j + 1]].fc.freq == tree[heap[j]].fc.freq && depth[heap[j + 1]] <= depth[heap[j]])))
      j++;

    if ((tree[v].fc.freq < tree[heap[j]].fc.freq || (tree[v].fc.freq == tree[heap[j]].fc.freq && depth[v] <= depth[heap[j]])))
      break;

    heap[k] = heap[j];
    k = j;

    j <<= 1;
  }
  heap[k] = v;
}
# 6124 "gzip.c"
static void gen_bitlen(tree_desc *desc)
{
  ct_data *tree = desc->dyn_tree;
  int *extra = desc->extra_bits;
  int base = desc->extra_base;
  int max_code = desc->max_code;
  int max_length = desc->max_length;
  ct_data *stree = desc->static_tree;
  int h;
  int n, m;
  int bits;
  int xbits;
  ush f;
  int overflow = 0;

  for (bits = 0; bits <= 15; bits++)
    bl_count[bits] = 0;

  tree[heap[heap_max]].dl.len = 0;

  for (h = heap_max + 1; h < (2 * (256 + 1 + 29) + 1); h++)
  {
    n = heap[h];
    bits = tree[tree[n].dl.dad].dl.len + 1;
    if (bits > max_length)
      bits = max_length, overflow++;
    tree[n].dl.len = (ush)bits;

    if (n > max_code)
      continue;

    bl_count[bits]++;
    xbits = 0;
    if (n >= base)
      xbits = extra[n - base];
    f = tree[n].fc.freq;
    opt_len += (ulg)f * (bits + xbits);
    if (stree)
      static_len += (ulg)f * (stree[n].dl.len + xbits);
  }
  if (overflow == 0)
    return;

  ;

  do
  {
    bits = max_length - 1;
    while (bl_count[bits] == 0)
      bits--;
    bl_count[bits]--;
    bl_count[bits + 1] += 2;
    bl_count[max_length]--;

    overflow -= 2;
  } while (overflow > 0);

  for (bits = max_length; bits != 0; bits--)
  {
    n = bl_count[bits];
    while (n != 0)
    {
      m = heap[--h];
      if (m > max_code)
        continue;
      if (tree[m].dl.len != (unsigned)bits)
      {
        ;
        opt_len += ((long)bits - (long)tree[m].dl.len) * (long)tree[m].fc.freq;
        tree[m].dl.len = (ush)bits;
      }
      n--;
    }
  }
}
# 6209 "gzip.c"
static void gen_codes(ct_data *tree, int max_code)
{
  ush next_code[15 + 1];
  ush code = 0;
  int bits;
  int n;

  for (bits = 1; bits <= 15; bits++)
  {
    next_code[bits] = code = (code + bl_count[bits - 1]) << 1;
  }

  ;
  ;

  for (n = 0; n <= max_code; n++)
  {
    int len = tree[n].dl.len;
    if (len == 0)
      continue;

    tree[n].fc.code = bi_reverse(next_code[len]++, len);

    ;
  }
}
# 6250 "gzip.c"
static void build_tree_1(tree_desc *desc)

{
  ct_data *tree = desc->dyn_tree;
  ct_data *stree = desc->static_tree;
  int elems = desc->elems;
  int n, m;
  int max_code = -1;
  int node = elems;

  heap_len = 0, heap_max = (2 * (256 + 1 + 29) + 1);

  for (n = 0; n < elems; n++)
  {
    if (tree[n].fc.freq != 0)
    {
      heap[++heap_len] = max_code = n;
      depth[n] = 0;
    }
    else
    {
      tree[n].dl.len = 0;
    }
  }

  while (heap_len < 2)
  {
    int new = heap[++heap_len] = (max_code < 2 ? ++max_code : 0);
    tree[new].fc.freq = 1;
    depth[new] = 0;
    opt_len--;
    if (stree)
      static_len -= stree[new].dl.len;
  }
  desc->max_code = max_code;

  for (n = heap_len / 2; n >= 1; n--)
    pqdownheap(tree, n);

  do
  {
    {
      n = heap[1];
      heap[1] = heap[heap_len--];
      pqdownheap(tree, 1);
    };
    m = heap[1];

    heap[--heap_max] = n;
    heap[--heap_max] = m;

    tree[node].fc.freq = tree[n].fc.freq + tree[m].fc.freq;
    depth[node] = (uch)((depth[n] >= depth[m] ? depth[n] : depth[m]) + 1);
    tree[n].dl.dad = tree[m].dl.dad = (ush)node;

    heap[1] = node++;
    pqdownheap(tree, 1);

  } while (heap_len >= 2);

  heap[--heap_max] = heap[1];

  gen_bitlen((tree_desc *)desc);

  gen_codes((ct_data *)tree, max_code);
}

static void scan_tree(ct_data *tree, int max_code)
{
  int n;
  int prevlen = -1;
  int curlen;
  int nextlen = tree[0].dl.len;
  int count = 0;
  int max_count = 7;
  int min_count = 4;

  if (nextlen == 0)
    max_count = 138, min_count = 3;
  tree[max_code + 1].dl.len = (ush)0xffff;

  for (n = 0; n <= max_code; n++)
  {
    curlen = nextlen;
    nextlen = tree[n + 1].dl.len;
    if (++count < max_count && curlen == nextlen)
    {
      continue;
    }
    else if (count < min_count)
    {
      bl_tree[curlen].fc.freq += count;
    }
    else if (curlen != 0)
    {
      if (curlen != prevlen)
        bl_tree[curlen].fc.freq++;
      bl_tree[16].fc.freq++;
    }
    else if (count <= 10)
    {
      bl_tree[17].fc.freq++;
    }
    else
    {
      bl_tree[18].fc.freq++;
    }
    count = 0;
    prevlen = curlen;
    if (nextlen == 0)
    {
      max_count = 138, min_count = 3;
    }
    else if (curlen == nextlen)
    {
      max_count = 6, min_count = 3;
    }
    else
    {
      max_count = 7, min_count = 4;
    }
  }
}

static void send_tree(ct_data *tree, int max_code)
{
  int n;
  int prevlen = -1;
  int curlen;
  int nextlen = tree[0].dl.len;
  int count = 0;
  int max_count = 7;
  int min_count = 4;

  if (nextlen == 0)
    max_count = 138, min_count = 3;

  for (n = 0; n <= max_code; n++)
  {
    curlen = nextlen;
    nextlen = tree[n + 1].dl.len;
    if (++count < max_count && curlen == nextlen)
    {
      continue;
    }
    else if (count < min_count)
    {
      do
      {
        send_bits(bl_tree[curlen].fc.code, bl_tree[curlen].dl.len);
      } while (--count != 0);
    }
    else if (curlen != 0)
    {
      if (curlen != prevlen)
      {
        send_bits(bl_tree[curlen].fc.code, bl_tree[curlen].dl.len);
        count--;
      };
      send_bits(bl_tree[16].fc.code, bl_tree[16].dl.len);
      send_bits(count - 3, 2);
    }
    else if (count <= 10)
    {
      send_bits(bl_tree[17].fc.code, bl_tree[17].dl.len);
      send_bits(count - 3, 3);
    }
    else
    {
      send_bits(bl_tree[18].fc.code, bl_tree[18].dl.len);
      send_bits(count - 11, 7);
    }
    count = 0;
    prevlen = curlen;
    if (nextlen == 0)
    {
      max_count = 138, min_count = 3;
    }
    else if (curlen == nextlen)
    {
      max_count = 6, min_count = 3;
    }
    else
    {
      max_count = 7, min_count = 4;
    }
  }
}

static int build_bl_tree()
{
  int max_blindex;

  scan_tree((ct_data *)dyn_ltree, l_desc.max_code);
  scan_tree((ct_data *)dyn_dtree, d_desc.max_code);

  build_tree_1((tree_desc *)(&bl_desc));
# 6449 "gzip.c"
  for (max_blindex = 19 - 1; max_blindex >= 3; max_blindex--)
  {
    if (bl_tree[bl_order[max_blindex]].dl.len != 0)
      break;
  }

  opt_len += 3 * (max_blindex + 1) + 5 + 5 + 4;
  ;

  return max_blindex;
}

static void send_all_trees(int lcodes, int dcodes, int blcodes)
{
  int rank;

  send_bits(lcodes - 257, 5);
  send_bits(dcodes - 1, 5);
  send_bits(blcodes - 4, 4);
  for (rank = 0; rank < blcodes; rank++)
  {
    ;
    send_bits(bl_tree[bl_order[rank]].dl.len, 3);
  }

  send_tree((ct_data *)dyn_ltree, lcodes - 1);

  send_tree((ct_data *)dyn_dtree, dcodes - 1);
}

off_t flush_block(char *buf,
                  ulg stored_len,
                  int pad,
                  int eof)
{
  ulg opt_lenb, static_lenb;
  int max_blindex;

  flag_buf[last_flags] = flags;

  if (*file_type == (ush)0xffff)
    set_file_type();

  build_tree_1((tree_desc *)(&l_desc));
  ;

  build_tree_1((tree_desc *)(&d_desc));
  ;

  max_blindex = build_bl_tree();

  opt_lenb = (opt_len + 3 + 7) >> 3;
  static_lenb = (static_len + 3 + 7) >> 3;
  input_len += stored_len;

  ;

  if (static_lenb <= opt_lenb)
    opt_lenb = static_lenb;
# 6538 "gzip.c"
  if (stored_len <= opt_lenb && eof && compressed_len == 0L && 0)
  {

    if (buf == (char *)0)
      error("block vanished");

    copy_block(buf, (unsigned)stored_len, 0);
    compressed_len = stored_len << 3;
    *file_method = 0;
  }
  else if (stored_len + 4 <= opt_lenb && buf != (char *)0)
  {
# 6559 "gzip.c"
    send_bits((0 << 1) + eof, 3);
    compressed_len = (compressed_len + 3 + 7) & ~7L;
    compressed_len += (stored_len + 4) << 3;

    copy_block(buf, (unsigned)stored_len, 1);
  }
  else if (static_lenb == opt_lenb)
  {

    send_bits((1 << 1) + eof, 3);
    compress_block((ct_data *)static_ltree, (ct_data *)static_dtree);
    compressed_len += 3 + static_len;
  }
  else
  {
    send_bits((2 << 1) + eof, 3);
    send_all_trees(l_desc.max_code + 1, d_desc.max_code + 1, max_blindex + 1);
    compress_block((ct_data *)dyn_ltree, (ct_data *)dyn_dtree);
    compressed_len += 3 + opt_len;
  };
  init_block();

  if (eof)
  {
    bi_windup();
    compressed_len += 7;
  }
  else if (pad && (compressed_len % 8) != 0)
  {
    send_bits((0 << 1) + eof, 3);
    compressed_len = (compressed_len + 3 + 7) & ~7L;
    copy_block(buf, 0, 1);
  }

  return compressed_len >> 3;
}

int ct_tally(int dist, int lc)
{
  inbuf[last_lit++] = (uch)lc;
  if (dist == 0)
  {

    dyn_ltree[lc].fc.freq++;
  }
  else
  {

    dist--;

    ;

    dyn_ltree[length_code[lc] + 256 + 1].fc.freq++;
    dyn_dtree[((dist) < 256 ? dist_code[dist] : dist_code[256 + ((dist) >> 7)])].fc.freq++;

    d_buf[last_dist++] = (ush)dist;
    flags |= flag_bit;
  }
  flag_bit <<= 1;

  if ((last_lit & 7) == 0)
  {
    flag_buf[last_flags++] = flags;
    flags = 0, flag_bit = 1;
  }

  if (level > 2 && (last_lit & 0xfff) == 0)
  {

    ulg out_length = (ulg)last_lit * 8L;
    ulg in_length = (ulg)strstart - block_start;
    int dcode;
    for (dcode = 0; dcode < 30; dcode++)
    {
      out_length += (ulg)dyn_dtree[dcode].fc.freq * (5L + extra_dbits[dcode]);
    }
    out_length >>= 3;

    ;
    if (last_dist < last_lit / 2 && out_length < in_length / 2)
      return 1;
  }
  return (last_lit == 0x8000 - 1 || last_dist == 0x8000);
}

static void compress_block(ct_data *ltree, ct_data *dtree)
{
  unsigned dist;
  int lc;
  unsigned lx = 0;
  unsigned dx = 0;
  unsigned fx = 0;
  uch flag = 0;
  unsigned code;
  int extra;

  if (last_lit != 0)
    do
    {
      if ((lx & 7) == 0)
        flag = flag_buf[fx++];
      lc = inbuf[lx++];
      if ((flag & 1) == 0)
      {
        send_bits(ltree[lc].fc.code, ltree[lc].dl.len);
      }
      else
      {

        code = length_code[lc];
        send_bits(ltree[code + 256 + 1].fc.code, ltree[code + 256 + 1].dl.len);
        extra = extra_lbits[code];
        if (extra != 0)
        {
          lc -= base_length[code];
          send_bits(lc, extra);
        }
        dist = d_buf[dx++];

        code = ((dist) < 256 ? dist_code[dist] : dist_code[256 + ((dist) >> 7)]);
        ;

        send_bits(dtree[code].fc.code, dtree[code].dl.len);
        extra = extra_dbits[code];
        if (extra != 0)
        {
          dist -= base_dist[code];
          send_bits(dist, extra);
        }
      }
      flag >>= 1;
    } while (lx < last_lit);

  send_bits(ltree[256].fc.code, ltree[256].dl.len);
}

static void set_file_type()
{
  int n = 0;
  unsigned ascii_freq = 0;
  unsigned bin_freq = 0;
  while (n < 7)
    bin_freq += dyn_ltree[n++].fc.freq;
  while (n < 128)
    ascii_freq += dyn_ltree[n++].fc.freq;
  while (n < 256)
    bin_freq += dyn_ltree[n++].fc.freq;
  *file_type = bin_freq > (ascii_freq >> 2) ? 0 : 1;
  if (*file_type == 0 && 0)
  {
    warning("-l used on binary file");
  }
}
# 6728 "gzip.c"
static unsigned decode(unsigned count, uch buffer[]);
static void decode_start(void);

static void huf_decode_start(void);
static unsigned decode_c(void);
static unsigned decode_p(void);
static void read_pt_len(int nn, int nbit, int i_special);
static void read_c_len(void);

static void fillbuf(int n);
static unsigned getbits(int n);
static void init_getbits(void);

static void make_table(int nchar, uch bitlen[], int tablebits, ush table[]);
# 6801 "gzip.c"
static uch pt_len[(16 + 3)];
static unsigned blocksize;
static ush pt_table[256];
# 6815 "gzip.c"
static ush io_bitbuf;
static unsigned subbitbuf;
static int bitcount;

static void fillbuf(int n)
{
  io_bitbuf <<= n;
  while (n > bitcount)
  {
    io_bitbuf |= subbitbuf << (n -= bitcount);
    subbitbuf = (unsigned)(inptr < insize ? inbuf[inptr++] : fill_inbuf(1));
    if ((int)subbitbuf ==
# 6826 "gzip.c" 3 4
        (-1)
# 6826 "gzip.c"
    )
      subbitbuf = 0;
    bitcount = 8;
  }
  io_bitbuf |= subbitbuf >> (bitcount -= n);
}

static unsigned getbits(int n)
{
  unsigned x;

  x = io_bitbuf >> ((8 * 2 * sizeof(char)) - n);
  fillbuf(n);
  return x;
}

static void init_getbits()
{
  io_bitbuf = 0;
  subbitbuf = 0;
  bitcount = 0;
  fillbuf((8 * 2 * sizeof(char)));
}

static void make_table(int nchar,
                       uch bitlen[],
                       int tablebits,
                       ush table[])
{
  ush count[17], weight[17], start[18], *p;
  unsigned i, k, len, ch, jutbits, avail, nextcode, mask;

  for (i = 1; i <= 16; i++)
    count[i] = 0;
  for (i = 0; i < (unsigned)nchar; i++)
    count[bitlen[i]]++;

  start[1] = 0;
  for (i = 1; i <= 16; i++)
    start[i + 1] = start[i] + (count[i] << (16 - i));
  if ((start[17] & 0xffff) != 0)
    error("Bad table\n");

  jutbits = 16 - tablebits;
  for (i = 1; i <= (unsigned)tablebits; i++)
  {
    start[i] >>= jutbits;
    weight[i] = (unsigned)1 << (tablebits - i);
  }
  while (i <= 16)
  {
    weight[i] = (unsigned)1 << (16 - i);
    i++;
  }

  i = start[tablebits + 1] >> jutbits;
  if (i != 0)
  {
    k = 1 << tablebits;
    while (i != k)
      table[i++] = 0;
  }

  avail = nchar;
  mask = (unsigned)1 << (15 - tablebits);
  for (ch = 0; ch < (unsigned)nchar; ch++)
  {
    if ((len = bitlen[ch]) == 0)
      continue;
    nextcode = start[len] + weight[len];
    if (len <= (unsigned)tablebits)
    {
      for (i = start[len]; i < nextcode; i++)
        table[i] = ch;
    }
    else
    {
      k = start[len];
      p = &table[k >> jutbits];
      i = len - tablebits;
      while (i != 0)
      {
        if (*p == 0)
        {
          (prev + 0x8000)[avail] = prev[avail] = 0;
          *p = avail++;
        }
        if (k & mask)
          p = &(prev + 0x8000)[*p];
        else
          p = &prev[*p];
        k <<= 1;
        i--;
      }
      *p = ch;
    }
    start[len] = nextcode;
  }
}

static void read_pt_len(int nn,
                        int nbit,
                        int i_special)
{
  int i, c, n;
  unsigned mask;

  n = getbits(nbit);
  if (n == 0)
  {
    c = getbits(nbit);
    for (i = 0; i < nn; i++)
      pt_len[i] = 0;
    for (i = 0; i < 256; i++)
      pt_table[i] = c;
  }
  else
  {
    i = 0;
    while (i < n)
    {
      c = io_bitbuf >> ((8 * 2 * sizeof(char)) - 3);
      if (c == 7)
      {
        mask = (unsigned)1 << ((8 * 2 * sizeof(char)) - 1 - 3);
        while (mask & io_bitbuf)
        {
          mask >>= 1;
          c++;
        }
      }
      fillbuf((c < 7) ? 3 : c - 3);
      pt_len[i++] = c;
      if (i == i_special)
      {
        c = getbits(2);
        while (--c >= 0)
          pt_len[i++] = 0;
      }
    }
    while (i < nn)
      pt_len[i++] = 0;
    make_table(nn, pt_len, 8, pt_table);
  }
}

static void read_c_len()
{
  int i, c, n;
  unsigned mask;

  n = getbits(9);
  if (n == 0)
  {
    c = getbits(9);
    for (i = 0; i < (
# 6956 "gzip.c" 3 4
                        (0x7f * 2 + 1)
# 6956 "gzip.c"
                        + 256 + 2 - 3);
         i++)
      outbuf[i] = 0;
    for (i = 0; i < 4096; i++)
      d_buf[i] = c;
  }
  else
  {
    i = 0;
    while (i < n)
    {
      c = pt_table[io_bitbuf >> ((8 * 2 * sizeof(char)) - 8)];
      if (c >= (16 + 3))
      {
        mask = (unsigned)1 << ((8 * 2 * sizeof(char)) - 1 - 8);
        do
        {
          if (io_bitbuf & mask)
            c = (prev + 0x8000)[c];
          else
            c = prev[c];
          mask >>= 1;
        } while (c >= (16 + 3));
      }
      fillbuf((int)pt_len[c]);
      if (c <= 2)
      {
        if (c == 0)
          c = 1;
        else if (c == 1)
          c = getbits(4) + 3;
        else
          c = getbits(9) + 20;
        while (--c >= 0)
          outbuf[i++] = 0;
      }
      else
        outbuf[i++] = c - 2;
    }
    while (i < (
# 6978 "gzip.c" 3 4
                   (0x7f * 2 + 1)
# 6978 "gzip.c"
                   + 256 + 2 - 3))
      outbuf[i++] = 0;
    make_table((
# 6979 "gzip.c" 3 4
                   (0x7f * 2 + 1)
# 6979 "gzip.c"
                   + 256 + 2 - 3),
               outbuf, 12, d_buf);
  }
}

static unsigned decode_c()
{
  unsigned j, mask;

  if (blocksize == 0)
  {
    blocksize = getbits(16);
    if (blocksize == 0)
    {
      return (
# 6990 "gzip.c" 3 4
          (0x7f * 2 + 1)
# 6990 "gzip.c"
          + 256 + 2 - 3);
    }
    read_pt_len((16 + 3), 5, 3);
    read_c_len();
    read_pt_len((13 + 1), 4, -1);
  }
  blocksize--;
  j = d_buf[io_bitbuf >> ((8 * 2 * sizeof(char)) - 12)];
  if (j >= (
# 6998 "gzip.c" 3 4
               (0x7f * 2 + 1)
# 6998 "gzip.c"
               + 256 + 2 - 3))
  {
    mask = (unsigned)1 << ((8 * 2 * sizeof(char)) - 1 - 12);
    do
    {
      if (io_bitbuf & mask)
        j = (prev + 0x8000)[j];
      else
        j = prev[j];
      mask >>= 1;
    } while (j >= (
# 7004 "gzip.c" 3 4
                      (0x7f * 2 + 1)
# 7004 "gzip.c"
                      + 256 + 2 - 3));
  }
  fillbuf((int)outbuf[j]);
  return j;
}

static unsigned decode_p()
{
  unsigned j, mask;

  j = pt_table[io_bitbuf >> ((8 * 2 * sizeof(char)) - 8)];
  if (j >= (13 + 1))
  {
    mask = (unsigned)1 << ((8 * 2 * sizeof(char)) - 1 - 8);
    do
    {
      if (io_bitbuf & mask)
        j = (prev + 0x8000)[j];
      else
        j = prev[j];
      mask >>= 1;
    } while (j >= (13 + 1));
  }
  fillbuf((int)pt_len[j]);
  if (j != 0)
    j = ((unsigned)1 << (j - 1)) + getbits((int)(j - 1));
  return j;
}

static void huf_decode_start()
{
  init_getbits();
  blocksize = 0;
}

static int j;
static int done;

static void decode_start()
{
  huf_decode_start();
  j = 0;
  done = 0;
}

static unsigned decode(unsigned count, uch buffer[])
# 7060 "gzip.c"
{
  static unsigned i;
  unsigned r, c;

  r = 0;
  while (--j >= 0)
  {
    buffer[r] = buffer[i];
    i = (i + 1) & (((unsigned)1 << 13) - 1);
    if (++r == count)
      return r;
  }
  for (;;)
  {
    c = decode_c();
    if (c == (
# 7072 "gzip.c" 3 4
                 (0x7f * 2 + 1)
# 7072 "gzip.c"
                 + 256 + 2 - 3))
    {
      done = 1;
      return r;
    }
    if (c <=
# 7076 "gzip.c" 3 4
        (0x7f * 2 + 1)
# 7076 "gzip.c"
    )
    {
      buffer[r] = c;
      if (++r == count)
        return r;
    }
    else
    {
      j = c - (
# 7080 "gzip.c" 3 4
                  (0x7f * 2 + 1)
# 7080 "gzip.c"
                  + 1 - 3);
      i = (r - decode_p() - 1) & (((unsigned)1 << 13) - 1);
      while (--j >= 0)
      {
        buffer[r] = buffer[i];
        i = (i + 1) & (((unsigned)1 << 13) - 1);
        if (++r == count)
          return r;
      }
    }
  }
}

int unlzh(int in, int out)
{
  unsigned n;
  ifd = in;
  ofd = out;

  decode_start();
  while (!done)
  {
    n = decode((unsigned)((unsigned)1 << 13), window);
    if (!test && n > 0)
    {
      write_buf(out, (char *)window, n);
    }
  }
  return 0;
}
# 7125 "gzip.c"
typedef unsigned char char_type;
typedef long code_int;
typedef unsigned long count_int;
typedef unsigned short count_short;
typedef unsigned long cmp_code_int;
# 7226 "gzip.c"
union bytes
{
  long word;
  struct
  {
# 7242 "gzip.c"
    int dummy;

  } bytes;
};
# 7278 "gzip.c"
int block_mode = 0x80;
# 7289 "gzip.c"
int unlzw(int in, int out)
{
  register char_type *stackp;
  code_int code;
  int finchar;
  code_int oldcode;
  code_int incode;
  long inbits;
  long posbits;
  int outpos;

  unsigned bitmask;
  code_int free_ent;
  code_int maxcode;
  code_int maxmaxcode;
  int n_bits;
  int rsize;

  maxbits = (inptr < insize ? inbuf[inptr++] : fill_inbuf(0));
  block_mode = maxbits & 0x80;
  if ((maxbits & 0x60) != 0)
  {
    {
      if (!quiet)
        fprintf(
# 7315 "gzip.c" 3 4
            stderr
# 7315 "gzip.c"
            ,
            "\n%s: %s: warning, unknown flags 0x%x\n", progname, ifname, maxbits & 0x60);
      if (exit_code == 0)
        exit_code = 2;
    };
  }
  maxbits &= 0x1f;
  maxmaxcode = (1L << (maxbits));

  if (maxbits > 16)
  {
    fprintf(
# 7322 "gzip.c" 3 4
        stderr
# 7322 "gzip.c"
        ,
        "\n%s: %s: compressed with %d bits, can only handle %d bits\n",
        progname, ifname, maxbits, 16);
    exit_code = 1;
    return 1;
  }
  rsize = insize;
  maxcode = (1L << (n_bits = 9)) - 1;
  bitmask = (1 << n_bits) - 1;
  oldcode = -1;
  finchar = 0;
  outpos = 0;
  posbits = inptr << 3;

  free_ent = ((block_mode) ? (256 + 1) : 256);

  memset((voidp)(prev), 0, (256));
  ;

  for (code = 255; code >= 0; --code)
  {
    window[code] = (char_type)code;
  }
  do
  {
    register int i;
    int e;
    int o;

  resetbuf:
    e = insize - (o = (posbits >> 3));

    for (i = 0; i < e; ++i)
    {
      inbuf[i] = inbuf[i + o];
    }
    insize = e;
    posbits = 0;

    if (insize < 64)
    {
      if ((rsize = read(in, (char *)inbuf + insize, 0x8000)) == -1)
      {
        read_error();
      }
      insize += rsize;
      bytes_in += (off_t)rsize;
    }
    inbits = ((rsize != 0) ? ((long)insize - insize % n_bits) << 3 : ((long)insize << 3) - (n_bits - 1));

    while (inbits > posbits)
    {
      if (free_ent > maxcode)
      {
        posbits = ((posbits - 1) +
                   ((n_bits << 3) - (posbits - 1 + (n_bits << 3)) % (n_bits << 3)));
        ++n_bits;
        if (n_bits == maxbits)
        {
          maxcode = maxmaxcode;
        }
        else
        {
          maxcode = (1L << (n_bits)) - 1;
        }
        bitmask = (1 << n_bits) - 1;
        goto resetbuf;
      }
      {
        register char_type *p = &(inbuf)[(posbits) >> 3];
        (code) = ((((long)(p[0])) | ((long)(p[1]) << 8) | ((long)(p[2]) << 16)) >> ((posbits) & 0x7)) & (bitmask);
        (posbits) += (n_bits);
      };
      ;

      if (oldcode == -1)
      {
        if (code >= 256)
          error("corrupt input.");
        outbuf[outpos++] = (char_type)(finchar = (int)(oldcode = code));
        continue;
      }
      if (code == 256 && block_mode)
      {
        memset((voidp)(prev), 0, (256));
        ;
        free_ent = (256 + 1) - 1;
        posbits = ((posbits - 1) +
                   ((n_bits << 3) - (posbits - 1 + (n_bits << 3)) % (n_bits << 3)));
        maxcode = (1L << (n_bits = 9)) - 1;
        bitmask = (1 << n_bits) - 1;
        goto resetbuf;
      }
      incode = code;
      stackp = ((char_type *)(&d_buf[0x8000 - 1]));

      if (code >= free_ent)
      {
        if (code > free_ent)
        {
# 7414 "gzip.c"
          if (!test && outpos > 0)
          {
            write_buf(out, (char *)outbuf, outpos);
            bytes_out += (off_t)outpos;
          }
          error(to_stdout ? "corrupt input." : "corrupt input. Use zcat to recover some data.");
        }
        *--stackp = (char_type)finchar;
        code = oldcode;
      }

      while ((cmp_code_int)code >= (cmp_code_int)256)
      {

        *--stackp = window[code];
        code = prev[code];
      }
      *--stackp = (char_type)(finchar = window[code]);

      {
        register int i;

        if (outpos + (i = (((char_type *)(&d_buf[0x8000 - 1])) - stackp)) >= 16384)
        {
          do
          {
            if (i > 16384 - outpos)
              i = 16384 - outpos;

            if (i > 0)
            {
              memcpy(outbuf + outpos, stackp, i);
              outpos += i;
            }
            if (outpos >= 16384)
            {
              if (!test)
              {
                write_buf(out, (char *)outbuf, outpos);
                bytes_out += (off_t)outpos;
              }
              outpos = 0;
            }
            stackp += i;
          } while ((i = (((char_type *)(&d_buf[0x8000 - 1])) - stackp)) > 0);
        }
        else
        {
          memcpy(outbuf + outpos, stackp, i);
          outpos += i;
        }
      }

      if ((code = free_ent) < maxmaxcode)
      {

        prev[code] = (unsigned short)oldcode;
        window[code] = (char_type)finchar;
        free_ent = code + 1;
      }
      oldcode = incode;
    }
  } while (rsize != 0);

  if (!test && outpos > 0)
  {
    write_buf(out, (char *)outbuf, outpos);
    bytes_out += (off_t)outpos;
  }
  return 0;
}
# 7502 "gzip.c"
static ulg orig_len;
static int max_len;

static uch literal[256];

static int lit_base[25 + 1];

static int leaves[25 + 1];
static int parents[25 + 1];

static int peek_bits;
# 7534 "gzip.c"
static ulg bitbuf;

static int valid;
# 7558 "gzip.c"
static void read_tree(void);
static void build_tree(void);

static void read_tree()
{
  int len;
  int base;
  int n;

  orig_len = 0;
  for (n = 1; n <= 4; n++)
    orig_len = (orig_len << 8) | (ulg)(inptr < insize ? inbuf[inptr++] : fill_inbuf(0));

  max_len = (int)(inptr < insize ? inbuf[inptr++] : fill_inbuf(0));
  if (max_len > 25)
  {
    error("invalid compressed data -- Huffman code > 32 bits");
  }

  n = 0;
  for (len = 1; len <= max_len; len++)
  {
    leaves[len] = (int)(inptr < insize ? inbuf[inptr++] : fill_inbuf(0));
    n += leaves[len];
  }
  if (n > 256)
  {
    error("too many leaves in Huffman tree");
  }

  ;

  leaves[max_len]++;

  base = 0;
  for (len = 1; len <= max_len; len++)
  {

    lit_base[len] = base;

    for (n = leaves[len]; n > 0; n--)
    {
      literal[base++] = (uch)(inptr < insize ? inbuf[inptr++] : fill_inbuf(0));
    }
  }
  leaves[max_len]++;
}

static void build_tree()
{
  int nodes = 0;
  int len;
  uch *prefixp;

  for (len = max_len; len >= 1; len--)
  {

    nodes >>= 1;
    parents[len] = nodes;

    lit_base[len] -= nodes;

    nodes += leaves[len];
  }

  peek_bits = ((max_len) <= (12) ? (max_len) : (12));
  prefixp = &outbuf[1 << peek_bits];
  for (len = 1; len <= peek_bits; len++)
  {
    int prefixes = leaves[len] << (peek_bits - len);
    while (prefixes--)
      *--prefixp = (uch)len;
  }

  while (prefixp > outbuf)
    *--prefixp = 0;
}
# 7655 "gzip.c"
int unpack(int in, int out)
{
  int len;
  unsigned eob;
  register unsigned peek;
  unsigned peek_mask;

  ifd = in;
  ofd = out;

  read_tree();
  build_tree();
  (valid = 0, bitbuf = 0);
  peek_mask = (1 << peek_bits) - 1;

  eob = leaves[max_len] - 1;
  ;

  for (;;)
  {

    {
      while (valid < (peek_bits))
        bitbuf = (bitbuf << 8) | (ulg)(inptr < insize ? inbuf[inptr++] : fill_inbuf(0)), valid += 8;
      peek = (bitbuf >> (valid - (peek_bits))) & (peek_mask);
    };
    len = outbuf[peek];
    if (len > 0)
    {
      peek >>= peek_bits - len;
    }
    else
    {

      ulg mask = peek_mask;
      len = peek_bits;
      do
      {
        len++, mask = (mask << 1) + 1;
        {
          while (valid < (len))
            bitbuf = (bitbuf << 8) | (ulg)(inptr < insize ? inbuf[inptr++] : fill_inbuf(0)), valid += 8;
          peek = (bitbuf >> (valid - (len))) & (mask);
        };
      } while (peek < (unsigned)parents[len]);
    }

    if (peek == eob && len == max_len)
      break;
    {
      window[outcnt++] = (uch)(literal[peek + lit_base[len]]);
      if (outcnt == 0x8000)
        flush_window();
    };

    ;
    (valid -= (len));
  }

  flush_window();
  if (orig_len != (ulg)(bytes_out & 0xffffffff))
  {
    error("invalid compressed data--length error");
  }
  return 0;
}
# 7747 "gzip.c"
int decrypt;
char *key;
int pkzip = 0;
int ext_header = 0;

int check_zipfile(int in)
{
  uch *h = inbuf + inptr;

  ifd = in;

  inptr += 30 + ((ush)(uch)((h + 26)[0]) | ((ush)(uch)((h + 26)[1]) << 8)) + ((ush)(uch)((h + 28)[0]) | ((ush)(uch)((h + 28)[1]) << 8));

  if (inptr > insize || ((ulg)(((ush)(uch)((h)[0]) | ((ush)(uch)((h)[1]) << 8))) | ((ulg)(((ush)(uch)(((h) + 2)[0]) | ((ush)(uch)(((h) + 2)[1]) << 8))) << 16)) != 0x04034b50L)
  {
    fprintf(
# 7767 "gzip.c" 3 4
        stderr
# 7767 "gzip.c"
        ,
        "\n%s: %s: not a valid zip file\n",
        progname, ifname);
    exit_code = 1;
    return 1;
  }
  method = h[8];
  if (method != 0 && method != 8)
  {
    fprintf(
# 7774 "gzip.c" 3 4
        stderr
# 7774 "gzip.c"
        ,
        "\n%s: %s: first entry not deflated or stored -- use unzip\n",
        progname, ifname);
    exit_code = 1;
    return 1;
  }

  if ((decrypt = h[6] & 1) != 0)
  {
    fprintf(
# 7783 "gzip.c" 3 4
        stderr
# 7783 "gzip.c"
        ,
        "\n%s: %s: encrypted file -- use unzip\n",
        progname, ifname);
    exit_code = 1;
    return 1;
  }

  ext_header = (h[6] & 8) != 0;
  pkzip = 1;

  return 0;
}
# 7804 "gzip.c"
int unzip(int in, int out)
{
  ulg orig_crc = 0;
  ulg orig_len = 0;
  int n;
  uch buf[16];
  int err = 0;

  ifd = in;
  ofd = out;

  updcrc(
# 7816 "gzip.c" 3 4
      ((void *)0)
# 7816 "gzip.c"
          ,
      0);

  if (pkzip && !ext_header)
  {
    orig_crc = ((ulg)(((ush)(uch)((inbuf + 14)[0]) | ((ush)(uch)((inbuf + 14)[1]) << 8))) | ((ulg)(((ush)(uch)(((inbuf + 14) + 2)[0]) | ((ush)(uch)(((inbuf + 14) + 2)[1]) << 8))) << 16));
    orig_len = ((ulg)(((ush)(uch)((inbuf + 22)[0]) | ((ush)(uch)((inbuf + 22)[1]) << 8))) | ((ulg)(((ush)(uch)(((inbuf + 22) + 2)[0]) | ((ush)(uch)(((inbuf + 22) + 2)[1]) << 8))) << 16));
  }

  if (method == 8)
  {

    int res = inflate();

    if (res == 3)
    {
      error("out of memory");
    }
    else if (res != 0)
    {
      error("invalid compressed data--format violated");
    }
  }
  else if (pkzip && method == 0)
  {

    register ulg n = ((ulg)(((ush)(uch)((inbuf + 22)[0]) | ((ush)(uch)((inbuf + 22)[1]) << 8))) | ((ulg)(((ush)(uch)(((inbuf + 22) + 2)[0]) | ((ush)(uch)(((inbuf + 22) + 2)[1]) << 8))) << 16));

    if (n != ((ulg)(((ush)(uch)((inbuf + 18)[0]) | ((ush)(uch)((inbuf + 18)[1]) << 8))) | ((ulg)(((ush)(uch)(((inbuf + 18) + 2)[0]) | ((ush)(uch)(((inbuf + 18) + 2)[1]) << 8))) << 16)) - (decrypt ? 12 : 0))
    {

      fprintf(
# 7840 "gzip.c" 3 4
          stderr
# 7840 "gzip.c"
          ,
          "len %ld, siz %ld\n", n, ((ulg)(((ush)(uch)((inbuf + 18)[0]) | ((ush)(uch)((inbuf + 18)[1]) << 8))) | ((ulg)(((ush)(uch)(((inbuf + 18) + 2)[0]) | ((ush)(uch)(((inbuf + 18) + 2)[1]) << 8))) << 16)));
      error("invalid compressed data--length mismatch");
    }
    while (n--)
    {
      uch c = (uch)(inptr < insize ? inbuf[inptr++] : fill_inbuf(0));
      {
        window[outcnt++] = (uch)(c);
        if (outcnt == 0x8000)
          flush_window();
      };
    }
    flush_window();
  }
  else
  {
    error("internal error, invalid method");
  }

  if (!pkzip)
  {

    for (n = 0; n < 8; n++)
    {
      buf[n] = (uch)(inptr < insize ? inbuf[inptr++] : fill_inbuf(0));
    }
    orig_crc = ((ulg)(((ush)(uch)((buf)[0]) | ((ush)(uch)((buf)[1]) << 8))) | ((ulg)(((ush)(uch)(((buf) + 2)[0]) | ((ush)(uch)(((buf) + 2)[1]) << 8))) << 16));
    orig_len = ((ulg)(((ush)(uch)((buf + 4)[0]) | ((ush)(uch)((buf + 4)[1]) << 8))) | ((ulg)(((ush)(uch)(((buf + 4) + 2)[0]) | ((ush)(uch)(((buf + 4) + 2)[1]) << 8))) << 16));
  }
  else if (ext_header)
  {

    for (n = 0; n < 16; n++)
    {
      buf[n] = (uch)(inptr < insize ? inbuf[inptr++] : fill_inbuf(0));
    }
    orig_crc = ((ulg)(((ush)(uch)((buf + 4)[0]) | ((ush)(uch)((buf + 4)[1]) << 8))) | ((ulg)(((ush)(uch)(((buf + 4) + 2)[0]) | ((ush)(uch)(((buf + 4) + 2)[1]) << 8))) << 16));
    orig_len = ((ulg)(((ush)(uch)((buf + 12)[0]) | ((ush)(uch)((buf + 12)[1]) << 8))) | ((ulg)(((ush)(uch)(((buf + 12) + 2)[0]) | ((ush)(uch)(((buf + 12) + 2)[1]) << 8))) << 16));
  }

  if (orig_crc != updcrc(outbuf, 0))
  {
    fprintf(
# 7878 "gzip.c" 3 4
        stderr
# 7878 "gzip.c"
        ,
        "\n%s: %s: invalid compressed data--crc error\n",
        progname, ifname);
    err = 1;
  }
  if (orig_len != (ulg)(bytes_out & 0xffffffff))
  {
    fprintf(
# 7883 "gzip.c" 3 4
        stderr
# 7883 "gzip.c"
        ,
        "\n%s: %s: invalid compressed data--length error\n",
        progname, ifname);
    err = 1;
  }

  if (pkzip && inptr + 4 < insize && ((ulg)(((ush)(uch)((inbuf + inptr)[0]) | ((ush)(uch)((inbuf + inptr)[1]) << 8))) | ((ulg)(((ush)(uch)(((inbuf + inptr) + 2)[0]) | ((ush)(uch)(((inbuf + inptr) + 2)[1]) << 8))) << 16)) == 0x04034b50L)
  {
    if (to_stdout)
    {
      {
        if (!quiet)
          fprintf(
# 7891 "gzip.c" 3 4
              stderr
# 7891 "gzip.c"
              ,
              "%s: %s has more than one entry--rest ignored\n", progname, ifname);
        if (exit_code == 0)
          exit_code = 2;
      }

      ;
    }
    else
    {

      fprintf(
# 7896 "gzip.c" 3 4
          stderr
# 7896 "gzip.c"
          ,
          "%s: %s has more than one entry -- unchanged\n",
          progname, ifname);
      err = 1;
    }
  }
  ext_header = pkzip = 0;
  if (err == 0)
    return 0;
  exit_code = 1;
  if (!test)
    abort_gzip();
  return err;
}
# 7923 "gzip.c"
extern ulg crc_32_tab[];

int copy(int in, int out)
{

# 7932 "gzip.c" 3 4
  (*__errno_location())
# 7932 "gzip.c"
      = 0;
  while (insize != 0 && (int)insize != -1)
  {
    write_buf(out, (char *)inbuf, insize);
    bytes_out += insize;
    insize = read(in, (char *)inbuf, 0x8000);
  }
  if ((int)insize == -1)
  {
    read_error();
  }
  bytes_in = bytes_out;
  return 0;
}

ulg updcrc(uch *s,
           unsigned n)
{
  register ulg c;

  static ulg crc = (ulg)0xffffffffL;

  if (s ==
# 7958 "gzip.c" 3 4
      ((void *)0)
# 7958 "gzip.c"
  )
  {
    c = 0xffffffffL;
  }
  else
  {
    c = crc;
    if (n)
      do
      {
        c = crc_32_tab[((int)c ^ (*s++)) & 0xff] ^ (c >> 8);
      } while (--n);
  }
  crc = c;
  return c ^ 0xffffffffL;
}

void clear_bufs()
{
  outcnt = 0;
  insize = inptr = 0;
  bytes_in = bytes_out = 0L;
}

int fill_inbuf(int eof_ok)
{
  int len;

  insize = 0;
  do
  {
    len = read(ifd, (char *)inbuf + insize, 0x8000 - insize);
    if (len == 0)
      break;
    if (len == -1)
    {
      read_error();
      break;
    }
    insize += len;
  } while (insize < 0x8000);

  if (insize == 0)
  {
    if (eof_ok)
      return
# 8001 "gzip.c" 3 4
          (-1)
# 8001 "gzip.c"
              ;
    flush_window();

# 8003 "gzip.c" 3 4
    (*__errno_location())
# 8003 "gzip.c"
        = 0;
    read_error();
  }
  bytes_in += (off_t)insize;
  inptr = 1;
  return inbuf[0];
}

void flush_outbuf()
{
  if (outcnt == 0)
    return;

  write_buf(ofd, (char *)outbuf, outcnt);
  bytes_out += (off_t)outcnt;
  outcnt = 0;
}

void flush_window()
{
  if (outcnt == 0)
    return;
  updcrc(window, outcnt);

  if (!test)
  {
    write_buf(ofd, (char *)window, outcnt);
  }
  bytes_out += (off_t)outcnt;
  outcnt = 0;
}

void write_buf(int fd,
               voidp buf,
               unsigned cnt)
{
  unsigned n;

  while ((n = write(fd, buf, cnt)) != cnt)
  {
    if (n == (unsigned)(-1))
    {
      write_error();
    }
    cnt -= n;
    buf = (voidp)((char *)buf + n);
  }
}

char *strlwr(char *s)
{
  char *t;
  for (t = s; *t; t++)
    *t = (
# 8068 "gzip.c" 3 4
        ((*__ctype_b_loc())[(int)((
# 8068 "gzip.c"
             (unsigned char)*t
# 8068 "gzip.c" 3 4
             ))] &
         (unsigned short int)_ISupper)
# 8068 "gzip.c"
            ? tolower((unsigned char)*t)
            : ((unsigned char)*t));
  return s;
}

char *base_name(char *fname)
{
  char *p;

  if ((p = strrchr(fname, '/')) !=
# 8082 "gzip.c" 3 4
      ((void *)0)
# 8082 "gzip.c"
  )
    fname = p + 1;
# 8092 "gzip.c"
  if (('A') == 'a')
    strlwr(fname);
  return fname;
}

int xunlink(char *filename)
{
  int r = unlink(filename);
# 8118 "gzip.c"
  return r;
}
# 8129 "gzip.c"
void make_simple_name(char *name)
{
  char *p = strrchr(name, '.');
  if (p ==
# 8133 "gzip.c" 3 4
      ((void *)0)
# 8133 "gzip.c"
  )
    return;
  if (p == name)
    p++;
  do
  {
    if (*--p == '.')
      *p = '_';
  } while (p != name);
}
# 8200 "gzip.c"
char *add_envopt(int *argcp,
                 char ***argvp,
                 char *env)
{
  char *p;
  char **oargv;
  char **nargv;
  int oargc = *argcp;
  int nargc = 0;

  env = (char *)getenv(env);
  if (env ==
# 8212 "gzip.c" 3 4
      ((void *)0)
# 8212 "gzip.c"
  )
    return
# 8212 "gzip.c" 3 4
        ((void *)0)
# 8212 "gzip.c"
            ;

  p = (char *)xmalloc(strlen(env) + 1);
  env = strcpy(p, env);

  for (p = env; *p; nargc++)
  {
    p += strspn(p, " \t");
    if (*p == '\0')
      break;

    p += strcspn(p, " \t");
    if (*p)
      *p++ = '\0';
  }
  if (nargc == 0)
  {
    free(env);
    return
# 8226 "gzip.c" 3 4
        ((void *)0)
# 8226 "gzip.c"
            ;
  }
  *argcp += nargc;

  nargv = (char **)calloc(*argcp + 1, sizeof(char *));
  if (nargv ==
# 8233 "gzip.c" 3 4
      ((void *)0)
# 8233 "gzip.c"
  )
    error("out of memory");
  oargv = *argvp;
  *argvp = nargv;

  if (oargc-- < 0)
    error("argc<=0");
  *(nargv++) = *(oargv++);

  for (p = env; nargc > 0; nargc--)
  {
    p += strspn(p, " \t");
    *(nargv++) = p;
    while (*p++)
      ;
  }

  while (oargc--)
    *(nargv++) = *(oargv++);
  *nargv =
# 8250 "gzip.c" 3 4
      ((void *)0)
# 8250 "gzip.c"
      ;
  return env;
}

void error(char *m)
{
  fprintf(
# 8260 "gzip.c" 3 4
      stderr
# 8260 "gzip.c"
      ,
      "\n%s: %s: %s\n", progname, ifname, m);
  abort_gzip();
}

void warning(char *m)
{
  {
    if (!quiet)
      fprintf(
# 8267 "gzip.c" 3 4
          stderr
# 8267 "gzip.c"
          ,
          "%s: %s: warning: %s\n", progname, ifname, m);
    if (exit_code == 0)
      exit_code = 2;
  };
}

void read_error()
{
  int e =
# 8272 "gzip.c" 3 4
      (*__errno_location())
# 8272 "gzip.c"
      ;
  fprintf(
# 8273 "gzip.c" 3 4
      stderr
# 8273 "gzip.c"
      ,
      "\n%s: ", progname);
  if (e != 0)
  {

# 8275 "gzip.c" 3 4
    (*__errno_location())
# 8275 "gzip.c"
        = e;
    perror(ifname);
  }
  else
  {
    fprintf(
# 8278 "gzip.c" 3 4
        stderr
# 8278 "gzip.c"
        ,
        "%s: unexpected end of file\n", ifname);
  }
  abort_gzip();
}

void write_error()
{
  int e =
# 8285 "gzip.c" 3 4
      (*__errno_location())
# 8285 "gzip.c"
      ;
  fprintf(
# 8286 "gzip.c" 3 4
      stderr
# 8286 "gzip.c"
      ,
      "\n%s: ", progname);

# 8287 "gzip.c" 3 4
  (*__errno_location())
# 8287 "gzip.c"
      = e;
  perror(ofname);
  abort_gzip();
}

void display_ratio(off_t num,
                   off_t den,
                   FILE *file)

{
  fprintf(file, "%5.1f%%", den == 0 ? 0 : 100.0 * num / den);
}

void fprint_off(FILE *file,
                off_t offset,
                int width)
{
  char buf[8 * sizeof(off_t)];
  char *p = buf + sizeof buf;

  if (offset < 0)
  {
    do
      *--p = '0' - offset % 10;
    while ((offset /= 10) != 0);

    *--p = '-';
  }
  else
  {
    do
      *--p = '0' + offset % 10;
    while ((offset /= 10) != 0);
  }

  width -= buf + sizeof buf - p;
  while (0 < width--)
  {
    putc(' ', file);
  }
  for (; p < buf + sizeof buf; p++)
    putc(*p, file);
}

voidp xmalloc(unsigned size)
{
  voidp cp = (voidp)malloc(size);

  if (cp ==
# 8344 "gzip.c" 3 4
      ((void *)0)
# 8344 "gzip.c"
  )
    error("out of memory");
  return cp;
}

ulg crc_32_tab[] = {
    0x00000000L, 0x77073096L, 0xee0e612cL, 0x990951baL, 0x076dc419L,
    0x706af48fL, 0xe963a535L, 0x9e6495a3L, 0x0edb8832L, 0x79dcb8a4L,
    0xe0d5e91eL, 0x97d2d988L, 0x09b64c2bL, 0x7eb17cbdL, 0xe7b82d07L,
    0x90bf1d91L, 0x1db71064L, 0x6ab020f2L, 0xf3b97148L, 0x84be41deL,
    0x1adad47dL, 0x6ddde4ebL, 0xf4d4b551L, 0x83d385c7L, 0x136c9856L,
    0x646ba8c0L, 0xfd62f97aL, 0x8a65c9ecL, 0x14015c4fL, 0x63066cd9L,
    0xfa0f3d63L, 0x8d080df5L, 0x3b6e20c8L, 0x4c69105eL, 0xd56041e4L,
    0xa2677172L, 0x3c03e4d1L, 0x4b04d447L, 0xd20d85fdL, 0xa50ab56bL,
    0x35b5a8faL, 0x42b2986cL, 0xdbbbc9d6L, 0xacbcf940L, 0x32d86ce3L,
    0x45df5c75L, 0xdcd60dcfL, 0xabd13d59L, 0x26d930acL, 0x51de003aL,
    0xc8d75180L, 0xbfd06116L, 0x21b4f4b5L, 0x56b3c423L, 0xcfba9599L,
    0xb8bda50fL, 0x2802b89eL, 0x5f058808L, 0xc60cd9b2L, 0xb10be924L,
    0x2f6f7c87L, 0x58684c11L, 0xc1611dabL, 0xb6662d3dL, 0x76dc4190L,
    0x01db7106L, 0x98d220bcL, 0xefd5102aL, 0x71b18589L, 0x06b6b51fL,
    0x9fbfe4a5L, 0xe8b8d433L, 0x7807c9a2L, 0x0f00f934L, 0x9609a88eL,
    0xe10e9818L, 0x7f6a0dbbL, 0x086d3d2dL, 0x91646c97L, 0xe6635c01L,
    0x6b6b51f4L, 0x1c6c6162L, 0x856530d8L, 0xf262004eL, 0x6c0695edL,
    0x1b01a57bL, 0x8208f4c1L, 0xf50fc457L, 0x65b0d9c6L, 0x12b7e950L,
    0x8bbeb8eaL, 0xfcb9887cL, 0x62dd1ddfL, 0x15da2d49L, 0x8cd37cf3L,
    0xfbd44c65L, 0x4db26158L, 0x3ab551ceL, 0xa3bc0074L, 0xd4bb30e2L,
    0x4adfa541L, 0x3dd895d7L, 0xa4d1c46dL, 0xd3d6f4fbL, 0x4369e96aL,
    0x346ed9fcL, 0xad678846L, 0xda60b8d0L, 0x44042d73L, 0x33031de5L,
    0xaa0a4c5fL, 0xdd0d7cc9L, 0x5005713cL, 0x270241aaL, 0xbe0b1010L,
    0xc90c2086L, 0x5768b525L, 0x206f85b3L, 0xb966d409L, 0xce61e49fL,
    0x5edef90eL, 0x29d9c998L, 0xb0d09822L, 0xc7d7a8b4L, 0x59b33d17L,
    0x2eb40d81L, 0xb7bd5c3bL, 0xc0ba6cadL, 0xedb88320L, 0x9abfb3b6L,
    0x03b6e20cL, 0x74b1d29aL, 0xead54739L, 0x9dd277afL, 0x04db2615L,
    0x73dc1683L, 0xe3630b12L, 0x94643b84L, 0x0d6d6a3eL, 0x7a6a5aa8L,
    0xe40ecf0bL, 0x9309ff9dL, 0x0a00ae27L, 0x7d079eb1L, 0xf00f9344L,
    0x8708a3d2L, 0x1e01f268L, 0x6906c2feL, 0xf762575dL, 0x806567cbL,
    0x196c3671L, 0x6e6b06e7L, 0xfed41b76L, 0x89d32be0L, 0x10da7a5aL,
    0x67dd4accL, 0xf9b9df6fL, 0x8ebeeff9L, 0x17b7be43L, 0x60b08ed5L,
    0xd6d6a3e8L, 0xa1d1937eL, 0x38d8c2c4L, 0x4fdff252L, 0xd1bb67f1L,
    0xa6bc5767L, 0x3fb506ddL, 0x48b2364bL, 0xd80d2bdaL, 0xaf0a1b4cL,
    0x36034af6L, 0x41047a60L, 0xdf60efc3L, 0xa867df55L, 0x316e8eefL,
    0x4669be79L, 0xcb61b38cL, 0xbc66831aL, 0x256fd2a0L, 0x5268e236L,
    0xcc0c7795L, 0xbb0b4703L, 0x220216b9L, 0x5505262fL, 0xc5ba3bbeL,
    0xb2bd0b28L, 0x2bb45a92L, 0x5cb36a04L, 0xc2d7ffa7L, 0xb5d0cf31L,
    0x2cd99e8bL, 0x5bdeae1dL, 0x9b64c2b0L, 0xec63f226L, 0x756aa39cL,
    0x026d930aL, 0x9c0906a9L, 0xeb0e363fL, 0x72076785L, 0x05005713L,
    0x95bf4a82L, 0xe2b87a14L, 0x7bb12baeL, 0x0cb61b38L, 0x92d28e9bL,
    0xe5d5be0dL, 0x7cdcefb7L, 0x0bdbdf21L, 0x86d3d2d4L, 0xf1d4e242L,
    0x68ddb3f8L, 0x1fda836eL, 0x81be16cdL, 0xf6b9265bL, 0x6fb077e1L,
    0x18b74777L, 0x88085ae6L, 0xff0f6a70L, 0x66063bcaL, 0x11010b5cL,
    0x8f659effL, 0xf862ae69L, 0x616bffd3L, 0x166ccf45L, 0xa00ae278L,
    0xd70dd2eeL, 0x4e048354L, 0x3903b3c2L, 0xa7672661L, 0xd06016f7L,
    0x4969474dL, 0x3e6e77dbL, 0xaed16a4aL, 0xd9d65adcL, 0x40df0b66L,
    0x37d83bf0L, 0xa9bcae53L, 0xdebb9ec5L, 0x47b2cf7fL, 0x30b5ffe9L,
    0xbdbdf21cL, 0xcabac28aL, 0x53b39330L, 0x24b4a3a6L, 0xbad03605L,
    0xcdd70693L, 0x54de5729L, 0x23d967bfL, 0xb3667a2eL, 0xc4614ab8L,
    0x5d681b02L, 0x2a6f2b94L, 0xb40bbe37L, 0xc30c8ea1L, 0x5a05df1bL,
    0x2d02ef8dL};
# 8426 "gzip.c"
int rpmatch();

int yesno()
{

  char buf[128];
  int len = 0;
  int c;

  while ((c = getchar()) !=
# 8440 "gzip.c" 3 4
             (-1)
# 8440 "gzip.c"
         && c != '\n')
    if ((len > 0 && len < 127) || (len == 0 && !
# 8441 "gzip.c" 3 4
                                               ((*__ctype_b_loc())[(int)((
# 8441 "gzip.c"
                                                    c
# 8441 "gzip.c" 3 4
                                                    ))] &
                                                (unsigned short int)_ISspace)
# 8441 "gzip.c"
                                       ))
      buf[len++] = c;
  buf[len] = '\0';

  return rpmatch(buf) == 1;
}
# 8457 "gzip.c"
static ulg crc;
off_t header_bytes;

int zip(int in, int out)
{
  uch flags = 0;
  ush attr = 0;
  ush deflate_flags = 0;

  ifd = in;
  ofd = out;
  outcnt = 0;

  method = 8;
  {
    outbuf[outcnt++] = (uch)("\037\213"[0]);
    if (outcnt == 16384)
      flush_outbuf();
  };
  {
    outbuf[outcnt++] = (uch)("\037\213"[1]);
    if (outcnt == 16384)
      flush_outbuf();
  };
  {
    outbuf[outcnt++] = (uch)(8);
    if (outcnt == 16384)
      flush_outbuf();
  };

  if (save_orig_name)
  {
    flags |= 0x08;
  }
  {
    outbuf[outcnt++] = (uch)(flags);
    if (outcnt == 16384)
      flush_outbuf();
  };
  {
    {
      if (outcnt < 16384 - 2)
      {
        outbuf[outcnt++] = (uch)(((time_stamp == (time_stamp & 0xffffffff) ? (ulg)time_stamp : (ulg)0) & 0xffff) & 0xff);
        outbuf[outcnt++] = (uch)((ush)((time_stamp == (time_stamp & 0xffffffff) ? (ulg)time_stamp : (ulg)0) & 0xffff) >> 8);
      }
      else
      {
        {
          outbuf[outcnt++] = (uch)((uch)(((time_stamp == (time_stamp & 0xffffffff) ? (ulg)time_stamp : (ulg)0) & 0xffff) & 0xff));
          if (outcnt == 16384)
            flush_outbuf();
        };
        {
          outbuf[outcnt++] = (uch)((uch)((ush)((time_stamp == (time_stamp & 0xffffffff) ? (ulg)time_stamp : (ulg)0) & 0xffff) >> 8));
          if (outcnt == 16384)
            flush_outbuf();
        };
      }
    };
    {
      if (outcnt < 16384 - 2)
      {
        outbuf[outcnt++] = (uch)((((ulg)(time_stamp == (time_stamp & 0xffffffff) ? (ulg)time_stamp : (ulg)0)) >> 16) & 0xff);
        outbuf[outcnt++] = (uch)((ush)(((ulg)(time_stamp == (time_stamp & 0xffffffff) ? (ulg)time_stamp : (ulg)0)) >> 16) >> 8);
      }
      else
      {
        {
          outbuf[outcnt++] = (uch)((uch)((((ulg)(time_stamp == (time_stamp & 0xffffffff) ? (ulg)time_stamp : (ulg)0)) >> 16) & 0xff));
          if (outcnt == 16384)
            flush_outbuf();
        };
        {
          outbuf[outcnt++] = (uch)((uch)((ush)(((ulg)(time_stamp == (time_stamp & 0xffffffff) ? (ulg)time_stamp : (ulg)0)) >> 16) >> 8));
          if (outcnt == 16384)
            flush_outbuf();
        };
      }
    };
  };

  crc = updcrc(0, 0);

  bi_init(out);
  ct_init(&attr, &method);
  lm_init(level, &deflate_flags);

  {
    outbuf[outcnt++] = (uch)((uch)deflate_flags);
    if (outcnt == 16384)
      flush_outbuf();
  };
  {
    outbuf[outcnt++] = (uch)(0x03);
    if (outcnt == 16384)
      flush_outbuf();
  };

  if (save_orig_name)
  {
    char *p = base_name(ifname);
    do
    {
      {
        outbuf[outcnt++] = (uch)(*p);
        if (outcnt == 16384)
          flush_outbuf();
      };
    } while (*p++);
  }
  header_bytes = (off_t)outcnt;

  (void)deflate();
# 8521 "gzip.c"
  {
    {
      if (outcnt < 16384 - 2)
      {
        outbuf[outcnt++] = (uch)(((crc) & 0xffff) & 0xff);
        outbuf[outcnt++] = (uch)((ush)((crc) & 0xffff) >> 8);
      }
      else
      {
        {
          outbuf[outcnt++] = (uch)((uch)(((crc) & 0xffff) & 0xff));
          if (outcnt == 16384)
            flush_outbuf();
        };
        {
          outbuf[outcnt++] = (uch)((uch)((ush)((crc) & 0xffff) >> 8));
          if (outcnt == 16384)
            flush_outbuf();
        };
      }
    };
    {
      if (outcnt < 16384 - 2)
      {
        outbuf[outcnt++] = (uch)((((ulg)(crc)) >> 16) & 0xff);
        outbuf[outcnt++] = (uch)((ush)(((ulg)(crc)) >> 16) >> 8);
      }
      else
      {
        {
          outbuf[outcnt++] = (uch)((uch)((((ulg)(crc)) >> 16) & 0xff));
          if (outcnt == 16384)
            flush_outbuf();
        };
        {
          outbuf[outcnt++] = (uch)((uch)((ush)(((ulg)(crc)) >> 16) >> 8));
          if (outcnt == 16384)
            flush_outbuf();
        };
      }
    };
  };
  {
    {
      if (outcnt < 16384 - 2)
      {
        outbuf[outcnt++] = (uch)((((ulg)bytes_in) & 0xffff) & 0xff);
        outbuf[outcnt++] = (uch)((ush)(((ulg)bytes_in) & 0xffff) >> 8);
      }
      else
      {
        {
          outbuf[outcnt++] = (uch)((uch)((((ulg)bytes_in) & 0xffff) & 0xff));
          if (outcnt == 16384)
            flush_outbuf();
        };
        {
          outbuf[outcnt++] = (uch)((uch)((ush)(((ulg)bytes_in) & 0xffff) >> 8));
          if (outcnt == 16384)
            flush_outbuf();
        };
      }
    };
    {
      if (outcnt < 16384 - 2)
      {
        outbuf[outcnt++] = (uch)((((ulg)((ulg)bytes_in)) >> 16) & 0xff);
        outbuf[outcnt++] = (uch)((ush)(((ulg)((ulg)bytes_in)) >> 16) >> 8);
      }
      else
      {
        {
          outbuf[outcnt++] = (uch)((uch)((((ulg)((ulg)bytes_in)) >> 16) & 0xff));
          if (outcnt == 16384)
            flush_outbuf();
        };
        {
          outbuf[outcnt++] = (uch)((uch)((ush)(((ulg)((ulg)bytes_in)) >> 16) >> 8));
          if (outcnt == 16384)
            flush_outbuf();
        };
      }
    };
  };
  header_bytes += 2 * sizeof(long);

  flush_outbuf();
  return 0;
}

int file_read(char *buf,
              unsigned size)

{
  unsigned len;

  ;

  len = read(ifd, buf, size);
  if (len == 0)
    return (int)len;
  if (len == (unsigned)-1)
  {
    read_error();
    return
# 8547 "gzip.c" 3 4
        (-1)
# 8547 "gzip.c"
            ;
  }

  crc = updcrc((uch *)buf, len);
  bytes_in += (off_t)len;
  return (int)len;
}
# 8573 "gzip.c"
int rpmatch(const char *response)
{

  return (*response == 'y' || *response == 'Y'   ? 1
          : *response == 'n' || *response == 'N' ? 0
                                                 : -1);
}

int getopt_long(int argc,
                char *const *argv,
                const char *options,
                const struct option *long_options,
                int *opt_index)

{
  return _getopt_internal(argc, argv, options, long_options, opt_index, 0);
}

int getopt_long_only(int argc,
                     char *const *argv,
                     const char *options,
                     const struct option *long_options,
                     int *opt_index)
{
  return _getopt_internal(argc, argv, options, long_options, opt_index, 1);
}
