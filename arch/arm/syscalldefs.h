#ifndef __ARM_EABI__
#error "unsupported ARM ABI"
#endif
static const syscalldef syscalldefs[] = {
	[SYSCALL_OR_NUM(0, SYS_restart_syscall)]	 = MAKE_UINT16(0, 1),
	[SYSCALL_OR_NUM(1, SYS_exit)]	 = MAKE_UINT16(1, 17),
	[SYSCALL_OR_NUM(2, SYS_fork)]	 = MAKE_UINT16(0, 22),
	[SYSCALL_OR_NUM(3, SYS_read)]	 = MAKE_UINT16(3, 27),
	[SYSCALL_OR_NUM(4, SYS_write)]	 = MAKE_UINT16(3, 32),
	[SYSCALL_OR_NUM(5, SYS_open)]	 = MAKE_UINT16(3, 38),
	[SYSCALL_OR_NUM(6, SYS_close)]	 = MAKE_UINT16(1, 43),
	[SYSCALL_OR_NUM(7, SYS_waitpid)]	 = MAKE_UINT16(3, 49),
	[SYSCALL_OR_NUM(8, SYS_creat)]	 = MAKE_UINT16(2, 57),
	[SYSCALL_OR_NUM(9, SYS_link)]	 = MAKE_UINT16(2, 63),
	[SYSCALL_OR_NUM(10, SYS_unlink)]	 = MAKE_UINT16(1, 68),
	[SYSCALL_OR_NUM(11, SYS_execve)]	 = MAKE_UINT16(3, 75),
	[SYSCALL_OR_NUM(12, SYS_chdir)]	 = MAKE_UINT16(1, 82),
	[SYSCALL_OR_NUM(13, SYS_time)]	 = MAKE_UINT16(1, 88),
	[SYSCALL_OR_NUM(14, SYS_mknod)]	 = MAKE_UINT16(3, 93),
	[SYSCALL_OR_NUM(15, SYS_chmod)]	 = MAKE_UINT16(2, 99),
	[SYSCALL_OR_NUM(16, SYS_lchown)]	 = MAKE_UINT16(3, 105),
	[SYSCALL_OR_NUM(17, SYS_break)]	 = MAKE_UINT16(0, 112),
	[SYSCALL_OR_NUM(18, SYS_oldstat)]	 = MAKE_UINT16(2, 118),
	[SYSCALL_OR_NUM(19, SYS_lseek)]	 = MAKE_UINT16(3, 126),
	[SYSCALL_OR_NUM(20, SYS_getpid)]	 = MAKE_UINT16(0, 132),
	[SYSCALL_OR_NUM(21, SYS_mount)]	 = MAKE_UINT16(5, 139),
	[SYSCALL_OR_NUM(22, SYS_oldumount)]	 = MAKE_UINT16(1, 145),
	[SYSCALL_OR_NUM(23, SYS_setuid)]	 = MAKE_UINT16(1, 155),
	[SYSCALL_OR_NUM(24, SYS_getuid)]	 = MAKE_UINT16(0, 162),
	[SYSCALL_OR_NUM(25, SYS_stime)]	 = MAKE_UINT16(1, 169),
	[SYSCALL_OR_NUM(26, SYS_ptrace)]	 = MAKE_UINT16(4, 175),
	[SYSCALL_OR_NUM(27, SYS_alarm)]	 = MAKE_UINT16(1, 182),
	[SYSCALL_OR_NUM(28, SYS_oldfstat)]	 = MAKE_UINT16(2, 188),
	[SYSCALL_OR_NUM(29, SYS_pause)]	 = MAKE_UINT16(0, 197),
	[SYSCALL_OR_NUM(30, SYS_utime)]	 = MAKE_UINT16(2, 203),
	[SYSCALL_OR_NUM(31, SYS_stty)]	 = MAKE_UINT16(2, 209),
	[SYSCALL_OR_NUM(32, SYS_gtty)]	 = MAKE_UINT16(2, 214),
	[SYSCALL_OR_NUM(33, SYS_access)]	 = MAKE_UINT16(2, 219),
	[SYSCALL_OR_NUM(34, SYS_nice)]	 = MAKE_UINT16(1, 226),
	[SYSCALL_OR_NUM(35, SYS_ftime)]	 = MAKE_UINT16(0, 231),
	[SYSCALL_OR_NUM(36, SYS_sync)]	 = MAKE_UINT16(0, 237),
	[SYSCALL_OR_NUM(37, SYS_kill)]	 = MAKE_UINT16(2, 242),
	[SYSCALL_OR_NUM(38, SYS_rename)]	 = MAKE_UINT16(2, 247),
	[SYSCALL_OR_NUM(39, SYS_mkdir)]	 = MAKE_UINT16(2, 254),
	[SYSCALL_OR_NUM(40, SYS_rmdir)]	 = MAKE_UINT16(1, 260),
	[SYSCALL_OR_NUM(41, SYS_dup)]	 = MAKE_UINT16(1, 266),
	[SYSCALL_OR_NUM(42, SYS_pipe)]	 = MAKE_UINT16(1, 270),
	[SYSCALL_OR_NUM(43, SYS_times)]	 = MAKE_UINT16(1, 275),
	[SYSCALL_OR_NUM(44, SYS_prof)]	 = MAKE_UINT16(0, 281),
	[SYSCALL_OR_NUM(45, SYS_brk)]	 = MAKE_UINT16(1, 286),
	[SYSCALL_OR_NUM(46, SYS_setgid)]	 = MAKE_UINT16(1, 290),
	[SYSCALL_OR_NUM(47, SYS_getgid)]	 = MAKE_UINT16(0, 297),
	[SYSCALL_OR_NUM(48, SYS_signal)]	 = MAKE_UINT16(3, 304),
	[SYSCALL_OR_NUM(49, SYS_geteuid)]	 = MAKE_UINT16(0, 311),
	[SYSCALL_OR_NUM(50, SYS_getegid)]	 = MAKE_UINT16(0, 319),
	[SYSCALL_OR_NUM(51, SYS_acct)]	 = MAKE_UINT16(1, 327),
	[SYSCALL_OR_NUM(52, SYS_umount)]	 = MAKE_UINT16(2, 332),
	[SYSCALL_OR_NUM(53, SYS_lock)]	 = MAKE_UINT16(0, 339),
	[SYSCALL_OR_NUM(54, SYS_ioctl)]	 = MAKE_UINT16(3, 344),
	[SYSCALL_OR_NUM(55, SYS_fcntl)]	 = MAKE_UINT16(3, 350),
	[SYSCALL_OR_NUM(56, SYS_mpx)]	 = MAKE_UINT16(0, 356),
	[SYSCALL_OR_NUM(57, SYS_setpgid)]	 = MAKE_UINT16(2, 360),
	[SYSCALL_OR_NUM(58, SYS_ulimit)]	 = MAKE_UINT16(2, 368),
	[SYSCALL_OR_NUM(59, SYS_oldolduname)]	 = MAKE_UINT16(1, 375),
	[SYSCALL_OR_NUM(60, SYS_umask)]	 = MAKE_UINT16(1, 387),
	[SYSCALL_OR_NUM(61, SYS_chroot)]	 = MAKE_UINT16(1, 393),
	[SYSCALL_OR_NUM(62, SYS_ustat)]	 = MAKE_UINT16(2, 400),
	[SYSCALL_OR_NUM(63, SYS_dup2)]	 = MAKE_UINT16(2, 406),
	[SYSCALL_OR_NUM(64, SYS_getppid)]	 = MAKE_UINT16(0, 411),
	[SYSCALL_OR_NUM(65, SYS_getpgrp)]	 = MAKE_UINT16(0, 419),
	[SYSCALL_OR_NUM(66, SYS_setsid)]	 = MAKE_UINT16(0, 427),
	[SYSCALL_OR_NUM(67, SYS_sigaction)]	 = MAKE_UINT16(3, 434),
	[SYSCALL_OR_NUM(68, SYS_sgetmask)]	 = MAKE_UINT16(0, 444),
	[SYSCALL_OR_NUM(69, SYS_ssetmask)]	 = MAKE_UINT16(1, 453),
	[SYSCALL_OR_NUM(70, SYS_setreuid)]	 = MAKE_UINT16(2, 462),
	[SYSCALL_OR_NUM(71, SYS_setregid)]	 = MAKE_UINT16(2, 471),
	[SYSCALL_OR_NUM(72, SYS_sigsuspend)]	 = MAKE_UINT16(3, 480),
	[SYSCALL_OR_NUM(73, SYS_sigpending)]	 = MAKE_UINT16(1, 491),
	[SYSCALL_OR_NUM(74, SYS_sethostname)]	 = MAKE_UINT16(2, 502),
	[SYSCALL_OR_NUM(75, SYS_setrlimit)]	 = MAKE_UINT16(2, 514),
	[SYSCALL_OR_NUM(76, SYS_old_getrlimit)]	 = MAKE_UINT16(2, 524),
	[SYSCALL_OR_NUM(77, SYS_getrusage)]	 = MAKE_UINT16(2, 538),
	[SYSCALL_OR_NUM(78, SYS_gettimeofday)]	 = MAKE_UINT16(2, 548),
	[SYSCALL_OR_NUM(79, SYS_settimeofday)]	 = MAKE_UINT16(2, 561),
	[SYSCALL_OR_NUM(80, SYS_getgroups)]	 = MAKE_UINT16(2, 574),
	[SYSCALL_OR_NUM(81, SYS_setgroups)]	 = MAKE_UINT16(2, 584),
	[SYSCALL_OR_NUM(82, SYS_oldselect)]	 = MAKE_UINT16(1, 594),
	[SYSCALL_OR_NUM(83, SYS_symlink)]	 = MAKE_UINT16(2, 604),
	[SYSCALL_OR_NUM(84, SYS_oldlstat)]	 = MAKE_UINT16(2, 612),
	[SYSCALL_OR_NUM(85, SYS_readlink)]	 = MAKE_UINT16(3, 621),
	[SYSCALL_OR_NUM(86, SYS_uselib)]	 = MAKE_UINT16(1, 630),
	[SYSCALL_OR_NUM(87, SYS_swapon)]	 = MAKE_UINT16(2, 637),
	[SYSCALL_OR_NUM(88, SYS_reboot)]	 = MAKE_UINT16(4, 644),
	[SYSCALL_OR_NUM(89, SYS_readdir)]	 = MAKE_UINT16(3, 651),
	[SYSCALL_OR_NUM(90, SYS_old_mmap)]	 = MAKE_UINT16(6, 659),
	[SYSCALL_OR_NUM(91, SYS_munmap)]	 = MAKE_UINT16(2, 668),
	[SYSCALL_OR_NUM(92, SYS_truncate)]	 = MAKE_UINT16(2, 675),
	[SYSCALL_OR_NUM(93, SYS_ftruncate)]	 = MAKE_UINT16(2, 684),
	[SYSCALL_OR_NUM(94, SYS_fchmod)]	 = MAKE_UINT16(2, 694),
	[SYSCALL_OR_NUM(95, SYS_fchown)]	 = MAKE_UINT16(3, 701),
	[SYSCALL_OR_NUM(96, SYS_getpriority)]	 = MAKE_UINT16(2, 708),
	[SYSCALL_OR_NUM(97, SYS_setpriority)]	 = MAKE_UINT16(3, 720),
	[SYSCALL_OR_NUM(98, SYS_profil)]	 = MAKE_UINT16(4, 732),
	[SYSCALL_OR_NUM(99, SYS_statfs)]	 = MAKE_UINT16(2, 739),
	[SYSCALL_OR_NUM(100, SYS_fstatfs)]	 = MAKE_UINT16(2, 746),
	[SYSCALL_OR_NUM(101, SYS_ioperm)]	 = MAKE_UINT16(3, 754),
	[SYSCALL_OR_NUM(102, SYS_socketcall)]	 = MAKE_UINT16(2, 761),
	[SYSCALL_OR_NUM(103, SYS_syslog)]	 = MAKE_UINT16(3, 772),
	[SYSCALL_OR_NUM(104, SYS_setitimer)]	 = MAKE_UINT16(3, 779),
	[SYSCALL_OR_NUM(105, SYS_getitimer)]	 = MAKE_UINT16(2, 789),
	[SYSCALL_OR_NUM(106, SYS_stat)]	 = MAKE_UINT16(2, 799),
	[SYSCALL_OR_NUM(107, SYS_lstat)]	 = MAKE_UINT16(2, 804),
	[SYSCALL_OR_NUM(108, SYS_fstat)]	 = MAKE_UINT16(2, 810),
	[SYSCALL_OR_NUM(109, SYS_olduname)]	 = MAKE_UINT16(1, 816),
	[SYSCALL_OR_NUM(110, SYS_iopl)]	 = MAKE_UINT16(1, 825),
	[SYSCALL_OR_NUM(111, SYS_vhangup)]	 = MAKE_UINT16(0, 830),
	[SYSCALL_OR_NUM(112, SYS_idle)]	 = MAKE_UINT16(0, 838),
	[SYSCALL_OR_NUM(113, SYS_syscall)]	 = MAKE_UINT16(5, 843),
	[SYSCALL_OR_NUM(114, SYS_wait4)]	 = MAKE_UINT16(4, 851),
	[SYSCALL_OR_NUM(115, SYS_swapoff)]	 = MAKE_UINT16(1, 857),
	[SYSCALL_OR_NUM(116, SYS_sysinfo)]	 = MAKE_UINT16(1, 865),
	[SYSCALL_OR_NUM(117, SYS_ipc)]	 = MAKE_UINT16(6, 873),
	[SYSCALL_OR_NUM(118, SYS_fsync)]	 = MAKE_UINT16(1, 877),
	[SYSCALL_OR_NUM(119, SYS_sigreturn)]	 = MAKE_UINT16(0, 883),
	[SYSCALL_OR_NUM(120, SYS_clone)]	 = MAKE_UINT16(5, 893),
	[SYSCALL_OR_NUM(121, SYS_setdomainname)]	 = MAKE_UINT16(2, 899),
	[SYSCALL_OR_NUM(122, SYS_uname)]	 = MAKE_UINT16(1, 913),
	[SYSCALL_OR_NUM(123, SYS_modify_ldt)]	 = MAKE_UINT16(3, 919),
	[SYSCALL_OR_NUM(124, SYS_adjtimex)]	 = MAKE_UINT16(1, 930),
	[SYSCALL_OR_NUM(125, SYS_mprotect)]	 = MAKE_UINT16(3, 939),
	[SYSCALL_OR_NUM(126, SYS_sigprocmask)]	 = MAKE_UINT16(3, 948),
	[SYSCALL_OR_NUM(127, SYS_create_module)]	 = MAKE_UINT16(2, 960),
	[SYSCALL_OR_NUM(128, SYS_init_module)]	 = MAKE_UINT16(3, 974),
	[SYSCALL_OR_NUM(129, SYS_delete_module)]	 = MAKE_UINT16(2, 986),
	[SYSCALL_OR_NUM(130, SYS_get_kernel_syms)]	 = MAKE_UINT16(1, 1000),
	[SYSCALL_OR_NUM(131, SYS_quotactl)]	 = MAKE_UINT16(4, 1016),
	[SYSCALL_OR_NUM(132, SYS_getpgid)]	 = MAKE_UINT16(1, 1025),
	[SYSCALL_OR_NUM(133, SYS_fchdir)]	 = MAKE_UINT16(1, 1033),
	[SYSCALL_OR_NUM(134, SYS_bdflush)]	 = MAKE_UINT16(0, 1040),
	[SYSCALL_OR_NUM(135, SYS_sysfs)]	 = MAKE_UINT16(3, 1048),
	[SYSCALL_OR_NUM(136, SYS_personality)]	 = MAKE_UINT16(1, 1054),
	[SYSCALL_OR_NUM(137, SYS_afs_syscall)]	 = MAKE_UINT16(5, 1066),
	[SYSCALL_OR_NUM(138, SYS_setfsuid)]	 = MAKE_UINT16(1, 1078),
	[SYSCALL_OR_NUM(139, SYS_setfsgid)]	 = MAKE_UINT16(1, 1087),
	[SYSCALL_OR_NUM(140, SYS__llseek)]	 = MAKE_UINT16(5, 1096),
	[SYSCALL_OR_NUM(141, SYS_getdents)]	 = MAKE_UINT16(3, 1104),
	[SYSCALL_OR_NUM(142, SYS_select)]	 = MAKE_UINT16(5, 1113),
	[SYSCALL_OR_NUM(143, SYS_flock)]	 = MAKE_UINT16(2, 1120),
	[SYSCALL_OR_NUM(144, SYS_msync)]	 = MAKE_UINT16(3, 1126),
	[SYSCALL_OR_NUM(145, SYS_readv)]	 = MAKE_UINT16(3, 1132),
	[SYSCALL_OR_NUM(146, SYS_writev)]	 = MAKE_UINT16(3, 1138),
	[SYSCALL_OR_NUM(147, SYS_getsid)]	 = MAKE_UINT16(1, 1145),
	[SYSCALL_OR_NUM(148, SYS_fdatasync)]	 = MAKE_UINT16(1, 1152),
	[SYSCALL_OR_NUM(149, SYS__sysctl)]	 = MAKE_UINT16(1, 1162),
	[SYSCALL_OR_NUM(150, SYS_mlock)]	 = MAKE_UINT16(2, 1170),
	[SYSCALL_OR_NUM(151, SYS_munlock)]	 = MAKE_UINT16(2, 1176),
	[SYSCALL_OR_NUM(152, SYS_mlockall)]	 = MAKE_UINT16(1, 1184),
	[SYSCALL_OR_NUM(153, SYS_munlockall)]	 = MAKE_UINT16(0, 1193),
	[SYSCALL_OR_NUM(154, SYS_sched_setparam)]	 = MAKE_UINT16(0, 1204),
	[SYSCALL_OR_NUM(155, SYS_sched_getparam)]	 = MAKE_UINT16(2, 1219),
	[SYSCALL_OR_NUM(156, SYS_sched_setscheduler)]	 = MAKE_UINT16(3, 1234),
	[SYSCALL_OR_NUM(157, SYS_sched_getscheduler)]	 = MAKE_UINT16(1, 1253),
	[SYSCALL_OR_NUM(158, SYS_sched_yield)]	 = MAKE_UINT16(0, 1272),
	[SYSCALL_OR_NUM(159, SYS_sched_get_priority_max)]	 = MAKE_UINT16(1, 1284),
	[SYSCALL_OR_NUM(160, SYS_sched_get_priority_min)]	 = MAKE_UINT16(1, 1307),
	[SYSCALL_OR_NUM(161, SYS_sched_rr_get_interval)]	 = MAKE_UINT16(2, 1330),
	[SYSCALL_OR_NUM(162, SYS_nanosleep)]	 = MAKE_UINT16(2, 1352),
	[SYSCALL_OR_NUM(163, SYS_mremap)]	 = MAKE_UINT16(5, 1362),
	[SYSCALL_OR_NUM(164, SYS_setresuid)]	 = MAKE_UINT16(3, 1369),
	[SYSCALL_OR_NUM(165, SYS_getresuid)]	 = MAKE_UINT16(3, 1379),
	[SYSCALL_OR_NUM(166, SYS_vm86)]	 = MAKE_UINT16(5, 1389),
	[SYSCALL_OR_NUM(167, SYS_query_module)]	 = MAKE_UINT16(5, 1394),
	[SYSCALL_OR_NUM(168, SYS_poll)]	 = MAKE_UINT16(3, 1407),
	[SYSCALL_OR_NUM(169, SYS_nfsservctl)]	 = MAKE_UINT16(3, 1412),
	[SYSCALL_OR_NUM(170, SYS_setresgid)]	 = MAKE_UINT16(3, 1423),
	[SYSCALL_OR_NUM(171, SYS_getresgid)]	 = MAKE_UINT16(3, 1433),
	[SYSCALL_OR_NUM(172, SYS_prctl)]	 = MAKE_UINT16(5, 1443),
	[SYSCALL_OR_NUM(173, SYS_rt_sigreturn)]	 = MAKE_UINT16(0, 1449),
	[SYSCALL_OR_NUM(174, SYS_rt_sigaction)]	 = MAKE_UINT16(4, 1462),
	[SYSCALL_OR_NUM(175, SYS_rt_sigprocmask)]	 = MAKE_UINT16(4, 1475),
	[SYSCALL_OR_NUM(176, SYS_rt_sigpending)]	 = MAKE_UINT16(2, 1490),
	[SYSCALL_OR_NUM(177, SYS_rt_sigtimedwait)]	 = MAKE_UINT16(4, 1504),
	[SYSCALL_OR_NUM(178, SYS_rt_sigqueueinfo)]	 = MAKE_UINT16(3, 1520),
	[SYSCALL_OR_NUM(179, SYS_rt_sigsuspend)]	 = MAKE_UINT16(2, 1536),
	[SYSCALL_OR_NUM(180, SYS_pread)]	 = MAKE_UINT16(6, 1550),
	[SYSCALL_OR_NUM(181, SYS_pwrite)]	 = MAKE_UINT16(6, 1556),
	[SYSCALL_OR_NUM(182, SYS_chown)]	 = MAKE_UINT16(3, 1563),
	[SYSCALL_OR_NUM(183, SYS_getcwd)]	 = MAKE_UINT16(2, 1569),
	[SYSCALL_OR_NUM(184, SYS_capget)]	 = MAKE_UINT16(2, 1576),
	[SYSCALL_OR_NUM(185, SYS_capset)]	 = MAKE_UINT16(2, 1583),
	[SYSCALL_OR_NUM(186, SYS_sigaltstack)]	 = MAKE_UINT16(2, 1590),
	[SYSCALL_OR_NUM(187, SYS_sendfile)]	 = MAKE_UINT16(4, 1602),
	[SYSCALL_OR_NUM(188, SYS_getpmsg)]	 = MAKE_UINT16(5, 1611),
	[SYSCALL_OR_NUM(189, SYS_putpmsg)]	 = MAKE_UINT16(5, 1619),
	[SYSCALL_OR_NUM(190, SYS_vfork)]	 = MAKE_UINT16(0, 1627),
	[SYSCALL_OR_NUM(191, SYS_getrlimit)]	 = MAKE_UINT16(2, 1633),
	[SYSCALL_OR_NUM(192, SYS_mmap2)]	 = MAKE_UINT16(6, 1643),
	[SYSCALL_OR_NUM(193, SYS_truncate64)]	 = MAKE_UINT16(4, 1649),
	[SYSCALL_OR_NUM(194, SYS_ftruncate64)]	 = MAKE_UINT16(4, 1660),
	[SYSCALL_OR_NUM(195, SYS_stat64)]	 = MAKE_UINT16(2, 1672),
	[SYSCALL_OR_NUM(196, SYS_lstat64)]	 = MAKE_UINT16(2, 1679),
	[SYSCALL_OR_NUM(197, SYS_fstat64)]	 = MAKE_UINT16(2, 1687),
	[SYSCALL_OR_NUM(198, SYS_lchown32)]	 = MAKE_UINT16(3, 1695),
	[SYSCALL_OR_NUM(199, SYS_getuid32)]	 = MAKE_UINT16(0, 1704),
	[SYSCALL_OR_NUM(200, SYS_getgid32)]	 = MAKE_UINT16(0, 1713),
	[SYSCALL_OR_NUM(201, SYS_geteuid32)]	 = MAKE_UINT16(0, 1722),
	[SYSCALL_OR_NUM(202, SYS_getegid32)]	 = MAKE_UINT16(0, 1732),
	[SYSCALL_OR_NUM(203, SYS_setreuid32)]	 = MAKE_UINT16(2, 1742),
	[SYSCALL_OR_NUM(204, SYS_setregid32)]	 = MAKE_UINT16(2, 1753),
	[SYSCALL_OR_NUM(205, SYS_getgroups32)]	 = MAKE_UINT16(2, 1764),
	[SYSCALL_OR_NUM(206, SYS_setgroups32)]	 = MAKE_UINT16(2, 1776),
	[SYSCALL_OR_NUM(207, SYS_fchown32)]	 = MAKE_UINT16(3, 1788),
	[SYSCALL_OR_NUM(208, SYS_setresuid32)]	 = MAKE_UINT16(3, 1797),
	[SYSCALL_OR_NUM(209, SYS_getresuid32)]	 = MAKE_UINT16(3, 1809),
	[SYSCALL_OR_NUM(210, SYS_setresgid32)]	 = MAKE_UINT16(3, 1821),
	[SYSCALL_OR_NUM(211, SYS_getresgid32)]	 = MAKE_UINT16(3, 1833),
	[SYSCALL_OR_NUM(212, SYS_chown32)]	 = MAKE_UINT16(3, 1845),
	[SYSCALL_OR_NUM(213, SYS_setuid32)]	 = MAKE_UINT16(1, 1853),
	[SYSCALL_OR_NUM(214, SYS_setgid32)]	 = MAKE_UINT16(1, 1862),
	[SYSCALL_OR_NUM(215, SYS_setfsuid32)]	 = MAKE_UINT16(1, 1871),
	[SYSCALL_OR_NUM(216, SYS_setfsgid32)]	 = MAKE_UINT16(1, 1882),
	[SYSCALL_OR_NUM(217, SYS_getdents64)]	 = MAKE_UINT16(3, 1893),
	[SYSCALL_OR_NUM(218, SYS_pivot_root)]	 = MAKE_UINT16(2, 1904),
	[SYSCALL_OR_NUM(219, SYS_mincore)]	 = MAKE_UINT16(3, 1915),
	[SYSCALL_OR_NUM(220, SYS_madvise)]	 = MAKE_UINT16(3, 1923),
	[SYSCALL_OR_NUM(221, SYS_fcntl64)]	 = MAKE_UINT16(3, 1931),
	[SYSCALL_OR_NUM(224, SYS_gettid)]	 = MAKE_UINT16(0, 1939),
	[SYSCALL_OR_NUM(225, SYS_readahead)]	 = MAKE_UINT16(5, 1946),
	[SYSCALL_OR_NUM(226, SYS_setxattr)]	 = MAKE_UINT16(5, 1956),
	[SYSCALL_OR_NUM(227, SYS_lsetxattr)]	 = MAKE_UINT16(5, 1965),
	[SYSCALL_OR_NUM(228, SYS_fsetxattr)]	 = MAKE_UINT16(5, 1975),
	[SYSCALL_OR_NUM(229, SYS_getxattr)]	 = MAKE_UINT16(4, 1985),
	[SYSCALL_OR_NUM(230, SYS_lgetxattr)]	 = MAKE_UINT16(4, 1994),
	[SYSCALL_OR_NUM(231, SYS_fgetxattr)]	 = MAKE_UINT16(4, 2004),
	[SYSCALL_OR_NUM(232, SYS_listxattr)]	 = MAKE_UINT16(3, 2014),
	[SYSCALL_OR_NUM(233, SYS_llistxattr)]	 = MAKE_UINT16(3, 2024),
	[SYSCALL_OR_NUM(234, SYS_flistxattr)]	 = MAKE_UINT16(3, 2035),
	[SYSCALL_OR_NUM(235, SYS_removexattr)]	 = MAKE_UINT16(2, 2046),
	[SYSCALL_OR_NUM(236, SYS_lremovexattr)]	 = MAKE_UINT16(2, 2058),
	[SYSCALL_OR_NUM(237, SYS_fremovexattr)]	 = MAKE_UINT16(2, 2071),
	[SYSCALL_OR_NUM(238, SYS_tkill)]	 = MAKE_UINT16(2, 2084),
	[SYSCALL_OR_NUM(239, SYS_sendfile64)]	 = MAKE_UINT16(4, 2090),
	[SYSCALL_OR_NUM(240, SYS_futex)]	 = MAKE_UINT16(6, 2101),
	[SYSCALL_OR_NUM(241, SYS_sched_setaffinity)]	 = MAKE_UINT16(3, 2107),
	[SYSCALL_OR_NUM(242, SYS_sched_getaffinity)]	 = MAKE_UINT16(3, 2125),
	[SYSCALL_OR_NUM(243, SYS_io_setup)]	 = MAKE_UINT16(2, 2143),
	[SYSCALL_OR_NUM(244, SYS_io_destroy)]	 = MAKE_UINT16(1, 2152),
	[SYSCALL_OR_NUM(245, SYS_io_getevents)]	 = MAKE_UINT16(5, 2163),
	[SYSCALL_OR_NUM(246, SYS_io_submit)]	 = MAKE_UINT16(3, 2176),
	[SYSCALL_OR_NUM(247, SYS_io_cancel)]	 = MAKE_UINT16(3, 2186),
	[SYSCALL_OR_NUM(248, SYS_exit_group)]	 = MAKE_UINT16(1, 2196),
	[SYSCALL_OR_NUM(249, SYS_lookup_dcookie)]	 = MAKE_UINT16(4, 2207),
	[SYSCALL_OR_NUM(250, SYS_epoll_create)]	 = MAKE_UINT16(1, 2222),
	[SYSCALL_OR_NUM(251, SYS_epoll_ctl)]	 = MAKE_UINT16(4, 2235),
	[SYSCALL_OR_NUM(252, SYS_epoll_wait)]	 = MAKE_UINT16(4, 2245),
	[SYSCALL_OR_NUM(253, SYS_remap_file_pages)]	 = MAKE_UINT16(5, 2256),
	[SYSCALL_OR_NUM(256, SYS_set_tid_address)]	 = MAKE_UINT16(1, 2273),
	[SYSCALL_OR_NUM(257, SYS_timer_create)]	 = MAKE_UINT16(3, 2289),
	[SYSCALL_OR_NUM(258, SYS_timer_settime)]	 = MAKE_UINT16(4, 2302),
	[SYSCALL_OR_NUM(259, SYS_timer_gettime)]	 = MAKE_UINT16(2, 2316),
	[SYSCALL_OR_NUM(260, SYS_timer_getoverrun)]	 = MAKE_UINT16(1, 2330),
	[SYSCALL_OR_NUM(261, SYS_timer_delete)]	 = MAKE_UINT16(1, 2347),
	[SYSCALL_OR_NUM(262, SYS_clock_settime)]	 = MAKE_UINT16(2, 2360),
	[SYSCALL_OR_NUM(263, SYS_clock_gettime)]	 = MAKE_UINT16(2, 2374),
	[SYSCALL_OR_NUM(264, SYS_clock_getres)]	 = MAKE_UINT16(2, 2388),
	[SYSCALL_OR_NUM(265, SYS_clock_nanosleep)]	 = MAKE_UINT16(4, 2401),
	[SYSCALL_OR_NUM(266, SYS_statfs64)]	 = MAKE_UINT16(3, 2417),
	[SYSCALL_OR_NUM(267, SYS_fstatfs64)]	 = MAKE_UINT16(3, 2426),
	[SYSCALL_OR_NUM(268, SYS_tgkill)]	 = MAKE_UINT16(3, 2436),
	[SYSCALL_OR_NUM(269, SYS_utimes)]	 = MAKE_UINT16(2, 2443),
	[SYSCALL_OR_NUM(270, SYS_fadvise64_64)]	 = MAKE_UINT16(6, 2450),
	[SYSCALL_OR_NUM(271, SYS_pciconfig_iobase)]	 = MAKE_UINT16(5, 2463),
	[SYSCALL_OR_NUM(272, SYS_pciconfig_read)]	 = MAKE_UINT16(5, 2480),
	[SYSCALL_OR_NUM(273, SYS_pciconfig_write)]	 = MAKE_UINT16(5, 2495),
	[SYSCALL_OR_NUM(274, SYS_mq_open)]	 = MAKE_UINT16(4, 2511),
	[SYSCALL_OR_NUM(275, SYS_mq_unlink)]	 = MAKE_UINT16(1, 2519),
	[SYSCALL_OR_NUM(276, SYS_mq_timedsend)]	 = MAKE_UINT16(5, 2529),
	[SYSCALL_OR_NUM(277, SYS_mq_timedreceive)]	 = MAKE_UINT16(5, 2542),
	[SYSCALL_OR_NUM(278, SYS_mq_notify)]	 = MAKE_UINT16(2, 2558),
	[SYSCALL_OR_NUM(279, SYS_mq_getsetattr)]	 = MAKE_UINT16(3, 2568),
	[SYSCALL_OR_NUM(280, SYS_waitid)]	 = MAKE_UINT16(5, 2582),
	[SYSCALL_OR_NUM(281, SYS_socket)]	 = MAKE_UINT16(3, 2589),
	[SYSCALL_OR_NUM(282, SYS_bind)]	 = MAKE_UINT16(3, 2596),
	[SYSCALL_OR_NUM(283, SYS_connect)]	 = MAKE_UINT16(3, 2601),
	[SYSCALL_OR_NUM(284, SYS_listen)]	 = MAKE_UINT16(2, 2609),
	[SYSCALL_OR_NUM(285, SYS_accept)]	 = MAKE_UINT16(3, 2616),
	[SYSCALL_OR_NUM(286, SYS_getsockname)]	 = MAKE_UINT16(3, 2623),
	[SYSCALL_OR_NUM(287, SYS_getpeername)]	 = MAKE_UINT16(3, 2635),
	[SYSCALL_OR_NUM(288, SYS_socketpair)]	 = MAKE_UINT16(4, 2647),
	[SYSCALL_OR_NUM(289, SYS_send)]	 = MAKE_UINT16(4, 2658),
	[SYSCALL_OR_NUM(290, SYS_sendto)]	 = MAKE_UINT16(6, 2663),
	[SYSCALL_OR_NUM(291, SYS_recv)]	 = MAKE_UINT16(4, 2670),
	[SYSCALL_OR_NUM(292, SYS_recvfrom)]	 = MAKE_UINT16(6, 2675),
	[SYSCALL_OR_NUM(293, SYS_shutdown)]	 = MAKE_UINT16(2, 2684),
	[SYSCALL_OR_NUM(294, SYS_setsockopt)]	 = MAKE_UINT16(5, 2693),
	[SYSCALL_OR_NUM(295, SYS_getsockopt)]	 = MAKE_UINT16(5, 2704),
	[SYSCALL_OR_NUM(296, SYS_sendmsg)]	 = MAKE_UINT16(3, 2715),
	[SYSCALL_OR_NUM(297, SYS_recvmsg)]	 = MAKE_UINT16(3, 2723),
	[SYSCALL_OR_NUM(298, SYS_semop)]	 = MAKE_UINT16(4, 2731),
	[SYSCALL_OR_NUM(299, SYS_semget)]	 = MAKE_UINT16(4, 2737),
	[SYSCALL_OR_NUM(300, SYS_semctl)]	 = MAKE_UINT16(4, 2744),
	[SYSCALL_OR_NUM(301, SYS_msgsnd)]	 = MAKE_UINT16(4, 2751),
	[SYSCALL_OR_NUM(302, SYS_msgrcv)]	 = MAKE_UINT16(4, 2758),
	[SYSCALL_OR_NUM(303, SYS_msgget)]	 = MAKE_UINT16(4, 2765),
	[SYSCALL_OR_NUM(304, SYS_msgctl)]	 = MAKE_UINT16(4, 2772),
	[SYSCALL_OR_NUM(305, SYS_shmat)]	 = MAKE_UINT16(4, 2779),
	[SYSCALL_OR_NUM(306, SYS_shmdt)]	 = MAKE_UINT16(4, 2785),
	[SYSCALL_OR_NUM(307, SYS_shmget)]	 = MAKE_UINT16(4, 2791),
	[SYSCALL_OR_NUM(308, SYS_shmctl)]	 = MAKE_UINT16(4, 2798),
	[SYSCALL_OR_NUM(309, SYS_add_key)]	 = MAKE_UINT16(5, 2805),
	[SYSCALL_OR_NUM(310, SYS_request_key)]	 = MAKE_UINT16(4, 2813),
	[SYSCALL_OR_NUM(311, SYS_keyctl)]	 = MAKE_UINT16(5, 2825),
	[SYSCALL_OR_NUM(312, SYS_semtimedop)]	 = MAKE_UINT16(5, 2832),
	[SYSCALL_OR_NUM(313, SYS_vserver)]	 = MAKE_UINT16(5, 2843),
	[SYSCALL_OR_NUM(314, SYS_ioprio_set)]	 = MAKE_UINT16(3, 2851),
	[SYSCALL_OR_NUM(315, SYS_ioprio_get)]	 = MAKE_UINT16(2, 2862),
	[SYSCALL_OR_NUM(316, SYS_inotify_init)]	 = MAKE_UINT16(0, 2873),
	[SYSCALL_OR_NUM(317, SYS_inotify_add_watch)]	 = MAKE_UINT16(3, 2886),
	[SYSCALL_OR_NUM(318, SYS_inotify_rm_watch)]	 = MAKE_UINT16(2, 2904),
	[SYSCALL_OR_NUM(319, SYS_mbind)]	 = MAKE_UINT16(6, 2921),
	[SYSCALL_OR_NUM(320, SYS_set_mempolicy)]	 = MAKE_UINT16(3, 2927),
	[SYSCALL_OR_NUM(321, SYS_get_mempolicy)]	 = MAKE_UINT16(5, 2941),
	[SYSCALL_OR_NUM(322, SYS_openat)]	 = MAKE_UINT16(4, 2955),
	[SYSCALL_OR_NUM(323, SYS_mkdirat)]	 = MAKE_UINT16(3, 2962),
	[SYSCALL_OR_NUM(324, SYS_mknodat)]	 = MAKE_UINT16(4, 2970),
	[SYSCALL_OR_NUM(325, SYS_fchownat)]	 = MAKE_UINT16(5, 2978),
	[SYSCALL_OR_NUM(326, SYS_futimesat)]	 = MAKE_UINT16(3, 2987),
	[SYSCALL_OR_NUM(327, SYS_newfstatat)]	 = MAKE_UINT16(4, 2997),
	[SYSCALL_OR_NUM(328, SYS_unlinkat)]	 = MAKE_UINT16(3, 3008),
	[SYSCALL_OR_NUM(329, SYS_renameat)]	 = MAKE_UINT16(4, 3017),
	[SYSCALL_OR_NUM(330, SYS_linkat)]	 = MAKE_UINT16(5, 3026),
	[SYSCALL_OR_NUM(331, SYS_symlinkat)]	 = MAKE_UINT16(3, 3033),
	[SYSCALL_OR_NUM(332, SYS_readlinkat)]	 = MAKE_UINT16(4, 3043),
	[SYSCALL_OR_NUM(333, SYS_fchmodat)]	 = MAKE_UINT16(3, 3054),
	[SYSCALL_OR_NUM(334, SYS_faccessat)]	 = MAKE_UINT16(3, 3063),
	[SYSCALL_OR_NUM(335, SYS_pselect6)]	 = MAKE_UINT16(6, 3073),
	[SYSCALL_OR_NUM(336, SYS_ppoll)]	 = MAKE_UINT16(5, 3082),
	[SYSCALL_OR_NUM(337, SYS_unshare)]	 = MAKE_UINT16(1, 3088),
	[SYSCALL_OR_NUM(338, SYS_set_robust_list)]	 = MAKE_UINT16(2, 3096),
	[SYSCALL_OR_NUM(339, SYS_get_robust_list)]	 = MAKE_UINT16(3, 3112),
	[SYSCALL_OR_NUM(340, SYS_splice)]	 = MAKE_UINT16(6, 3128),
	[SYSCALL_OR_NUM(342, SYS_tee)]	 = MAKE_UINT16(4, 3135),
	[SYSCALL_OR_NUM(343, SYS_vmsplice)]	 = MAKE_UINT16(4, 3139),
	[SYSCALL_OR_NUM(344, SYS_move_pages)]	 = MAKE_UINT16(6, 3148),
	[SYSCALL_OR_NUM(345, SYS_getcpu)]	 = MAKE_UINT16(3, 3159),
	[SYSCALL_OR_NUM(346, SYS_epoll_pwait)]	 = MAKE_UINT16(6, 3166),
	[SYSCALL_OR_NUM(347, SYS_kexec_load)]	 = MAKE_UINT16(4, 3178),
	[SYSCALL_OR_NUM(348, SYS_utimensat)]	 = MAKE_UINT16(4, 3189),
	[SYSCALL_OR_NUM(349, SYS_signalfd)]	 = MAKE_UINT16(3, 3199),
	[SYSCALL_OR_NUM(350, SYS_timerfd)]	 = MAKE_UINT16(4, 3208),
	[SYSCALL_OR_NUM(351, SYS_eventfd)]	 = MAKE_UINT16(1, 3216),
	[SYSCALL_OR_NUM(352, SYS_fallocate)]	 = MAKE_UINT16(6, 3224),
	[SYSCALL_OR_NUM(353, SYS_timerfd_settime)]	 = MAKE_UINT16(4, 3234),
	[SYSCALL_OR_NUM(354, SYS_timerfd_gettime)]	 = MAKE_UINT16(2, 3250),
	[SYSCALL_OR_NUM(355, SYS_signalfd4)]	 = MAKE_UINT16(4, 3266),
	[SYSCALL_OR_NUM(356, SYS_eventfd2)]	 = MAKE_UINT16(2, 3276),
	[SYSCALL_OR_NUM(357, SYS_epoll_create1)]	 = MAKE_UINT16(1, 3285),
	[SYSCALL_OR_NUM(358, SYS_dup3)]	 = MAKE_UINT16(3, 3299),
	[SYSCALL_OR_NUM(359, SYS_pipe2)]	 = MAKE_UINT16(2, 3304),
	[SYSCALL_OR_NUM(360, SYS_inotify_init1)]	 = MAKE_UINT16(1, 3310),
	[SYSCALL_OR_NUM(361, SYS_preadv)]	 = MAKE_UINT16(6, 3324),
	[SYSCALL_OR_NUM(362, SYS_pwritev)]	 = MAKE_UINT16(6, 3331),
	[SYSCALL_OR_NUM(363, SYS_rt_tgsigqueueinfo)]	 = MAKE_UINT16(4, 3339),
	[SYSCALL_OR_NUM(364, SYS_perf_event_open)]	 = MAKE_UINT16(5, 3357),
	[SYSCALL_OR_NUM(365, SYS_recvmmsg)]	 = MAKE_UINT16(5, 3373),
	[SYSCALL_OR_NUM(366, SYS_accept4)]	 = MAKE_UINT16(4, 3382),
	[SYSCALL_OR_NUM(367, SYS_fanotify_init)]	 = MAKE_UINT16(2, 3390),
	[SYSCALL_OR_NUM(368, SYS_fanotify_mark)]	 = MAKE_UINT16(5, 3404),
	[SYSCALL_OR_NUM(369, SYS_prlimit64)]	 = MAKE_UINT16(4, 3418),
	[SYSCALL_OR_NUM(370, SYS_name_to_handle_at)]	 = MAKE_UINT16(5, 3428),
	[SYSCALL_OR_NUM(371, SYS_open_by_handle_at)]	 = MAKE_UINT16(3, 3446),
	[SYSCALL_OR_NUM(372, SYS_clock_adjtime)]	 = MAKE_UINT16(2, 3464),
	[SYSCALL_OR_NUM(373, SYS_syncfs)]	 = MAKE_UINT16(1, 3478),
	[SYSCALL_OR_NUM(374, SYS_sendmmsg)]	 = MAKE_UINT16(4, 3485),
	[SYSCALL_OR_NUM(375, SYS_setns)]	 = MAKE_UINT16(2, 3494),
	[SYSCALL_OR_NUM(376, SYS_process_vm_readv)]	 = MAKE_UINT16(6, 3500),
	[SYSCALL_OR_NUM(377, SYS_process_vm_writev)]	 = MAKE_UINT16(6, 3517),
};

