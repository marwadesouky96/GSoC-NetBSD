/*
 * MACHINE GENERATED: DO NOT EDIT
 *
 * devsw.c, from "MYKERNEL"
 */

#include <sys/param.h>
#include <sys/conf.h>

/* device switch table for block device */
extern const struct bdevsw cons_bdevsw;
extern const struct bdevsw ctty_bdevsw;
extern const struct bdevsw mem_bdevsw;
extern const struct bdevsw wd_bdevsw;
extern const struct bdevsw swap_bdevsw;
extern const struct bdevsw pts_bdevsw;
extern const struct bdevsw ptc_bdevsw;
extern const struct bdevsw log_bdevsw;
extern const struct bdevsw com_bdevsw;
extern const struct bdevsw fd_bdevsw;
extern const struct bdevsw sd_bdevsw;
extern const struct bdevsw st_bdevsw;
extern const struct bdevsw cd_bdevsw;
extern const struct bdevsw lpt_bdevsw;
extern const struct bdevsw ch_bdevsw;
extern const struct bdevsw ccd_bdevsw;
extern const struct bdevsw ss_bdevsw;
extern const struct bdevsw uk_bdevsw;
extern const struct bdevsw filedesc_bdevsw;
extern const struct bdevsw bpf_bdevsw;
extern const struct bdevsw md_bdevsw;
extern const struct bdevsw cy_bdevsw;
extern const struct bdevsw tun_bdevsw;
extern const struct bdevsw vnd_bdevsw;
extern const struct bdevsw audio_bdevsw;
extern const struct bdevsw ipl_bdevsw;
extern const struct bdevsw rnd_bdevsw;
extern const struct bdevsw wsdisplay_bdevsw;
extern const struct bdevsw wskbd_bdevsw;
extern const struct bdevsw wsmouse_bdevsw;
extern const struct bdevsw usb_bdevsw;
extern const struct bdevsw uhid_bdevsw;
extern const struct bdevsw ulpt_bdevsw;
extern const struct bdevsw midi_bdevsw;
extern const struct bdevsw sequencer_bdevsw;
extern const struct bdevsw vcoda_bdevsw;
extern const struct bdevsw scsibus_bdevsw;
extern const struct bdevsw raid_bdevsw;
extern const struct bdevsw esh_bdevsw;
extern const struct bdevsw ugen_bdevsw;
extern const struct bdevsw wsmux_bdevsw;
extern const struct bdevsw ucom_bdevsw;
extern const struct bdevsw sysmon_bdevsw;
extern const struct bdevsw ld_bdevsw;
extern const struct bdevsw urio_bdevsw;
extern const struct bdevsw bktr_bdevsw;
extern const struct bdevsw cz_bdevsw;
extern const struct bdevsw ses_bdevsw;
extern const struct bdevsw uscanner_bdevsw;
extern const struct bdevsw iop_bdevsw;
extern const struct bdevsw mlx_bdevsw;
extern const struct bdevsw clockctl_bdevsw;
extern const struct bdevsw cgd_bdevsw;
extern const struct bdevsw agp_bdevsw;
extern const struct bdevsw pci_bdevsw;
extern const struct bdevsw irframe_bdevsw;
extern const struct bdevsw ksyms_bdevsw;
extern const struct bdevsw wsfont_bdevsw;
extern const struct bdevsw mly_bdevsw;
extern const struct bdevsw joy_bdevsw;
extern const struct bdevsw cir_bdevsw;
extern const struct bdevsw radio_bdevsw;
extern const struct bdevsw dpt_bdevsw;
extern const struct bdevsw twe_bdevsw;
extern const struct bdevsw nsmb_bdevsw;
extern const struct bdevsw crypto_bdevsw;
extern const struct bdevsw fss_bdevsw;
extern const struct bdevsw ptm_bdevsw;
extern const struct bdevsw atabus_bdevsw;
extern const struct bdevsw drvctl_bdevsw;
extern const struct bdevsw dk_bdevsw;
extern const struct bdevsw tap_bdevsw;
extern const struct bdevsw veriexec_bdevsw;
extern const struct bdevsw fw_bdevsw;
extern const struct bdevsw ucycom_bdevsw;
extern const struct bdevsw utoppy_bdevsw;
extern const struct bdevsw bthub_bdevsw;
extern const struct bdevsw amr_bdevsw;
extern const struct bdevsw lockstat_bdevsw;
extern const struct bdevsw putter_bdevsw;
extern const struct bdevsw drm_bdevsw;
extern const struct bdevsw bio_bdevsw;
extern const struct bdevsw twa_bdevsw;
extern const struct bdevsw cpuctl_bdevsw;
extern const struct bdevsw pad_bdevsw;
extern const struct bdevsw video_bdevsw;
extern const struct bdevsw hdaudio_bdevsw;
extern const struct bdevsw uhso_bdevsw;
extern const struct bdevsw dtv_bdevsw;
extern const struct bdevsw iic_bdevsw;
extern const struct bdevsw tpm_bdevsw;
extern const struct bdevsw mfi_bdevsw;

