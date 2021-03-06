/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOComposedTransitBaseRouteLeg : GEOComposedRouteLeg {
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _transitStepRange;
}

- (id)_accessPointsForTransitStep:(id)arg1;
- (id)endingTransitStop;
- (id)enterTransitAccessPoints;
- (id)exitTransitAccessPoints;
- (id)initWithComposedRoute:(id)arg1 routeLegType:(int)arg2 stepRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3 transitStepRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4 pointRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg5;
- (id)startingTransitStop;
- (struct _NSRange { unsigned int x1; unsigned int x2; })transitStepRange;

@end
