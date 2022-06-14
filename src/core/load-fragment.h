/* SPDX-License-Identifier: LGPL-2.1-or-later */
#pragma once

#include "conf-parser.h"
#include "unit.h"

/* These functions are declared in the header to make them accessible to unit tests. */
bool contains_instance_specifier_superset(const char *s);
int unit_is_likely_recursive_template_dependency(Unit *u, const char *name, const char *format);

/* Config-parsing helpers relevant only for sources under src/core/ */
int parse_crash_chvt(const char *value, int *data);
int parse_confirm_spawn(const char *value, char **console);

/* Read service data from .desktop file style configuration fragments */

int unit_load_fragment(Unit *u);

void unit_dump_config_items(FILE *f);

CONFIG_PARSER_PROTOTYPE(config_parse_unit_deps);
CONFIG_PARSER_PROTOTYPE(config_parse_obsolete_unit_deps);
CONFIG_PARSER_PROTOTYPE(config_parse_unit_string_printf);
CONFIG_PARSER_PROTOTYPE(config_parse_unit_strv_printf);
CONFIG_PARSER_PROTOTYPE(config_parse_unit_path_printf);
CONFIG_PARSER_PROTOTYPE(config_parse_colon_separated_paths);
CONFIG_PARSER_PROTOTYPE(config_parse_unit_path_strv_printf);
CONFIG_PARSER_PROTOTYPE(config_parse_documentation);
CONFIG_PARSER_PROTOTYPE(config_parse_socket_listen);
CONFIG_PARSER_PROTOTYPE(config_parse_socket_protocol);
CONFIG_PARSER_PROTOTYPE(config_parse_socket_bind);
CONFIG_PARSER_PROTOTYPE(config_parse_exec_nice);
CONFIG_PARSER_PROTOTYPE(config_parse_exec_oom_score_adjust);
CONFIG_PARSER_PROTOTYPE(config_parse_exec_coredump_filter);
CONFIG_PARSER_PROTOTYPE(config_parse_exec);
CONFIG_PARSER_PROTOTYPE(config_parse_service_timeout);
CONFIG_PARSER_PROTOTYPE(config_parse_service_timeout_abort);
CONFIG_PARSER_PROTOTYPE(config_parse_service_timeout_failure_mode);
CONFIG_PARSER_PROTOTYPE(config_parse_service_type);
CONFIG_PARSER_PROTOTYPE(config_parse_service_exit_type);
CONFIG_PARSER_PROTOTYPE(config_parse_service_restart);
CONFIG_PARSER_PROTOTYPE(config_parse_socket_bindtodevice);
CONFIG_PARSER_PROTOTYPE(config_parse_exec_output);
CONFIG_PARSER_PROTOTYPE(config_parse_exec_input);
CONFIG_PARSER_PROTOTYPE(config_parse_exec_input_text);
CONFIG_PARSER_PROTOTYPE(config_parse_exec_input_data);
CONFIG_PARSER_PROTOTYPE(config_parse_exec_io_class);
CONFIG_PARSER_PROTOTYPE(config_parse_exec_io_priority);
CONFIG_PARSER_PROTOTYPE(config_parse_exec_cpu_sched_policy);
CONFIG_PARSER_PROTOTYPE(config_parse_exec_cpu_sched_prio);
CONFIG_PARSER_PROTOTYPE(config_parse_exec_cpu_affinity);
CONFIG_PARSER_PROTOTYPE(config_parse_exec_mount_apivfs);
CONFIG_PARSER_PROTOTYPE(config_parse_exec_secure_bits);
CONFIG_PARSER_PROTOTYPE(config_parse_root_image_options);
CONFIG_PARSER_PROTOTYPE(config_parse_exec_root_hash);
CONFIG_PARSER_PROTOTYPE(config_parse_exec_root_hash_sig);
CONFIG_PARSER_PROTOTYPE(config_parse_capability_set);
CONFIG_PARSER_PROTOTYPE(config_parse_exec_mount_flags);
CONFIG_PARSER_PROTOTYPE(config_parse_timer);
CONFIG_PARSER_PROTOTYPE(config_parse_trigger_unit);
CONFIG_PARSER_PROTOTYPE(config_parse_path_spec);
CONFIG_PARSER_PROTOTYPE(config_parse_socket_service);
CONFIG_PARSER_PROTOTYPE(config_parse_service_sockets);
CONFIG_PARSER_PROTOTYPE(config_parse_unit_env_file);
CONFIG_PARSER_PROTOTYPE(config_parse_ip_tos);
CONFIG_PARSER_PROTOTYPE(config_parse_unit_condition_path);
CONFIG_PARSER_PROTOTYPE(config_parse_unit_condition_string);
CONFIG_PARSER_PROTOTYPE(config_parse_kill_mode);
CONFIG_PARSER_PROTOTYPE(config_parse_notify_access);
CONFIG_PARSER_PROTOTYPE(config_parse_emergency_action);
CONFIG_PARSER_PROTOTYPE(config_parse_unit_requires_mounts_for);
CONFIG_PARSER_PROTOTYPE(config_parse_syscall_filter);
CONFIG_PARSER_PROTOTYPE(config_parse_syscall_archs);
CONFIG_PARSER_PROTOTYPE(config_parse_syscall_errno);
CONFIG_PARSER_PROTOTYPE(config_parse_syscall_log);
CONFIG_PARSER_PROTOTYPE(config_parse_environ);
CONFIG_PARSER_PROTOTYPE(config_parse_pass_environ);
CONFIG_PARSER_PROTOTYPE(config_parse_unset_environ);
CONFIG_PARSER_PROTOTYPE(config_parse_unit_slice);
CONFIG_PARSER_PROTOTYPE(config_parse_cg_weight);
CONFIG_PARSER_PROTOTYPE(config_parse_cpu_shares);
CONFIG_PARSER_PROTOTYPE(config_parse_memory_limit);
CONFIG_PARSER_PROTOTYPE(config_parse_tasks_max);
CONFIG_PARSER_PROTOTYPE(config_parse_delegate);
CONFIG_PARSER_PROTOTYPE(config_parse_managed_oom_mode);
CONFIG_PARSER_PROTOTYPE(config_parse_managed_oom_mem_pressure_limit);
CONFIG_PARSER_PROTOTYPE(config_parse_managed_oom_preference);
CONFIG_PARSER_PROTOTYPE(config_parse_device_policy);
CONFIG_PARSER_PROTOTYPE(config_parse_device_allow);
CONFIG_PARSER_PROTOTYPE(config_parse_io_device_latency);
CONFIG_PARSER_PROTOTYPE(config_parse_io_device_weight);
CONFIG_PARSER_PROTOTYPE(config_parse_io_limit);
CONFIG_PARSER_PROTOTYPE(config_parse_blockio_weight);
CONFIG_PARSER_PROTOTYPE(config_parse_blockio_device_weight);
CONFIG_PARSER_PROTOTYPE(config_parse_blockio_bandwidth);
CONFIG_PARSER_PROTOTYPE(config_parse_job_mode);
CONFIG_PARSER_PROTOTYPE(config_parse_job_mode_isolate);
CONFIG_PARSER_PROTOTYPE(config_parse_exec_selinux_context);
CONFIG_PARSER_PROTOTYPE(config_parse_exec_apparmor_profile);
CONFIG_PARSER_PROTOTYPE(config_parse_exec_smack_process_label);
CONFIG_PARSER_PROTOTYPE(config_parse_address_families);
CONFIG_PARSER_PROTOTYPE(config_parse_runtime_preserve_mode);
CONFIG_PARSER_PROTOTYPE(config_parse_exec_directories);
CONFIG_PARSER_PROTOTYPE(config_parse_set_credential);
CONFIG_PARSER_PROTOTYPE(config_parse_load_credential);
CONFIG_PARSER_PROTOTYPE(config_parse_set_status);
CONFIG_PARSER_PROTOTYPE(config_parse_namespace_path_strv);
CONFIG_PARSER_PROTOTYPE(config_parse_temporary_filesystems);
CONFIG_PARSER_PROTOTYPE(config_parse_cpu_quota);
CONFIG_PARSER_PROTOTYPE(config_parse_allowed_cpuset);
CONFIG_PARSER_PROTOTYPE(config_parse_protect_home);
CONFIG_PARSER_PROTOTYPE(config_parse_protect_system);
CONFIG_PARSER_PROTOTYPE(config_parse_bus_name);
CONFIG_PARSER_PROTOTYPE(config_parse_exec_utmp_mode);
CONFIG_PARSER_PROTOTYPE(config_parse_working_directory);
CONFIG_PARSER_PROTOTYPE(config_parse_fdname);
CONFIG_PARSER_PROTOTYPE(config_parse_sec_fix_0);
CONFIG_PARSER_PROTOTYPE(config_parse_user_group_compat);
CONFIG_PARSER_PROTOTYPE(config_parse_user_group_strv_compat);
CONFIG_PARSER_PROTOTYPE(config_parse_restrict_namespaces);
CONFIG_PARSER_PROTOTYPE(config_parse_restrict_filesystems);
CONFIG_PARSER_PROTOTYPE(config_parse_bind_paths);
CONFIG_PARSER_PROTOTYPE(config_parse_exec_keyring_mode);
CONFIG_PARSER_PROTOTYPE(config_parse_protect_proc);
CONFIG_PARSER_PROTOTYPE(config_parse_proc_subset);
CONFIG_PARSER_PROTOTYPE(config_parse_job_timeout_sec);
CONFIG_PARSER_PROTOTYPE(config_parse_job_running_timeout_sec);
CONFIG_PARSER_PROTOTYPE(config_parse_log_extra_fields);
CONFIG_PARSER_PROTOTYPE(config_parse_log_namespace);
CONFIG_PARSER_PROTOTYPE(config_parse_collect_mode);
CONFIG_PARSER_PROTOTYPE(config_parse_pid_file);
CONFIG_PARSER_PROTOTYPE(config_parse_exit_status);
CONFIG_PARSER_PROTOTYPE(config_parse_disable_controllers);
CONFIG_PARSER_PROTOTYPE(config_parse_oom_policy);
CONFIG_PARSER_PROTOTYPE(config_parse_numa_policy);
CONFIG_PARSER_PROTOTYPE(config_parse_numa_mask);
CONFIG_PARSER_PROTOTYPE(config_parse_ip_filter_bpf_progs);
CONFIG_PARSER_PROTOTYPE(config_parse_cpu_affinity2);
CONFIG_PARSER_PROTOTYPE(config_parse_show_status);
CONFIG_PARSER_PROTOTYPE(config_parse_status_unit_format);
CONFIG_PARSER_PROTOTYPE(config_parse_output_restricted);
CONFIG_PARSER_PROTOTYPE(config_parse_crash_chvt);
CONFIG_PARSER_PROTOTYPE(config_parse_timeout_abort);
CONFIG_PARSER_PROTOTYPE(config_parse_swap_priority);
CONFIG_PARSER_PROTOTYPE(config_parse_mount_images);
CONFIG_PARSER_PROTOTYPE(config_parse_socket_timestamping);
CONFIG_PARSER_PROTOTYPE(config_parse_extension_images);
CONFIG_PARSER_PROTOTYPE(config_parse_bpf_foreign_program);
CONFIG_PARSER_PROTOTYPE(config_parse_cgroup_socket_bind);
CONFIG_PARSER_PROTOTYPE(config_parse_restrict_network_interfaces);
CONFIG_PARSER_PROTOTYPE(config_parse_watchdog_sec);
CONFIG_PARSER_PROTOTYPE(config_parse_tty_size);
CONFIG_PARSER_PROTOTYPE(config_parse_cgroup_nft_set);
CONFIG_PARSER_PROTOTYPE(config_parse_dynamic_user_nft_set);

/* gperf prototypes */
const struct ConfigPerfItem* load_fragment_gperf_lookup(const char *key, GPERF_LEN_TYPE length);
extern const char load_fragment_gperf_nulstr[];