const struct bdevsw *bdevsw0[] = {
	&wd_bdevsw,	//   0
	&swap_bdevsw,	//   1
	&fd_bdevsw,	//   2
	NULL,	//   3
	&sd_bdevsw,	//   4
	&st_bdevsw,	//   5
	&cd_bdevsw,	//   6
	NULL,	//   7
	NULL,	//   8
	NULL,	//   9
	NULL,	//  10
	NULL,	//  11
	NULL,	//  12
	NULL,	//  13
	&vnd_bdevsw,	//  14
	NULL,	//  15
	&ccd_bdevsw,	//  16
	&md_bdevsw,	//  17
	&raid_bdevsw,	//  18
	&ld_bdevsw,	//  19
	&cgd_bdevsw,	//  20
	NULL,	//  21
	NULL,	//  22
	NULL,	//  23
	NULL,	//  24
	NULL,	//  25
	NULL,	//  26
	NULL,	//  27
	NULL,	//  28
	NULL,	//  29
	NULL,	//  30
	NULL,	//  31
	NULL,	//  32
	NULL,	//  33
	NULL,	//  34
	NULL,	//  35
	NULL,	//  36
	NULL,	//  37
	NULL,	//  38
	NULL,	//  39
	NULL,	//  40
	NULL,	//  41
	NULL,	//  42
	NULL,	//  43
	NULL,	//  44
	NULL,	//  45
	NULL,	//  46
	NULL,	//  47
	NULL,	//  48
	NULL,	//  49
	NULL,	//  50
	NULL,	//  51
	NULL,	//  52
	NULL,	//  53
	NULL,	//  54
	NULL,	//  55
	NULL,	//  56
	NULL,	//  57
	NULL,	//  58
	NULL,	//  59
	NULL,	//  60
	NULL,	//  61
	NULL,	//  62
	NULL,	//  63
	NULL,	//  64
	NULL,	//  65
	NULL,	//  66
	NULL,	//  67
	NULL,	//  68
	NULL,	//  69
	NULL,	//  70
	NULL,	//  71
	NULL,	//  72
	NULL,	//  73
	NULL,	//  74
	NULL,	//  75
	NULL,	//  76
	NULL,	//  77
	NULL,	//  78
	NULL,	//  79
	NULL,	//  80
	NULL,	//  81
	NULL,	//  82
	NULL,	//  83
	NULL,	//  84
	NULL,	//  85
	NULL,	//  86
	NULL,	//  87
	NULL,	//  88
	NULL,	//  89
	NULL,	//  90
	NULL,	//  91
	NULL,	//  92
	NULL,	//  93
	NULL,	//  94
	NULL,	//  95
	NULL,	//  96
	NULL,	//  97
	NULL,	//  98
	NULL,	//  99
	NULL,	// 100
	NULL,	// 101
	NULL,	// 102
	NULL,	// 103
	NULL,	// 104
	NULL,	// 105
	NULL,	// 106
	NULL,	// 107
	NULL,	// 108
	NULL,	// 109
	NULL,	// 110
	NULL,	// 111
	NULL,	// 112
	NULL,	// 113
	NULL,	// 114
	NULL,	// 115
	NULL,	// 116
	NULL,	// 117
	NULL,	// 118
	NULL,	// 119
	NULL,	// 120
	NULL,	// 121
	NULL,	// 122
	NULL,	// 123
	NULL,	// 124
	NULL,	// 125
	NULL,	// 126
	NULL,	// 127
	NULL,	// 128
	NULL,	// 129
	NULL,	// 130
	NULL,	// 131
	NULL,	// 132
	NULL,	// 133
	NULL,	// 134
	NULL,	// 135
	NULL,	// 136
	NULL,	// 137
	NULL,	// 138
	NULL,	// 139
	NULL,	// 140
	NULL,	// 141
	NULL,	// 142
	NULL,	// 143
	NULL,	// 144
	NULL,	// 145
	NULL,	// 146
	NULL,	// 147
	NULL,	// 148
	NULL,	// 149
	NULL,	// 150
	NULL,	// 151
	NULL,	// 152
	NULL,	// 153
	NULL,	// 154
	NULL,	// 155
	NULL,	// 156
	NULL,	// 157
	NULL,	// 158
	NULL,	// 159
	NULL,	// 160
	NULL,	// 161
	NULL,	// 162
	&fss_bdevsw,	// 163
	NULL,	// 164
	NULL,	// 165
	NULL,	// 166
	NULL,	// 167
	&dk_bdevsw,	// 168
	NULL,	// 169
	NULL,	// 170
	NULL,	// 171
	NULL,	// 172
	NULL,	// 173
	NULL,	// 174
	NULL,	// 175
	NULL,	// 176
	NULL,	// 177
	NULL,	// 178
	NULL,	// 179
	NULL,	// 180
	NULL,	// 181
	NULL,	// 182
	NULL,	// 183
	NULL,	// 184
	NULL,	// 185
	NULL,	// 186
	NULL,	// 187
	NULL,	// 188
	NULL,	// 189
	NULL,	// 190
	NULL,	// 191
	NULL,	// 192
	NULL,	// 193
	NULL,	// 194
	NULL,	// 195
	NULL,	// 196
	NULL,	// 197
	NULL,	// 198
	NULL,	// 199
	NULL,	// 200
	NULL,	// 201
	NULL,	// 202
	NULL,	// 203
	NULL,	// 204
	NULL,	// 205
	NULL,	// 206
	NULL,	// 207
	NULL,	// 208
};

