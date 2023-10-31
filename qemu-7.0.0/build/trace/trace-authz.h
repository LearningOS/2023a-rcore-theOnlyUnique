/* This file is autogenerated by tracetool, do not edit. */

#ifndef TRACE_AUTHZ_GENERATED_TRACERS_H
#define TRACE_AUTHZ_GENERATED_TRACERS_H

#include "trace/control.h"

extern TraceEvent _TRACE_QAUTHZ_IS_ALLOWED_EVENT;
extern TraceEvent _TRACE_QAUTHZ_SIMPLE_IS_ALLOWED_EVENT;
extern TraceEvent _TRACE_QAUTHZ_LIST_CHECK_RULE_EVENT;
extern TraceEvent _TRACE_QAUTHZ_LIST_DEFAULT_POLICY_EVENT;
extern TraceEvent _TRACE_QAUTHZ_LIST_FILE_LOAD_EVENT;
extern TraceEvent _TRACE_QAUTHZ_LIST_FILE_REFRESH_EVENT;
extern TraceEvent _TRACE_QAUTHZ_PAM_CHECK_EVENT;
extern uint16_t _TRACE_QAUTHZ_IS_ALLOWED_DSTATE;
extern uint16_t _TRACE_QAUTHZ_SIMPLE_IS_ALLOWED_DSTATE;
extern uint16_t _TRACE_QAUTHZ_LIST_CHECK_RULE_DSTATE;
extern uint16_t _TRACE_QAUTHZ_LIST_DEFAULT_POLICY_DSTATE;
extern uint16_t _TRACE_QAUTHZ_LIST_FILE_LOAD_DSTATE;
extern uint16_t _TRACE_QAUTHZ_LIST_FILE_REFRESH_DSTATE;
extern uint16_t _TRACE_QAUTHZ_PAM_CHECK_DSTATE;
#define TRACE_QAUTHZ_IS_ALLOWED_ENABLED 1
#define TRACE_QAUTHZ_SIMPLE_IS_ALLOWED_ENABLED 1
#define TRACE_QAUTHZ_LIST_CHECK_RULE_ENABLED 1
#define TRACE_QAUTHZ_LIST_DEFAULT_POLICY_ENABLED 1
#define TRACE_QAUTHZ_LIST_FILE_LOAD_ENABLED 1
#define TRACE_QAUTHZ_LIST_FILE_REFRESH_ENABLED 1
#define TRACE_QAUTHZ_PAM_CHECK_ENABLED 1
#include "qemu/log-for-trace.h"
#include "qemu/error-report.h"


#define TRACE_QAUTHZ_IS_ALLOWED_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QAUTHZ_IS_ALLOWED) || \
    false)

static inline void _nocheck__trace_qauthz_is_allowed(void * authz, const char * identity, bool allowed)
{
    if (trace_event_get_state(TRACE_QAUTHZ_IS_ALLOWED) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 4 "/workspaces/2023a-rcore-theOnlyUnique/qemu-7.0.0/authz/trace-events"
            qemu_log("%d@%zu.%06zu:qauthz_is_allowed " "AuthZ %p check identity=%s allowed=%d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , authz, identity, allowed);
#line 49 "trace/trace-authz.h"
        } else {
#line 4 "/workspaces/2023a-rcore-theOnlyUnique/qemu-7.0.0/authz/trace-events"
            qemu_log("qauthz_is_allowed " "AuthZ %p check identity=%s allowed=%d" "\n", authz, identity, allowed);
#line 53 "trace/trace-authz.h"
        }
    }
}

static inline void trace_qauthz_is_allowed(void * authz, const char * identity, bool allowed)
{
    if (true) {
        _nocheck__trace_qauthz_is_allowed(authz, identity, allowed);
    }
}

#define TRACE_QAUTHZ_SIMPLE_IS_ALLOWED_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QAUTHZ_SIMPLE_IS_ALLOWED) || \
    false)

static inline void _nocheck__trace_qauthz_simple_is_allowed(void * authz, const char * wantidentity, const char * gotidentity)
{
    if (trace_event_get_state(TRACE_QAUTHZ_SIMPLE_IS_ALLOWED) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 7 "/workspaces/2023a-rcore-theOnlyUnique/qemu-7.0.0/authz/trace-events"
            qemu_log("%d@%zu.%06zu:qauthz_simple_is_allowed " "AuthZ simple %p check want identity=%s got identity=%s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , authz, wantidentity, gotidentity);
#line 80 "trace/trace-authz.h"
        } else {
#line 7 "/workspaces/2023a-rcore-theOnlyUnique/qemu-7.0.0/authz/trace-events"
            qemu_log("qauthz_simple_is_allowed " "AuthZ simple %p check want identity=%s got identity=%s" "\n", authz, wantidentity, gotidentity);
#line 84 "trace/trace-authz.h"
        }
    }
}

static inline void trace_qauthz_simple_is_allowed(void * authz, const char * wantidentity, const char * gotidentity)
{
    if (true) {
        _nocheck__trace_qauthz_simple_is_allowed(authz, wantidentity, gotidentity);
    }
}

#define TRACE_QAUTHZ_LIST_CHECK_RULE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QAUTHZ_LIST_CHECK_RULE) || \
    false)

