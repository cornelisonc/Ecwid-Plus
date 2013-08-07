// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to Order.h instead.

#import <CoreData/CoreData.h>
#import "NSManagedObject.h"

extern const struct OrderAttributes {
	__unsafe_unretained NSString *number;
	__unsafe_unretained NSString *paymentStatus;
	__unsafe_unretained NSString *shippingMethod;
} OrderAttributes;

extern const struct OrderRelationships {
	__unsafe_unretained NSString *personOrder;
} OrderRelationships;

extern const struct OrderFetchedProperties {
} OrderFetchedProperties;

@class Person;





@interface OrderID : NSManagedObjectID {}
@end

@interface _Order : NSManagedObject {}
+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
- (OrderID*)objectID;





@property (nonatomic, strong) NSNumber* number;



@property int16_t numberValue;
- (int16_t)numberValue;
- (void)setNumberValue:(int16_t)value_;

//- (BOOL)validateNumber:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) NSString* paymentStatus;



//- (BOOL)validatePaymentStatus:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) NSString* shippingMethod;



//- (BOOL)validateShippingMethod:(id*)value_ error:(NSError**)error_;





@property (nonatomic, strong) NSSet *personOrder;

- (NSMutableSet*)personOrderSet;





@end

@interface _Order (CoreDataGeneratedAccessors)

- (void)addPersonOrder:(NSSet*)value_;
- (void)removePersonOrder:(NSSet*)value_;
- (void)addPersonOrderObject:(Person*)value_;
- (void)removePersonOrderObject:(Person*)value_;

@end

@interface _Order (CoreDataGeneratedPrimitiveAccessors)


- (NSNumber*)primitiveNumber;
- (void)setPrimitiveNumber:(NSNumber*)value;

- (int16_t)primitiveNumberValue;
- (void)setPrimitiveNumberValue:(int16_t)value_;




- (NSString*)primitivePaymentStatus;
- (void)setPrimitivePaymentStatus:(NSString*)value;




- (NSString*)primitiveShippingMethod;
- (void)setPrimitiveShippingMethod:(NSString*)value;





- (NSMutableSet*)primitivePersonOrder;
- (void)setPrimitivePersonOrder:(NSMutableSet*)value;


@end
