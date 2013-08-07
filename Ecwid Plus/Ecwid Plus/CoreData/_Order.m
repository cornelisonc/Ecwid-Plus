// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to Order.m instead.

#import "_Order.h"

const struct OrderAttributes OrderAttributes = {
	.number = @"number",
	.paymentStatus = @"paymentStatus",
	.shippingMethod = @"shippingMethod",
};

const struct OrderRelationships OrderRelationships = {
	.personOrder = @"personOrder",
};

const struct OrderFetchedProperties OrderFetchedProperties = {
};

@implementation OrderID
@end

@implementation _Order

+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_ {
	NSParameterAssert(moc_);
	return [NSEntityDescription insertNewObjectForEntityForName:@"Order" inManagedObjectContext:moc_];
}

+ (NSString*)entityName {
	return @"Order";
}

+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_ {
	NSParameterAssert(moc_);
	return [NSEntityDescription entityForName:@"Order" inManagedObjectContext:moc_];
}

- (OrderID*)objectID {
	return (OrderID*)[super objectID];
}

+ (NSSet*)keyPathsForValuesAffectingValueForKey:(NSString*)key {
	NSSet *keyPaths = [super keyPathsForValuesAffectingValueForKey:key];
	
	if ([key isEqualToString:@"numberValue"]) {
		NSSet *affectingKey = [NSSet setWithObject:@"number"];
		keyPaths = [keyPaths setByAddingObjectsFromSet:affectingKey];
		return keyPaths;
	}

	return keyPaths;
}




@dynamic number;



- (int16_t)numberValue {
	NSNumber *result = [self number];
	return [result shortValue];
}

- (void)setNumberValue:(int16_t)value_ {
	[self setNumber:[NSNumber numberWithShort:value_]];
}

- (int16_t)primitiveNumberValue {
	NSNumber *result = [self primitiveNumber];
	return [result shortValue];
}

- (void)setPrimitiveNumberValue:(int16_t)value_ {
	[self setPrimitiveNumber:[NSNumber numberWithShort:value_]];
}





@dynamic paymentStatus;






@dynamic shippingMethod;






@dynamic personOrder;

	
- (NSMutableSet*)personOrderSet {
	[self willAccessValueForKey:@"personOrder"];
  
	NSMutableSet *result = (NSMutableSet*)[self mutableSetValueForKey:@"personOrder"];
  
	[self didAccessValueForKey:@"personOrder"];
	return result;
}
	






@end
