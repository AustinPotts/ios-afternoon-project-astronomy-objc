//
//  MarsRover.swift
//  MarsRover-xcode
//
//  Created by Austin Potts on 3/24/20.
//  Copyright © 2020 Lambda School. All rights reserved.
//

import Foundation


@objc class MarsRover: JSONSerialization {
    
    @objc let name: String
    @objc let launchDate: Date
    @objc let landingDate: Date
    
   @objc enum Status: Int { // ISSUE: @objc can't use enum string values
        case active, complete
    }
    @objc let status: Status
    
    @objc let maxSol: Int
    @objc let maxDate: Date
    
    @objc let numberOfPhotos: Int
    
   // @objc let solDescriptions: [SolDescription] FIXME: UNCOMMENT
    
    enum CodingKeys: String, CodingKey { // FIXME: ENUM OBJC ISSUE
        case name
        case launchDate
        case landingDate
        case status
        case maxSol
        case maxDate
        case numberOfPhotos = "totalPhotos"
   //     case solDescriptions = "photos" FIXME: UNCOMMENT
    }
    
    
    @objc init(name: String, launchDate: Date, landingDate: Date, status: Status, maxSol: Int, maxDate: Date, numberOfPhotos: Int){
        
        self.name = name
        self.launchDate = launchDate
        self.landingDate = landingDate
        self.status = status
        self.maxSol = maxSol
        self.maxDate = maxDate
        self.numberOfPhotos = numberOfPhotos
        
    }
    
    
    
    
}