static const char syscallnames[] = "\0"
"restart_syscall\0"
"exit\0"
"fork\0"
"read\0"
"write\0"
"open\0"
"close\0"
"waitpid\0"
"creat\0"
"link\0"
"unlink\0"
"execve\0"
"chdir\0"
"time\0"
"mknod\0"
"chmod\0"
"lchown\0"
"break\0"
"oldstat\0"
"lseek\0"
"getpid\0"
"mount\0"
"oldumount\0"
"setuid\0"
"getuid\0"
"stime\0"
"ptrace\0"
"alarm\0"
"oldfstat\0"
"pause\0"
"utime\0"
"stty\0"
"gtty\0"
"access\0"
"nice\0"
"ftime\0"
"sync\0"
"kill\0"
"rename\0"
"mkdir\0"
"rmdir\0"
"dup\0"
"pipe\0"
"times\0"
"prof\0"
"brk\0"
"setgid\0"
"getgid\0"
"signal\0"
"geteuid\0"
"getegid\0"
"acct\0"
"umount\0"
"lock\0"
"ioctl\0"
"fcntl\0"
"mpx\0"
"setpgid\0"
"ulimit\0"
"oldolduname\0"
"umask\0"
"chroot\0"
"ustat\0"
"dup2\0"
"getppid\0"
"getpgrp\0"
"setsid\0"
"sigaction\0"
"sgetmask\0"
"ssetmask\0"
"setreuid\0"
"setregid\0"
"sigsuspend\0"
"sigpending\0"
"sethostname\0"
"setrlimit\0"
"old_getrlimit\0"
"getrusage\0"
"gettimeofday\0"
"settimeofday\0"
"getgroups\0"
"setgroups\0"
"oldselect\0"
"symlink\0"
"oldlstat\0"
"readlink\0"
"uselib\0"
"swapon\0"
"reboot\0"
"readdir\0"
"old_mmap\0"
"munmap\0"
"truncate\0"
"ftruncate\0"
"fchmod\0"
"fchown\0"
"getpriority\0"
"setpriority\0"
"profil\0"
"statfs\0"
"fstatfs\0"
"ioperm\0"
"socketcall\0"
"syslog\0"
"setitimer\0"
"getitimer\0"
"stat\0"
"lstat\0"
"fstat\0"
"olduname\0"
"iopl\0"
"vhangup\0"
"idle\0"
"syscall\0"
"wait4\0"
"swapoff\0"
"sysinfo\0"
"ipc\0"
"fsync\0"
"sigreturn\0"
"clone\0"
"setdomainname\0"
"uname\0"
"modify_ldt\0"
"adjtimex\0"
"mprotect\0"
"sigprocmask\0"
"create_module\0"
"init_module\0"
"delete_module\0"
"get_kernel_syms\0"
"quotactl\0"
"getpgid\0"
"fchdir\0"
"bdflush\0"
"sysfs\0"
"personality\0"
"afs_syscall\0"
"setfsuid\0"
"setfsgid\0"
"_llseek\0"
"getdents\0"
"select\0"
"flock\0"
"msync\0"
"readv\0"
"writev\0"
"getsid\0"
"fdatasync\0"
"_sysctl\0"
"mlock\0"
"munlock\0"
"mlockall\0"
"munlockall\0"
"sched_setparam\0"
"sched_getparam\0"
"sched_setscheduler\0"
"sched_getscheduler\0"
"sched_yield\0"
"sched_get_priority_max\0"
"sched_get_priority_min\0"
"sched_rr_get_interval\0"
"nanosleep\0"
"mremap\0"
"setresuid\0"
"getresuid\0"
"vm86\0"
"query_module\0"
"poll\0"
"nfsservctl\0"
"setresgid\0"
"getresgid\0"
"prctl\0"
"rt_sigreturn\0"
"rt_sigaction\0"
"rt_sigprocmask\0"
"rt_sigpending\0"
"rt_sigtimedwait\0"
"rt_sigqueueinfo\0"
"rt_sigsuspend\0"
"pread\0"
"pwrite\0"
"chown\0"
"getcwd\0"
"capget\0"
"capset\0"
"sigaltstack\0"
"sendfile\0"
"getpmsg\0"
"putpmsg\0"
"vfork\0"
"getrlimit\0"
"mmap2\0"
"truncate64\0"
"ftruncate64\0"
"stat64\0"
"lstat64\0"
"fstat64\0"
"lchown32\0"
"getuid32\0"
"getgid32\0"
"geteuid32\0"
"getegid32\0"
"setreuid32\0"
"setregid32\0"
"getgroups32\0"
"setgroups32\0"
"fchown32\0"
"setresuid32\0"
"getresuid32\0"
"setresgid32\0"
"getresgid32\0"
"chown32\0"
"setuid32\0"
"setgid32\0"
"setfsuid32\0"
"setfsgid32\0"
"getdents64\0"
"pivot_root\0"
"mincore\0"
"madvise\0"
"fcntl64\0"
"gettid\0"
"readahead\0"
"setxattr\0"
"lsetxattr\0"
"fsetxattr\0"
"getxattr\0"
"lgetxattr\0"
"fgetxattr\0"
"listxattr\0"
"llistxattr\0"
"flistxattr\0"
"removexattr\0"
"lremovexattr\0"
"fremovexattr\0"
"tkill\0"
"sendfile64\0"
"futex\0"
"sched_setaffinity\0"
"sched_getaffinity\0"
"io_setup\0"
"io_destroy\0"
"io_getevents\0"
"io_submit\0"
"io_cancel\0"
"exit_group\0"
"lookup_dcookie\0"
"epoll_create\0"
"epoll_ctl\0"
"epoll_wait\0"
"remap_file_pages\0"
"set_tid_address\0"
"timer_create\0"
"timer_settime\0"
"timer_gettime\0"
"timer_getoverrun\0"
"timer_delete\0"
"clock_settime\0"
"clock_gettime\0"
"clock_getres\0"
"clock_nanosleep\0"
"statfs64\0"
"fstatfs64\0"
"tgkill\0"
"utimes\0"
"fadvise64_64\0"
"pciconfig_iobase\0"
"pciconfig_read\0"
"pciconfig_write\0"
"mq_open\0"
"mq_unlink\0"
"mq_timedsend\0"
"mq_timedreceive\0"
"mq_notify\0"
"mq_getsetattr\0"
"waitid\0"
"socket\0"
"bind\0"
"connect\0"
"listen\0"
"accept\0"
"getsockname\0"
"getpeername\0"
"socketpair\0"
"send\0"
"sendto\0"
"recv\0"
"recvfrom\0"
"shutdown\0"
"setsockopt\0"
"getsockopt\0"
"sendmsg\0"
"recvmsg\0"
"semop\0"
"semget\0"
"semctl\0"
"msgsnd\0"
"msgrcv\0"
"msgget\0"
"msgctl\0"
"shmat\0"
"shmdt\0"
"shmget\0"
"shmctl\0"
"add_key\0"
"request_key\0"
"keyctl\0"
"semtimedop\0"
"vserver\0"
"ioprio_set\0"
"ioprio_get\0"
"inotify_init\0"
"inotify_add_watch\0"
"inotify_rm_watch\0"
"mbind\0"
"set_mempolicy\0"
"get_mempolicy\0"
"openat\0"
"mkdirat\0"
"mknodat\0"
"fchownat\0"
"futimesat\0"
"newfstatat\0"
"unlinkat\0"
"renameat\0"
"linkat\0"
"symlinkat\0"
"readlinkat\0"
"fchmodat\0"
"faccessat\0"
"pselect6\0"
"ppoll\0"
"unshare\0"
"set_robust_list\0"
"get_robust_list\0"
"splice\0"
"tee\0"
"vmsplice\0"
"move_pages\0"
"getcpu\0"
"epoll_pwait\0"
"kexec_load\0"
"utimensat\0"
"signalfd\0"
"timerfd\0"
"eventfd\0"
"fallocate\0"
"timerfd_settime\0"
"timerfd_gettime\0"
"signalfd4\0"
"eventfd2\0"
"epoll_create1\0"
"dup3\0"
"pipe2\0"
"inotify_init1\0"
"preadv\0"
"pwritev\0"
"rt_tgsigqueueinfo\0"
"perf_event_open\0"
"recvmmsg\0"
"accept4\0"
"fanotify_init\0"
"fanotify_mark\0"
"prlimit64\0"
"name_to_handle_at\0"
"open_by_handle_at\0"
"clock_adjtime\0"
"syncfs\0"
"sendmmsg\0"
"setns\0"
"process_vm_readv\0"
"process_vm_writev\0"
"";
/*
longest string: 22
total concatenated string length: 3949
pointer overhead: 3344
strings + overhead: 7293
total size aligned to max strlen 9614
*/