const struct bdevsw **bdevsw = bdevsw0;
const int sys_bdevsws = __arraycount(bdevsw0);
int max_bdevsws = __arraycount(bdevsw0);

/* device switch table for character device */
extern const struct cdevsw cons_cdevsw;
extern const struct cdevsw ctty_cdevsw;
extern const struct cdevsw mem_cdevsw;
extern const struct cdevsw wd_cdevsw;
extern const struct cdevsw swap_cdevsw;
extern const struct cdevsw pts_cdevsw;
extern const struct cdevsw ptc_cdevsw;
extern const struct cdevsw log_cdevsw;
extern const struct cdevsw com_cdevsw;
extern const struct cdevsw fd_cdevsw;
extern const struct cdevsw sd_cdevsw;
extern const struct cdevsw st_cdevsw;
extern const struct cdevsw cd_cdevsw;
extern const struct cdevsw lpt_cdevsw;
extern const struct cdevsw ch_cdevsw;
extern const struct cdevsw ccd_cdevsw;
extern const struct cdevsw ss_cdevsw;
extern const struct cdevsw uk_cdevsw;
extern const struct cdevsw filedesc_cdevsw;
extern const struct cdevsw bpf_cdevsw;
extern const struct cdevsw md_cdevsw;
extern const struct cdevsw cy_cdevsw;
extern const struct cdevsw tun_cdevsw;
extern const struct cdevsw vnd_cdevsw;
extern const struct cdevsw audio_cdevsw;
extern const struct cdevsw ipl_cdevsw;
extern const struct cdevsw rnd_cdevsw;
extern const struct cdevsw wsdisplay_cdevsw;
extern const struct cdevsw wskbd_cdevsw;
extern const struct cdevsw wsmouse_cdevsw;
extern const struct cdevsw usb_cdevsw;
extern const struct cdevsw uhid_cdevsw;
extern const struct cdevsw ulpt_cdevsw;
extern const struct cdevsw midi_cdevsw;
extern const struct cdevsw sequencer_cdevsw;
extern const struct cdevsw vcoda_cdevsw;
extern const struct cdevsw scsibus_cdevsw;
extern const struct cdevsw raid_cdevsw;
extern const struct cdevsw esh_cdevsw;
extern const struct cdevsw ugen_cdevsw;
extern const struct cdevsw wsmux_cdevsw;
extern const struct cdevsw ucom_cdevsw;
extern const struct cdevsw sysmon_cdevsw;
extern const struct cdevsw ld_cdevsw;
extern const struct cdevsw urio_cdevsw;
extern const struct cdevsw bktr_cdevsw;
extern const struct cdevsw cz_cdevsw;
extern const struct cdevsw ses_cdevsw;
extern const struct cdevsw uscanner_cdevsw;
extern const struct cdevsw iop_cdevsw;
extern const struct cdevsw mlx_cdevsw;
extern const struct cdevsw clockctl_cdevsw;
extern const struct cdevsw cgd_cdevsw;
extern const struct cdevsw agp_cdevsw;
extern const struct cdevsw pci_cdevsw;
extern const struct cdevsw irframe_cdevsw;
extern const struct cdevsw ksyms_cdevsw;
extern const struct cdevsw wsfont_cdevsw;
extern const struct cdevsw mly_cdevsw;
extern const struct cdevsw joy_cdevsw;
extern const struct cdevsw cir_cdevsw;
extern const struct cdevsw radio_cdevsw;
extern const struct cdevsw dpt_cdevsw;
extern const struct cdevsw twe_cdevsw;
extern const struct cdevsw nsmb_cdevsw;
extern const struct cdevsw crypto_cdevsw;
extern const struct cdevsw fss_cdevsw;
extern const struct cdevsw ptm_cdevsw;
extern const struct cdevsw atabus_cdevsw;
extern const struct cdevsw drvctl_cdevsw;
extern const struct cdevsw dk_cdevsw;
extern const struct cdevsw tap_cdevsw;
extern const struct cdevsw veriexec_cdevsw;
extern const struct cdevsw fw_cdevsw;
extern const struct cdevsw ucycom_cdevsw;
extern const struct cdevsw utoppy_cdevsw;
extern const struct cdevsw bthub_cdevsw;
extern const struct cdevsw amr_cdevsw;
extern const struct cdevsw lockstat_cdevsw;
extern const struct cdevsw putter_cdevsw;
extern const struct cdevsw drm_cdevsw;
extern const struct cdevsw bio_cdevsw;
extern const struct cdevsw twa_cdevsw;
extern const struct cdevsw cpuctl_cdevsw;
extern const struct cdevsw pad_cdevsw;
extern const struct cdevsw video_cdevsw;
extern const struct cdevsw hdaudio_cdevsw;
extern const struct cdevsw uhso_cdevsw;
extern const struct cdevsw dtv_cdevsw;
extern const struct cdevsw iic_cdevsw;
extern const struct cdevsw tpm_cdevsw;
extern const struct cdevsw mfi_cdevsw;

