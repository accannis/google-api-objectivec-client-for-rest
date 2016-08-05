// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Tasks API (tasks/v1)
// Description:
//   Lets you manage your tasks and task lists.
// Documentation:
//   https://developers.google.com/google-apps/tasks/firstapp

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRObject.h"
#else
  #import "GTLRObject.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRTasks_Task;
@class GTLRTasks_TaskLinksItem;
@class GTLRTasks_TaskList;

NS_ASSUME_NONNULL_BEGIN

/**
 *  GTLRTasks_Task
 */
@interface GTLRTasks_Task : GTLRObject

/**
 *  Completion date of the task (as a RFC 3339 timestamp). This field is omitted
 *  if the task has not been completed.
 */
@property(nonatomic, strong, nullable) GTLRDateTime *completed;

/**
 *  Flag indicating whether the task has been deleted. The default if False.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *deleted;

/** Due date of the task (as a RFC 3339 timestamp). Optional. */
@property(nonatomic, strong, nullable) GTLRDateTime *due;

/** ETag of the resource. */
@property(nonatomic, copy, nullable) NSString *ETag;

/**
 *  Flag indicating whether the task is hidden. This is the case if the task had
 *  been marked completed when the task list was last cleared. The default is
 *  False. This field is read-only.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *hidden;

/**
 *  Task identifier.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/** Type of the resource. This is always "tasks#task". */
@property(nonatomic, copy, nullable) NSString *kind;

/** Collection of links. This collection is read-only. */
@property(nonatomic, strong, nullable) NSArray<GTLRTasks_TaskLinksItem *> *links;

/** Notes describing the task. Optional. */
@property(nonatomic, copy, nullable) NSString *notes;

/**
 *  Parent task identifier. This field is omitted if it is a top-level task.
 *  This field is read-only. Use the "move" method to move the task under a
 *  different parent or to the top level.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  String indicating the position of the task among its sibling tasks under the
 *  same parent task or at the top level. If this string is greater than another
 *  task's corresponding position string according to lexicographical ordering,
 *  the task is positioned after the other task under the same parent task (or
 *  at the top level). This field is read-only. Use the "move" method to move
 *  the task to another position.
 */
@property(nonatomic, copy, nullable) NSString *position;

/**
 *  URL pointing to this task. Used to retrieve, update, or delete this task.
 */
@property(nonatomic, copy, nullable) NSString *selfLink;

/** Status of the task. This is either "needsAction" or "completed". */
@property(nonatomic, copy, nullable) NSString *status;

/** Title of the task. */
@property(nonatomic, copy, nullable) NSString *title;

/** Last modification time of the task (as a RFC 3339 timestamp). */
@property(nonatomic, strong, nullable) GTLRDateTime *updated;

@end


/**
 *  GTLRTasks_TaskLinksItem
 */
@interface GTLRTasks_TaskLinksItem : GTLRObject

/**
 *  The description. In HTML speak: Everything between <a> and </a>.
 *
 *  Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
 */
@property(nonatomic, copy, nullable) NSString *descriptionProperty;

/** The URL. */
@property(nonatomic, copy, nullable) NSString *link;

/** Type of the link, e.g. "email". */
@property(nonatomic, copy, nullable) NSString *type;

@end


/**
 *  GTLRTasks_TaskList
 */
@interface GTLRTasks_TaskList : GTLRObject

/** ETag of the resource. */
@property(nonatomic, copy, nullable) NSString *ETag;

/**
 *  Task list identifier.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/** Type of the resource. This is always "tasks#taskList". */
@property(nonatomic, copy, nullable) NSString *kind;

/**
 *  URL pointing to this task list. Used to retrieve, update, or delete this
 *  task list.
 */
@property(nonatomic, copy, nullable) NSString *selfLink;

/** Title of the task list. */
@property(nonatomic, copy, nullable) NSString *title;

/** Last modification time of the task list (as a RFC 3339 timestamp). */
@property(nonatomic, strong, nullable) GTLRDateTime *updated;

@end


/**
 *  GTLRTasks_TaskLists
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "items" property. If returned as the result of a query, it should
 *        support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRTasks_TaskLists : GTLRCollectionObject

/** ETag of the resource. */
@property(nonatomic, copy, nullable) NSString *ETag;

/**
 *  Collection of task lists.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRTasks_TaskList *> *items;

/** Type of the resource. This is always "tasks#taskLists". */
@property(nonatomic, copy, nullable) NSString *kind;

/** Token that can be used to request the next page of this result. */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

@end


/**
 *  GTLRTasks_Tasks
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "items" property. If returned as the result of a query, it should
 *        support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRTasks_Tasks : GTLRCollectionObject

/** ETag of the resource. */
@property(nonatomic, copy, nullable) NSString *ETag;

/**
 *  Collection of tasks.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRTasks_Task *> *items;

/** Type of the resource. This is always "tasks#tasks". */
@property(nonatomic, copy, nullable) NSString *kind;

/** Token used to access the next page of this result. */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

@end

NS_ASSUME_NONNULL_END
