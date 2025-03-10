// swift-tools-version:5.1

import PackageDescription

let package = Package(
    name: "TurmsClient",
    platforms: [
        .macOS(.v10_14),
        .iOS(.v12),
    ],
    products: [
        .library(
            name: "TurmsClient",
            targets: ["TurmsClient"]
        ),
    ],
    dependencies: [
        // Don't use Combine because of "@available(OSX 10.15, iOS 13.0, tvOS 13.0, watchOS 6.0, *)"
        .package(url: "https://github.com/mxcl/PromiseKit", from: "6.16.0"),
        .package(url: "https://github.com/apple/swift-protobuf", from: "1.19.0"),
        .package(url: "https://github.com/daltoniam/Starscream", .branch("master")),

        // Dev deps
        .package(url: "https://github.com/shibapm/PackageConfig", from: "1.1.3"),
        .package(url: "https://github.com/nicklockwood/SwiftFormat", from: "0.49.6"),
        .package(url: "https://github.com/Realm/SwiftLint", from: "0.47.0"),
        .package(url: "https://github.com/orta/Komondor", from: "1.1.3"),
    ],
    targets: [
        .target(
            name: "TurmsClient",
            dependencies: ["PromiseKit", "Starscream", "SwiftProtobuf"]
        ),
        .testTarget(
            name: "TurmsClientTests",
            dependencies: ["TurmsClient", "Starscream", "SwiftProtobuf"]
        ),
    ],
    swiftLanguageVersions: [.v5]
)

#if canImport(PackageConfig)
    import PackageConfig

    let config = PackageConfig([
        "komondor": [
            "pre-commit": [
                "swift run swiftformat .",
                "swift run swiftlint autocorrect --path Sources/",
                "git add .",
            ],
        ],
    ])
#endif