const struct cdevsw *cdevsw0[] = {
	&cons_cdevsw,	//   0
	&ctty_cdevsw,	//   1
	&mem_cdevsw,	//   2
	&wd_cdevsw,	//   3
	&swap_cdevsw,	//   4
	&pts_cdevsw,	//   5
	&ptc_cdevsw,	//   6
	&log_cdevsw,	//   7
	&com_cdevsw,	//   8
	&fd_cdevsw,	//   9
	NULL,	//  10
	NULL,	//  11
	NULL,	//  12
	&sd_cdevsw,	//  13
	&st_cdevsw,	//  14
	&cd_cdevsw,	//  15
	&lpt_cdevsw,	//  16
	&ch_cdevsw,	//  17
	&ccd_cdevsw,	//  18
	&ss_cdevsw,	//  19
	&uk_cdevsw,	//  20
	NULL,	//  21
	&filedesc_cdevsw,	//  22
	&bpf_cdevsw,	//  23
	&md_cdevsw,	//  24
	NULL,	//  25
	NULL,	//  26
	NULL,	//  27
	NULL,	//  28
	NULL,	//  29
	NULL,	//  30
	NULL,	//  31
	NULL,	//  32
	NULL,	//  33
	NULL,	//  34
	NULL,	//  35
	NULL,	//  36
	NULL,	//  37
	&cy_cdevsw,	//  38
	NULL,	//  39
	&tun_cdevsw,	//  40
	&vnd_cdevsw,	//  41
	&audio_cdevsw,	//  42
	NULL,	//  43
	&ipl_cdevsw,	//  44
	NULL,	//  45
	&rnd_cdevsw,	//  46
	&wsdisplay_cdevsw,	//  47
	&wskbd_cdevsw,	//  48
	&wsmouse_cdevsw,	//  49
	NULL,	//  50
	NULL,	//  51
	NULL,	//  52
	NULL,	//  53
	NULL,	//  54
	&usb_cdevsw,	//  55
	&uhid_cdevsw,	//  56
	&ulpt_cdevsw,	//  57
	&midi_cdevsw,	//  58
	&sequencer_cdevsw,	//  59
	&vcoda_cdevsw,	//  60
	&scsibus_cdevsw,	//  61
	&raid_cdevsw,	//  62
	&esh_cdevsw,	//  63
	&ugen_cdevsw,	//  64
	&wsmux_cdevsw,	//  65
	&ucom_cdevsw,	//  66
	&sysmon_cdevsw,	//  67
	NULL,	//  68
	&ld_cdevsw,	//  69
	&urio_cdevsw,	//  70
	&bktr_cdevsw,	//  71
	NULL,	//  72
	&cz_cdevsw,	//  73
	&ses_cdevsw,	//  74
	&uscanner_cdevsw,	//  75
	&iop_cdevsw,	//  76
	NULL,	//  77
	&mlx_cdevsw,	//  78
	&clockctl_cdevsw,	//  79
	NULL,	//  80
	&cgd_cdevsw,	//  81
	&agp_cdevsw,	//  82
	&pci_cdevsw,	//  83
	&irframe_cdevsw,	//  84
	&ksyms_cdevsw,	//  85
	&wsfont_cdevsw,	//  86
	&mly_cdevsw,	//  87
	NULL,	//  88
	&joy_cdevsw,	//  89
	&cir_cdevsw,	//  90
	&radio_cdevsw,	//  91
	NULL,	//  92
	NULL,	//  93
	NULL,	//  94
	NULL,	//  95
	&dpt_cdevsw,	//  96
	&twe_cdevsw,	//  97
	&nsmb_cdevsw,	//  98
	NULL,	//  99
	NULL,	// 100
	NULL,	// 101
	NULL,	// 102
	NULL,	// 103
	NULL,	// 104
	NULL,	// 105
	NULL,	// 106
	NULL,	// 107
	NULL,	// 108
	NULL,	// 109
	NULL,	// 110
	NULL,	// 111
	NULL,	// 112
	NULL,	// 113
	NULL,	// 114
	NULL,	// 115
	NULL,	// 116
	NULL,	// 117
	NULL,	// 118
	NULL,	// 119
	NULL,	// 120
	NULL,	// 121
	NULL,	// 122
	NULL,	// 123
	NULL,	// 124
	NULL,	// 125
	NULL,	// 126
	NULL,	// 127
	NULL,	// 128
	NULL,	// 129
	NULL,	// 130
	NULL,	// 131
	NULL,	// 132
	NULL,	// 133
	NULL,	// 134
	NULL,	// 135
	NULL,	// 136
	NULL,	// 137
	NULL,	// 138
	NULL,	// 139
	NULL,	// 140
	NULL,	// 141
	NULL,	// 142
	NULL,	// 143
	NULL,	// 144
	NULL,	// 145
	NULL,	// 146
	NULL,	// 147
	NULL,	// 148
	NULL,	// 149
	NULL,	// 150
	NULL,	// 151
	NULL,	// 152
	NULL,	// 153
	NULL,	// 154
	NULL,	// 155
	NULL,	// 156
	NULL,	// 157
	NULL,	// 158
	NULL,	// 159
	&crypto_cdevsw,	// 160
	NULL,	// 161
	NULL,	// 162
	&fss_cdevsw,	// 163
	NULL,	// 164
	&ptm_cdevsw,	// 165
	&atabus_cdevsw,	// 166
	&drvctl_cdevsw,	// 167
	&dk_cdevsw,	// 168
	&tap_cdevsw,	// 169
	&veriexec_cdevsw,	// 170
	&fw_cdevsw,	// 171
	&ucycom_cdevsw,	// 172
	NULL,	// 173
	&utoppy_cdevsw,	// 174
	&bthub_cdevsw,	// 175
	&amr_cdevsw,	// 176
	&lockstat_cdevsw,	// 177
	&putter_cdevsw,	// 178
	NULL,	// 179
	&drm_cdevsw,	// 180
	&bio_cdevsw,	// 181
	NULL,	// 182
	NULL,	// 183
	NULL,	// 184
	NULL,	// 185
	NULL,	// 186
	&twa_cdevsw,	// 187
	&cpuctl_cdevsw,	// 188
	&pad_cdevsw,	// 189
	NULL,	// 190
	NULL,	// 191
	NULL,	// 192
	&video_cdevsw,	// 193
	NULL,	// 194
	&hdaudio_cdevsw,	// 195
	&uhso_cdevsw,	// 196
	NULL,	// 197
	NULL,	// 198
	NULL,	// 199
	&dtv_cdevsw,	// 200
	&iic_cdevsw,	// 201
	NULL,	// 202
	NULL,	// 203
	&tpm_cdevsw,	// 204
	&mfi_cdevsw,	// 205
	NULL,	// 206
	NULL,	// 207
	NULL,	// 208
	NULL,	// 209
};

