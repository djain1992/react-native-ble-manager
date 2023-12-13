#import "React/RCTBridgeModule.h"
#import "React/RCTEventEmitter.h"
#import <CoreBluetooth/CoreBluetooth.h>

@interface BleManager : RCTEventEmitter <RCTBridgeModule, CBCentralManagerDelegate, CBPeripheralDelegate, NSStreamDelegate>

//// Returns the static CBCentralManager instance used by this library.
//// May have unexpected behavior when using multiple instances of CBCentralManager.
//// For integration with external libraries, advanced use only.
+(CBCentralManager *)getCentralManager;
//
//// Returns the singleton instance of this class initiated by RN.
//// For integration with external libraries, advanced use only.
+(BleManager *)getInstance;
@end
