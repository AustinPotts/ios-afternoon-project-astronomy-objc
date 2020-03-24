//
//  MarsPhoto.swift
//  MarsRover-xcode
//
//  Created by Austin Potts on 3/24/20.
//  Copyright © 2020 Lambda School. All rights reserved.
//

import Foundation
import UIKit


@objc class MarsPhotoReference: JSONSerialization {
    
    //properties
    @objc var id: Int = 0
    @objc var sol: Int = 0
    @objc let camera: String //Camera FIXME
    @objc let earthDate: Date
    
    @objc let imageURL: URL
    
    enum CodingKeys: String, CodingKey {
          case id
          case sol
          case camera
          case earthDate
          case imageURL = "imgSrc"
      }
    
    @objc init(id: Int = 0, sol: Int = 0, camera: String, earthDate: Date, imageURL: URL) {
        self.id = id
        self.sol = sol
        self.camera = camera
        self.earthDate = earthDate
        self.imageURL = imageURL
    }
    
    
    
    //init
    
    
    
}
