//
//  SolDescription.swift
//  MarsRover-xcode
//
//  Created by Austin Potts on 3/24/20.
//  Copyright © 2020 Lambda School. All rights reserved.
//

import Foundation

struct SolDescription: Codable, Equatable {
    let sol: Int
    let totalPhotos: Int
    let cameras: [String]
}
