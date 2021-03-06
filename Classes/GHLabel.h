#import "GHResource.h"


@class GHRepository;

@interface GHLabel : GHResource
@property(nonatomic,strong)GHRepository *repository;
@property(nonatomic,strong)UIColor *color;
@property(nonatomic,strong)NSString *hexColor;
@property(nonatomic,strong)NSString *name;

- (id)initWithRepository:(GHRepository *)repo name:(NSString *)name;
- (void)saveWithParams:(NSDictionary *)params start:(resourceStart)start success:(resourceSuccess)success failure:(resourceFailure)failure;
@end