static inline void _nocheck__trace_qauthz_list_check_rule(void * authz, const char * identity, const char * rule, int format, int policy)
{
    if (trace_event_get_state(TRACE_QAUTHZ_LIST_CHECK_RULE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 10 "/workspaces/2023a-rcore-theOnlyUnique/qemu-7.0.0/authz/trace-events"
            qemu_log("%d@%zu.%06zu:qauthz_list_check_rule " "AuthZ list %p check rule=%s identity=%s format=%d policy=%d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , authz, identity, rule, format, policy);
#line 111 "trace/trace-authz.h"
        } else {
#line 10 "/workspaces/2023a-rcore-theOnlyUnique/qemu-7.0.0/authz/trace-events"
            qemu_log("qauthz_list_check_rule " "AuthZ list %p check rule=%s identity=%s format=%d policy=%d" "\n", authz, identity, rule, format, policy);
#line 115 "trace/trace-authz.h"
        }
    }
}

static inline void trace_qauthz_list_check_rule(void * authz, const char * identity, const char * rule, int format, int policy)
{
    if (true) {
        _nocheck__trace_qauthz_list_check_rule(authz, identity, rule, format, policy);
    }
}

#define TRACE_QAUTHZ_LIST_DEFAULT_POLICY_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QAUTHZ_LIST_DEFAULT_POLICY) || \
    false)

static inline void _nocheck__trace_qauthz_list_default_policy(void * authz, const char * identity, int policy)
{
    if (trace_event_get_state(TRACE_QAUTHZ_LIST_DEFAULT_POLICY) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 11 "/workspaces/2023a-rcore-theOnlyUnique/qemu-7.0.0/authz/trace-events"
            qemu_log("%d@%zu.%06zu:qauthz_list_default_policy " "AuthZ list %p default identity=%s policy=%d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , authz, identity, policy);
#line 142 "trace/trace-authz.h"
        } else {
#line 11 "/workspaces/2023a-rcore-theOnlyUnique/qemu-7.0.0/authz/trace-events"
            qemu_log("qauthz_list_default_policy " "AuthZ list %p default identity=%s policy=%d" "\n", authz, identity, policy);
#line 146 "trace/trace-authz.h"
        }
    }
}

static inline void trace_qauthz_list_default_policy(void * authz, const char * identity, int policy)
{
    if (true) {
        _nocheck__trace_qauthz_list_default_policy(authz, identity, policy);
    }
}

#define TRACE_QAUTHZ_LIST_FILE_LOAD_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QAUTHZ_LIST_FILE_LOAD) || \
    false)

static inline void _nocheck__trace_qauthz_list_file_load(void * authz, const char * filename)
{
    if (trace_event_get_state(TRACE_QAUTHZ_LIST_FILE_LOAD) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 14 "/workspaces/2023a-rcore-theOnlyUnique/qemu-7.0.0/authz/trace-events"
            qemu_log("%d@%zu.%06zu:qauthz_list_file_load " "AuthZ file %p load filename=%s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , authz, filename);
#line 173 "trace/trace-authz.h"
        } else {
#line 14 "/workspaces/2023a-rcore-theOnlyUnique/qemu-7.0.0/authz/trace-events"
            qemu_log("qauthz_list_file_load " "AuthZ file %p load filename=%s" "\n", authz, filename);
#line 177 "trace/trace-authz.h"
        }
    }
}

static inline void trace_qauthz_list_file_load(void * authz, const char * filename)
{
    if (true) {
        _nocheck__trace_qauthz_list_file_load(authz, filename);
    }
}

#define TRACE_QAUTHZ_LIST_FILE_REFRESH_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QAUTHZ_LIST_FILE_REFRESH) || \
    false)

static inline void _nocheck__trace_qauthz_list_file_refresh(void * authz, const char * filename, int success)
{
    if (trace_event_get_state(TRACE_QAUTHZ_LIST_FILE_REFRESH) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 15 "/workspaces/2023a-rcore-theOnlyUnique/qemu-7.0.0/authz/trace-events"
            qemu_log("%d@%zu.%06zu:qauthz_list_file_refresh " "AuthZ file %p load filename=%s success=%d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , authz, filename, success);
#line 204 "trace/trace-authz.h"
        } else {
#line 15 "/workspaces/2023a-rcore-theOnlyUnique/qemu-7.0.0/authz/trace-events"
            qemu_log("qauthz_list_file_refresh " "AuthZ file %p load filename=%s success=%d" "\n", authz, filename, success);
#line 208 "trace/trace-authz.h"
        }
    }
}

static inline void trace_qauthz_list_file_refresh(void * authz, const char * filename, int success)
{
    if (true) {
        _nocheck__trace_qauthz_list_file_refresh(authz, filename, success);
    }
}

#define TRACE_QAUTHZ_PAM_CHECK_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QAUTHZ_PAM_CHECK) || \
    false)

static inline void _nocheck__trace_qauthz_pam_check(void * authz, const char * identity, const char * service)
{
    if (trace_event_get_state(TRACE_QAUTHZ_PAM_CHECK) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 18 "/workspaces/2023a-rcore-theOnlyUnique/qemu-7.0.0/authz/trace-events"
            qemu_log("%d@%zu.%06zu:qauthz_pam_check " "AuthZ PAM %p identity=%s service=%s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , authz, identity, service);
#line 235 "trace/trace-authz.h"
        } else {
#line 18 "/workspaces/2023a-rcore-theOnlyUnique/qemu-7.0.0/authz/trace-events"
            qemu_log("qauthz_pam_check " "AuthZ PAM %p identity=%s service=%s" "\n", authz, identity, service);
#line 239 "trace/trace-authz.h"
        }
    }
}

static inline void trace_qauthz_pam_check(void * authz, const char * identity, const char * service)
{
    if (true) {
        _nocheck__trace_qauthz_pam_check(authz, identity, service);
    }
}
#endif /* TRACE_AUTHZ_GENERATED_TRACERS_H */
