#ifndef GUARD_CONSTANTS_FRONTIER_UTIL_H
#define GUARD_CONSTANTS_FRONTIER_UTIL_H

#define FRONTIER_BEFORE_TEXT      0
#define FRONTIER_PLAYER_LOST_TEXT 1
#define FRONTIER_PLAYER_WON_TEXT  2

// return values for GetFrontierBrainStatus
#define FRONTIER_BRAIN_NOT_READY   0
#define FRONTIER_BRAIN_SILVER      1
#define FRONTIER_BRAIN_GOLD        2
#define FRONTIER_BRAIN_STREAK      3  // for encountering the brain after getting both symbols
#define FRONTIER_BRAIN_STREAK_LONG 4  //

#define FRONTIER_UTIL_FUNC_GET_STATUS             0
#define FRONTIER_UTIL_FUNC_GET_DATA               1
#define FRONTIER_UTIL_FUNC_SET_DATA               2
#define FRONTIER_UTIL_FUNC_SET_PARTY_ORDER        3
#define FRONTIER_UTIL_FUNC_SOFT_RESET             4
#define FRONTIER_UTIL_FUNC_SET_TRAINERS           5
#define FRONTIER_UTIL_FUNC_SAVE_PARTY             6
#define FRONTIER_UTIL_FUNC_RESULTS_WINDOW         7
#define FRONTIER_UTIL_FUNC_CHECK_AIR_TV_SHOW      8
#define FRONTIER_UTIL_FUNC_GET_BRAIN_STATUS       9
#define FRONTIER_UTIL_FUNC_IS_BRAIN               10
#define FRONTIER_UTIL_FUNC_GIVE_BATTLE_POINTS     11
#define FRONTIER_UTIL_FUNC_GET_FACILITY_SYMBOLS   12
#define FRONTIER_UTIL_FUNC_GIVE_FACILITY_SYMBOL   13
#define FRONTIER_UTIL_FUNC_CHECK_BATTLE_TYPE      14
#define FRONTIER_UTIL_FUNC_CHECK_INELIGIBLE       15
#define FRONTIER_UTIL_FUNC_CHECK_VISIT_TRAINER    16
#define FRONTIER_UTIL_FUNC_INCREMENT_STREAK       17
#define FRONTIER_UTIL_FUNC_RESTORE_HELD_ITEMS     18
#define FRONTIER_UTIL_FUNC_SAVE_BATTLE            19
#define FRONTIER_UTIL_FUNC_BUFFER_TRAINER_NAME    20
#define FRONTIER_UTIL_FUNC_RESET_SKETCH_MOVES     21
#define FRONTIER_UTIL_FUNC_SET_BRAIN_OBJECT       22

#define FRONTIER_DATA_CHALLENGE_STATUS   0
#define FRONTIER_DATA_LVL_MODE           1
#define FRONTIER_DATA_BATTLE_NUM         2
#define FRONTIER_DATA_PAUSED             3
#define FRONTIER_DATA_SELECTED_MON_ORDER 4
#define FRONTIER_DATA_BATTLE_OUTCOME     5
#define FRONTIER_DATA_RECORD_DISABLED    6
#define FRONTIER_DATA_HEARD_BRAIN_SPEECH 7

#define STREAK_TOWER_SINGLES_50       (1 << 0)
#define STREAK_TOWER_SINGLES_OPEN     (1 << 1)
#define STREAK_DOME_SINGLES_50        (1 << 2)
#define STREAK_DOME_SINGLES_OPEN      (1 << 3)
#define STREAK_PALACE_SINGLES_50      (1 << 4)
#define STREAK_PALACE_SINGLES_OPEN    (1 << 5)
#define STREAK_ARENA_50               (1 << 6)
#define STREAK_ARENA_OPEN             (1 << 7)
#define STREAK_FACTORY_SINGLES_50     (1 << 8)
#define STREAK_FACTORY_SINGLES_OPEN   (1 << 9)
#define STREAK_PIKE_50                (1 << 10)
#define STREAK_PIKE_OPEN              (1 << 11)
#define STREAK_PYRAMID_50             (1 << 12)
#define STREAK_PYRAMID_OPEN           (1 << 13)
#define STREAK_TOWER_DOUBLES_50       (1 << 14)
#define STREAK_TOWER_DOUBLES_OPEN     (1 << 15)
#define STREAK_TOWER_MULTIS_50        (1 << 16)
#define STREAK_TOWER_MULTIS_OPEN      (1 << 17)
#define STREAK_TOWER_LINK_MULTIS_50   (1 << 18)
#define STREAK_TOWER_LINK_MULTIS_OPEN (1 << 19)
#define STREAK_DOME_DOUBLES_50        (1 << 20)
#define STREAK_DOME_DOUBLES_OPEN      (1 << 21)
#define STREAK_PALACE_DOUBLES_50      (1 << 22)
#define STREAK_PALACE_DOUBLES_OPEN    (1 << 23)
#define STREAK_FACTORY_DOUBLES_50     (1 << 24)
#define STREAK_FACTORY_DOUBLES_OPEN   (1 << 25)
#define STREAK_ARCADE_SINGLES_50      (1 << 26)
#define STREAK_ARCADE_SINGLES_OPEN    (1 << 27)
#define STREAK_ARCADE_DOUBLES_50      (1 << 28)
#define STREAK_ARCADE_DOUBLES_OPEN    (1 << 29)
#define STREAK_ARCADE_MULTIS_50       (1 << 30)
#define STREAK_ARCADE_MULTIS_OPEN     (1 << 31)

#endif // GUARD_CONSTANTS_FRONTIER_UTIL_H
