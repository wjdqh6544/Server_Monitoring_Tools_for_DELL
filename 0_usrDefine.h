#ifndef USRDEFINE_H

#define USRDEFINE_H


/* User custom */
#define UNIT_COUNT 6
#define MAX_CPU_COUNT 2
#define MAX_FAN_COUNT 6
#define MAX_PSU_COUNT 2
#define MAX_STORAGE_COUNT 16

/* Critical Point */
#define BBU_CAPACITY_CRITICAL_POINT 200
#define CPU_TEMP_CRITICAL_POINT 65
#define CPU_USAGE_CRITICAL_PERCENT 85
#define DISK_USAGE_CRITICAL_PERCENT 90
#define EXHAUST_TEMP_CRITICAL_POINT 55
#define INLET_TEMP_CRITICAL_POINT 25
#define MEM_USAGE_CRITICAL_PERCENT 90
#define RAID_CORE_TEMP_CRITICAL_POINT 65
#define RAID_CTRL_TEMP_CRITICAL_POINT 55
#define STORAGE_TEMP_CRITICAL_POINT 60
#define SWAP_USAGE_CRITICAL_PERCENT 0

/* common */
#define BUF_MAX_LINE 128
#define CHECK_OMREPORT "/opt/dell/srvadmin/bin/omreport 2>&1"
#define CHECK_PERCCLI "/opt/MegaRAID/perccli/perccli64 2>&1"
#define ERROR_MSG_LEN 256
#define MAX_PARTS_NAME_LEN 64
#define INFO_CMOS_BATTERY_GOOD "Good"
#define INFO_CPU_PROCESSOR_NAME "Processor Brand"
#define INFO_CPU_STATE "State"
#define INFO_CPU_CORE_CNT "Core Count"
#define INFO_FORM_STR " : %[^\n]s"
#define INFO_FORM_NUM " : %hd"
#define INFO_HOSTNAME "Host Name"
#define INFO_INDEX "Index"
#define INFO_MEM_ERROR_COLLECTION "Error Correction"
#define INFO_MEM_INSTALLED_CAP "Installed Capacity"
#define INFO_MEM_SLOT_TOTAL "Slots Available"
#define INFO_MEM_SLOT_USED "Slots Used"
#define INFO_MEM_UNIT_CONNECTOR "Connector Name"
#define INFO_MEM_UNIT_TYPE "Type"
#define INFO_MEM_UNIT_SIZE "Size"
#define INFO_NA "NA"
#define INFO_NAME "Probe Name"
#define INFO_NICS_CON_STATUS "Connection Status"
#define INFO_NICS_CONNECT "Connected"
#define INFO_NICS_DISCONNECT "Disconnected"
#define INFO_NICS_DESCRIPTION "Description"
#define INFO_NICS_DETAIL_INTERFACE "Interface: %s"
#define INFO_NICS_DETAIL_VALUE "Value"
#define INFO_NICS_DETAIL_SPEED "Speed"
#define INFO_NICS_INTERFACE_NAME "Interface Name"
#define INFO_NICS_TEAM_INTERFACES "Team Interface(s)"
#define INFO_READING "Reading"
#define INFO_STATUS "Status"
#define INFO_STATE_PRESENT "Present"
#define INFO_STATUS_OK "Ok"
#define INFO_STATUS_UNKNOWN "Unknown"
#define INFO_SERVER_MODEL "Chassis Model"
#define INFO_SERVICE_TAG "Chassis Service Tag"
#define INFO_SERVICE_CODE "Express Service Code"
#define TYPE_NICS_DISCONNECT 0
#define TYPE_NICS_CONNECT 1
#define TYPE_STATUS_OK 1
#define TYPE_STATUS_UNKNOWN -100
#define TYPE_STATUS_CRITICAL 0