const struct cdevsw **cdevsw = cdevsw0;
const int sys_cdevsws = __arraycount(cdevsw0);
int max_cdevsws = __arraycount(cdevsw0);

/* device conversion table */
struct devsw_conv devsw_conv0[] = {
	{ "crypto", -1, 160, DEVNODE_SINGLE, 0, { 0, 0 }},
	{ "pf", -1, 161, DEVNODE_SINGLE, 0, { 0, 0 }},
	{ "fss", 163, 163, DEVNODE_VECTOR, 0, { 4, 0 }},
	{ "pps", -1, 164, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "ptm", -1, 165, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "atabus", -1, 166, DEVNODE_VECTOR, 0, { 4, 0 }},
	{ "drvctl", -1, 167, DEVNODE_SINGLE, 0, { 0, 0 }},
	{ "dk", 168, 168, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "tap", -1, 169, DEVNODE_VECTOR, 0, { 4, 0 }},
	{ "veriexec", -1, 170, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "fw", -1, 171, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "ucycom", -1, 172, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "gpio", -1, 173, DEVNODE_VECTOR, DEVNODE_FLAG_LINKZERO, { 8, 0 }},
	{ "utoppy", -1, 174, DEVNODE_VECTOR, 0, { 2, 0 }},
	{ "bthub", -1, 175, DEVNODE_SINGLE, 0, { 0, 0 }},
	{ "amr", -1, 176, DEVNODE_VECTOR, 0, { 1, 0 }},
	{ "lockstat", -1, 177, DEVNODE_SINGLE, 0, { 0, 0 }},
	{ "putter", -1, 178, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "srt", -1, 179, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "drm", -1, 180, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "bio", -1, 181, DEVNODE_SINGLE, 0, { 0, 0 }},
	{ "altmem", 182, 182, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "twa", -1, 187, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "cpuctl", -1, 188, DEVNODE_SINGLE, 0, { 0, 0 }},
	{ "pad", -1, 189, DEVNODE_VECTOR, DEVNODE_FLAG_LINKZERO, { 4, 0 }},
	{ "zfs", 190, 190, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "tprof", -1, 191, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "isv", -1, 192, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "video", -1, 193, DEVNODE_VECTOR, 0, { 4, 0 }},
	{ "dm", 169, 194, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "hdaudio", -1, 195, DEVNODE_VECTOR, 0, { 4, 0 }},
	{ "uhso", -1, 196, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "rumpblk", 197, 197, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "npf", -1, 198, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "flash", 199, 199, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "dtv", -1, 200, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "iic", -1, 201, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "filemon", -1, 202, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "iscsi", -1, 203, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "tpm", -1, 204, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "mfi", -1, 205, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "seeprom", -1, 206, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "dtrace", -1, 207, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "spiflash", 208, 208, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "lua", -1, 209, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "cons", -1, 0, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "ctty", -1, 1, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "mem", -1, 2, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "wd", 0, 3, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "swap", 1, 4, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "pts", -1, 5, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "ptc", -1, 6, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "log", -1, 7, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "com", -1, 8, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "fd", 2, 9, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "wt", 3, 10, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "pc", -1, 12, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "sd", 4, 13, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "st", 5, 14, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "cd", 6, 15, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "lpt", -1, 16, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "ch", -1, 17, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "ccd", 16, 18, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "ss", -1, 19, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "uk", -1, 20, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "filedesc", -1, 22, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "bpf", -1, 23, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "md", 17, 24, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "spkr", -1, 27, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "cy", -1, 38, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "mcd", 7, 39, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "tun", -1, 40, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "vnd", 14, 41, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "audio", -1, 42, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "svr4_net", -1, 43, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "ipl", -1, 44, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "satlink", -1, 45, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "rnd", -1, 46, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "wsdisplay", -1, 47, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "wskbd", -1, 48, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "wsmouse", -1, 49, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "isdn", -1, 50, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "isdnctl", -1, 51, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "isdnbchan", -1, 52, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "isdntrc", -1, 53, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "isdntel", -1, 54, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "usb", -1, 55, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "uhid", -1, 56, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "ulpt", -1, 57, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "midi", -1, 58, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "sequencer", -1, 59, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "vcoda", -1, 60, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "scsibus", -1, 61, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "raid", 18, 62, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "esh", -1, 63, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "ugen", -1, 64, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "wsmux", -1, 65, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "ucom", -1, 66, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "sysmon", -1, 67, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "ld", 19, 69, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "urio", -1, 70, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "bktr", -1, 71, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "cz", -1, 73, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "ses", -1, 74, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "uscanner", -1, 75, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "iop", -1, 76, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "altq", -1, 77, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "mlx", -1, 78, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "clockctl", -1, 79, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "cgd", 20, 81, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "agp", -1, 82, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "pci", -1, 83, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "irframe", -1, 84, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "ksyms", -1, 85, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "wsfont", -1, 86, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "mly", -1, 87, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "dpti", -1, 88, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "joy", -1, 89, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "cir", -1, 90, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "radio", -1, 91, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "kttcp", -1, 92, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "dpt", -1, 96, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "twe", -1, 97, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "nsmb", -1, 98, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "xenevt", -1, 141, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "xbd", 142, 142, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
	{ "xencons", -1, 143, DEVNODE_DONTBOTHER, 0, { 0, 0 }},
};

struct devsw_conv *devsw_conv = devsw_conv0;
int max_devsw_convs = __arraycount(devsw_conv0);

const dev_t swapdev = makedev(1, 0);
const dev_t zerodev = makedev(2, DEV_ZERO);

/* mem_no is only used in iskmemdev() */
const int mem_no = 2;