/* hw_info.c */
#define GET_CMOS_BATTERY_INFO_COMMAND "/opt/dell/srvadmin/bin/omreport chassis batteries"
#define GET_CPU_INFO_COMMAND "/opt/dell/srvadmin/bin/omreport chassis processors"
#define GET_DISK_COUNT "/opt/MegaRAID/perccli/perccli"
#define GET_DISK_INFO_COMMAND "/opt/MegaRAID/perccli/perccli64 /call show all"
#define GET_DISK_NAME "/opt/MegaRAID/perccli/perccli64 /call/eall/sall show all"
#define GET_FAN_INFO_COMMAND "/opt/dell/srvadmin/bin/omreport chassis fans"
#define GET_MEM_INFO_COMMAND "/opt/dell/srvadmin/bin/omreport chassis memory"
#define GET_NICS_INFO_COMMAND "/opt/dell/srvadmin/bin/omreport chassis nics"
#define GET_NICS_INFO_COMMAND_DETAIL "/opt/dell/srvadmin/bin/omreport chassis nics index=%d"
#define GET_PSU_INFO_COMMAND "/opt/dell/srvadmin/bin/omreport chassis pwrsupplies"
#define GET_SERVER_INFO_COMMAND "/opt/dell/srvadmin/bin/omreport chassis info"
#define GET_VDISK_LIST "/opt/MegaRAID/perccli/perccli64 /call/vall show"
#define GET_VDISK_FILESYSTEM "/opt/MegaRAID/perccli/perccli64 /call/vall show all"
#define MAX_BBU_VOLTAGE_LEN 10
#define MAX_BBU_CAPACITY_LEN 10
#define MAX_CAPACITY_LEN 16
#define MAX_DISK_MODELNAME_LEN 32
#define MAX_DISK_INTERFACE_LEN 5
#define MAX_DISK_MEDIATYPE_LEN 5
#define MAX_HBA_BIOS_VER_LEN 32
#define MAX_HBA_DRIVER_NAME_LEN 16
#define MAX_HBA_DRIVER_VER_LEN 32
#define MAX_HBA_FIRMWARE_VER_LEN 16
#define MAX_HBA_NAME_LEN 64
#define MAX_HBA_SERIAL_LEN 16
#define MAX_PHYSICAL_CPU_PATH_LEN 40
#define MAX_VDISK_NAME_LEN 32
#define MAX_VDISK_TYPE_LEN 7
#define PHYSICAL_CPU_PATH "/sys/devices/system/cpu"
#define PHYSICAL_CPU_PATH_FORM "/sys/devices/system/cpu/cpu%d/topology"
// DiskInfo.state Field
#define TYPE_DISK_STATE_ONLINE 0
#define TYPE_DISK_STATE_OFFLINE 1
#define TYPE_DISK_STATE_GHS 2 // Global HotSpare
#define TYPE_DISK_STATE_DHS 3 // Dedicated HotSpare
#define TYPE_DISK_STATE_UGOOD 4 // Unconfigured Good
#define TYPE_DISK_STATE_UBAD 5 // Unconfigured Bad
#define TYPE_DISK_STATE_SANI 6 // Sanitize
// BBUInfo.state
#define TYPE_STATUS_OPTIMAL 0
#define TYPE_STATUS_FAILED 1
#define TYPE_STATUS_DEGRADED 2
// HBAInfo.status
#define TYPE_HBA_STATUS_SUCCESS 0
#define TYPE_HBA_STATUS_FAILED 1
// BBUInfo.HBA_Cur_Personality
#define TYPE_HBA_CUR_HBA 0
#define TYPE_HBA_CUR_RAID 1
// For finding String in HBA Card
#define BBU_CAPACITY_UNIT "mAh"
#define BBU_VOLTAGE_UNIT "mV"
#define BBU_DESIGN_CAPACITY "Design Capacity"
#define BBU_FULL_CHARGE_CAPACITY "Full Charge Capacity"
#define BBU_REMAINING_CAPACITY "Remaining Capacity"
#define BBU_STATUS "Battery State "
#define BBU_STATUS_OPTIMAL "Optimal"
#define BBU_STATUS_DEGRADED "Degraded"
#define BBU_STATUS_FAILED "Failed"
#define BBU_VOLTAGE "Voltage"
#define HBA_BIOS_VER "Bios Version = "
#define HBA_CURRENT_PERSONALITY "Current Personality = "
#define HBA_CURRENT_PERSONALITY_HBA "HBA"
#define HBA_CURRENT_PERSONALITY_RAID "RAID"
#define HBA_DRIVE_GROUPS "Drive Groups = "
#define HBA_DRIVER_NAME "Driver Name = "
#define HBA_DRIVER_VER "Driver Version = "
#define HBA_FIRMWARE_VER "Firmware Version = "
#define HBA_PRODUCTNAME "Model = "
#define HBA_SERIAL_NUMBER "Serial Number = "
#define HBA_CONTROLLER_STATUS "Controller Status = " 
#define HBA_CONTROLLER_STATUS_OPTIMAL "Optimal"
#define HBA_CONTROLLER_STATUS_DEGRADED "Degraded"
#define HBA_CONTROLLER_STATUS_FAILED "Failed"
// For finding String in Physical Disk
#define DISK_NAME "Model Number = "
#define DISK_NAME_FILTER "Drive /"
#define DISK_NAME_FORM "Drive /c0/e%hd/s%hd Device attributes :"
#define DISK_PD_LIST "PD LIST :"
#define DISK_PD_LIST_FORM "%hd:%hd %hd %s %s %s %s %s %s"
#define DISK_PHYSICAL_COUNT "Physical Drives = "
#define DISK_STATE_ONLINE "Onln"
#define DISK_STATE_OFFLINE "Offln"
#define DISK_STATE_GHS "GHS" // Global HotSpare
#define DISK_STATE_DHS "DHS" // Dedicated HotSpare
#define DISK_STATE_UGOOD "UGood" // Unconfigured Good
#define DISK_STATE_UBAD "UBad" // Unconfigured Bad
#define DISK_STATE_SANI "Sntze" // Sanitize
//For finding String in Virtual Disk
#define VD_FILESYSTEM_FORM "OS Drive Name = "
#define VD_CNT "Virtual Drives = "
#define VD_LIST "Virtual Drives :"
#define VD_LIST_FORM "%hd/%hd %s %s %s %*s %*s %*s %*s %s %s %s"
#define VD_PROPERTIES_FORM "VD%d Properties :"
#define VD_STATE_OPTIMAL "Optl"
#define VD_STATE_DEGRADED "Dgrd"
#define VD_STATE_OFFLINE "OfLn"
#define VD_STATE_RECOVERY "Rec"
#define VD_STATE_PARTIALLY_DEGRADED "Pdgd"
#define VD_STATE_HIDDEN "HD"
#define VD_STATE_TRANSPORTREADY "TRANS"
#define VD_ACCESS_READ_ONLY "RO"
#define VD_ACCESS_READ_WRITE "RW"
#define VD_ACCESS_BLOCKED "B"
#define TYPE_VD_STATE_OPTIMAL 0
#define TYPE_VD_STATE_DEGRADED 1
#define TYPE_VD_STATE_OFFLINE 2
#define TYPE_VD_STATE_RECOVERY 3
#define TYPE_VD_STATE_PARTIALLY_DEGRADED 4
#define TYPE_VD_STATE_HIDDEN 5
#define TYPE_VD_STATE_TRANSPORTREADY 6
#define TYPE_VD_ACCESS_READ_ONLY 0
#define TYPE_VD_ACCESS_READ_WRITE 1
#define TYPE_VD_ACCESS_BLOCKED 2

/* os_info.c */
#define GET_MOUNTPATH_LSBLK "lsblk -a"
#define MAX_FILESYSTEM_LEN 4096
#define MAX_MOUNTPATH_LEN 4096
#define MOUNTS_FORM "%s %s %*s %*s %*s %*s"
#define MOUNTS_LOCATION "/proc/mounts"

/* Main Program */
#define ERROR_LOG_MAIN "/var/log/00_Server_Monitoring/main_program_log"

/* Warning Log */
#define TYPE_MEM_USAGE 1
#define TYPE_CPU_USAGE 2
#define TYPE_CPU_TEMP 3
#define TYPE_STORAGE_TEMP 4
#define TYPE_RAID_CORE_TEMP 5
#define TYPE_RAID_CTRL_TEMP 6
#define TYPE_BBU_TEMP 7
#define TYPE_EXHAUST_TEMP 8
#define TYPE_INLET_TEMP 9
#define WARNING_LOG "warning_history"

/* Information to Log */
#define ERROR_LOG_COLLECTOR "/var/log/00_Server_Monitoring/collector_log"
#define HISTORY_PATH "/var/log/00_Server_Monitoring/00_history" // 40
#define LOG_PATH "/var/log/00_Server_Monitoring"
#define USERNAME_LEN 64

/* Information to Log - Temperature */
#define BBU_TEMP "Temperature"
#define CPU1_TEMP "CPU1"
#define CPU2_TEMP "CPU2"
#define STORAGE_TEMP_FORM "Drive Temperature = %hdC%*s"
#define EXHAUST_TEMP "Exhaust"
#define GET_BBU_INFO_COMMAND "/opt/MegaRAID/perccli/perccli64 /c0/bbu show all"
#define GET_TEMP_OMREPORT_COMMAND "/opt/dell/srvadmin/bin/omreport chassis temps"
#define GET_RAID_TEMP_PERCCLI_COMMAND "/opt/MegaRAID/perccli/perccli64 /c0 show temperature"
#define GET_STORAGE_TEMP_PERCCLI_COMMAND "/opt/MegaRAID/perccli/perccli64 /c0/eall/sall show all | grep Temperature"
#define INLET_TEMP "Inlet"
#define MAX_LOG_PATH_LEN 70 // LogFile Location: /var/log/~: 40(path) + 29(filename: <type>_history-YYYYDDMM)
#define RAID_CORE_TEMP "ROC temperature(Degree Celsius)"
#define RAID_CTRL_TEMP "Ctrl temperature(Degree Celsius)"
#define STAT_FORM "%*s %ld %ld %ld %ld %ld %ld %ld %ld %ld %ld"
#define STAT_LOCATION "/proc/stat"
#define TEMP_LOG "temperature_history"

/* Information to Log - Usage */
#define MEMFREE "MemAvailable:"
#define MEMINFO_MAX_LINE 64
#define MEMINFO_LOCATION "/proc/meminfo"
#define MEMINFO_FORM "%s %ld"
#define MEMTOTAL "MemTotal:"
#define SWAPTOTAL "SwapTotal:"
#define SWAPFREE "SwapFree:"
#define USAGE_LOG "usage_history"

#endif