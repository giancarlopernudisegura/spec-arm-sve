
/* Automatically generated struct definitions for the Data API.
 * Do not edit manually, changes will be overwritten.           */

#define RNA_RUNTIME

#include <float.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>

#include <stddef.h>

#include "MEM_guardedalloc.h"

#include "DNA_ID.h"
#include "DNA_scene_types.h"
#include "BLI_blenlib.h"

#include "BLI_utildefines.h"

#include "BKE_context.h"
#include "BKE_library.h"
#include "BKE_main.h"
#include "BKE_report.h"
#include "RNA_define.h"
#include "RNA_types.h"
#include "rna_internal.h"

extern StructRNA RNA_Struct;
extern StructRNA RNA_Property;
extern StructRNA RNA_BoolProperty;
extern StructRNA RNA_IntProperty;
extern StructRNA RNA_FloatProperty;
extern StructRNA RNA_StringProperty;
extern StructRNA RNA_EnumProperty;
extern StructRNA RNA_EnumPropertyItem;
extern StructRNA RNA_PointerProperty;
extern StructRNA RNA_CollectionProperty;
extern StructRNA RNA_Function;
extern StructRNA RNA_BlenderRNA;
extern StructRNA RNA_UnknownType;
extern StructRNA RNA_AnyType;
extern StructRNA RNA_ID;
extern StructRNA RNA_PropertyGroupItem;
extern StructRNA RNA_PropertyGroup;
extern StructRNA RNA_IDMaterials;
extern StructRNA RNA_Library;
extern StructRNA RNA_Texture;
extern StructRNA RNA_CloudsTexture;
extern StructRNA RNA_WoodTexture;
extern StructRNA RNA_MarbleTexture;
extern StructRNA RNA_MagicTexture;
extern StructRNA RNA_BlendTexture;
extern StructRNA RNA_StucciTexture;
extern StructRNA RNA_NoiseTexture;
extern StructRNA RNA_ImageTexture;
extern StructRNA RNA_EnvironmentMapTexture;
extern StructRNA RNA_MusgraveTexture;
extern StructRNA RNA_VoronoiTexture;
extern StructRNA RNA_DistortedNoiseTexture;
extern StructRNA RNA_PointDensity;
extern StructRNA RNA_PointDensityTexture;
extern StructRNA RNA_VoxelData;
extern StructRNA RNA_VoxelDataTexture;
extern StructRNA RNA_OceanTexData;
extern StructRNA RNA_OceanTexture;
extern StructRNA RNA_TextureSlot;
extern StructRNA RNA_EnvironmentMap;
extern StructRNA RNA_TexMapping;
extern StructRNA RNA_ColorMapping;
extern StructRNA RNA_Action;
extern StructRNA RNA_ActionFCurves;
extern StructRNA RNA_ActionGroups;
extern StructRNA RNA_ActionPoseMarkers;
extern StructRNA RNA_ActionGroup;
extern StructRNA RNA_DopeSheet;
extern StructRNA RNA_AnimData;
extern StructRNA RNA_NlaTracks;
extern StructRNA RNA_AnimDataDrivers;
extern StructRNA RNA_KeyingSet;
extern StructRNA RNA_KeyingSetPaths;
extern StructRNA RNA_KeyingSetPath;
extern StructRNA RNA_KeyingSetInfo;
extern StructRNA RNA_AnimViz;
extern StructRNA RNA_AnimVizOnionSkinning;
extern StructRNA RNA_AnimVizMotionPaths;
extern StructRNA RNA_MotionPath;
extern StructRNA RNA_MotionPathVert;
extern StructRNA RNA_Actuator;
extern StructRNA RNA_ActionActuator;
extern StructRNA RNA_ObjectActuator;
extern StructRNA RNA_CameraActuator;
extern StructRNA RNA_SoundActuator;
extern StructRNA RNA_PropertyActuator;
extern StructRNA RNA_ConstraintActuator;
extern StructRNA RNA_EditObjectActuator;
extern StructRNA RNA_SceneActuator;
extern StructRNA RNA_RandomActuator;
extern StructRNA RNA_MessageActuator;
extern StructRNA RNA_GameActuator;
extern StructRNA RNA_VisibilityActuator;
extern StructRNA RNA_Filter2DActuator;
extern StructRNA RNA_ParentActuator;
extern StructRNA RNA_StateActuator;
extern StructRNA RNA_ArmatureActuator;
extern StructRNA RNA_SteeringActuator;
extern StructRNA RNA_MouseActuator;
extern StructRNA RNA_Armature;
extern StructRNA RNA_ArmatureBones;
extern StructRNA RNA_ArmatureEditBones;
extern StructRNA RNA_Bone;
extern StructRNA RNA_EditBone;
extern StructRNA RNA_BoidRule;
extern StructRNA RNA_BoidRuleGoal;
extern StructRNA RNA_BoidRuleAvoid;
extern StructRNA RNA_BoidRuleAvoidCollision;
extern StructRNA RNA_BoidRuleFollowLeader;
extern StructRNA RNA_BoidRuleAverageSpeed;
extern StructRNA RNA_BoidRuleFight;
extern StructRNA RNA_BoidState;
extern StructRNA RNA_BoidSettings;
extern StructRNA RNA_Brush;
extern StructRNA RNA_BrushCapabilities;
extern StructRNA RNA_SculptToolCapabilities;
extern StructRNA RNA_ImapaintToolCapabilities;
extern StructRNA RNA_BrushTextureSlot;
extern StructRNA RNA_OperatorStrokeElement;
extern StructRNA RNA_Camera;
extern StructRNA RNA_ClothSettings;
extern StructRNA RNA_ClothCollisionSettings;
extern StructRNA RNA_CurveMapPoint;
extern StructRNA RNA_CurveMap;
extern StructRNA RNA_CurveMapPoints;
extern StructRNA RNA_CurveMapping;
extern StructRNA RNA_ColorRampElement;
extern StructRNA RNA_ColorRamp;
extern StructRNA RNA_ColorRampElements;
extern StructRNA RNA_Histogram;
extern StructRNA RNA_Scopes;
extern StructRNA RNA_ColorManagedDisplaySettings;
extern StructRNA RNA_ColorManagedViewSettings;
extern StructRNA RNA_ColorManagedInputColorspaceSettings;
extern StructRNA RNA_ColorManagedSequencerColorspaceSettings;
extern StructRNA RNA_Constraint;
extern StructRNA RNA_ConstraintTarget;
extern StructRNA RNA_ChildOfConstraint;
extern StructRNA RNA_PythonConstraint;
extern StructRNA RNA_StretchToConstraint;
extern StructRNA RNA_FollowPathConstraint;
extern StructRNA RNA_LockedTrackConstraint;
extern StructRNA RNA_ActionConstraint;
extern StructRNA RNA_CopyScaleConstraint;
extern StructRNA RNA_MaintainVolumeConstraint;
extern StructRNA RNA_CopyLocationConstraint;
extern StructRNA RNA_CopyRotationConstraint;
extern StructRNA RNA_CopyTransformsConstraint;
extern StructRNA RNA_FloorConstraint;
extern StructRNA RNA_TrackToConstraint;
extern StructRNA RNA_KinematicConstraint;
extern StructRNA RNA_RigidBodyJointConstraint;
extern StructRNA RNA_ClampToConstraint;
extern StructRNA RNA_LimitDistanceConstraint;
extern StructRNA RNA_LimitScaleConstraint;
extern StructRNA RNA_LimitRotationConstraint;
extern StructRNA RNA_LimitLocationConstraint;
extern StructRNA RNA_TransformConstraint;
extern StructRNA RNA_ShrinkwrapConstraint;
extern StructRNA RNA_DampedTrackConstraint;
extern StructRNA RNA_SplineIKConstraint;
extern StructRNA RNA_PivotConstraint;
extern StructRNA RNA_FollowTrackConstraint;
extern StructRNA RNA_CameraSolverConstraint;
extern StructRNA RNA_ObjectSolverConstraint;
extern StructRNA RNA_Context;
extern StructRNA RNA_Controller;
extern StructRNA RNA_ExpressionController;
extern StructRNA RNA_PythonController;
extern StructRNA RNA_AndController;
extern StructRNA RNA_OrController;
extern StructRNA RNA_NorController;
extern StructRNA RNA_NandController;
extern StructRNA RNA_XorController;
extern StructRNA RNA_XnorController;
extern StructRNA RNA_Curve;
extern StructRNA RNA_CurveSplines;
extern StructRNA RNA_SurfaceCurve;
extern StructRNA RNA_TextCurve;
extern StructRNA RNA_TextBox;
extern StructRNA RNA_TextCharacterFormat;
extern StructRNA RNA_SplinePoint;
extern StructRNA RNA_BezierSplinePoint;
extern StructRNA RNA_Spline;
extern StructRNA RNA_SplinePoints;
extern StructRNA RNA_SplineBezierPoints;
extern StructRNA RNA_DynamicPaintCanvasSettings;
extern StructRNA RNA_DynamicPaintSurfaces;
extern StructRNA RNA_DynamicPaintBrushSettings;
extern StructRNA RNA_DynamicPaintSurface;
extern StructRNA RNA_FCurve;
extern StructRNA RNA_FCurveKeyframePoints;
extern StructRNA RNA_FCurveModifiers;
extern StructRNA RNA_Keyframe;
extern StructRNA RNA_FCurveSample;
extern StructRNA RNA_DriverTarget;
extern StructRNA RNA_DriverVariable;
extern StructRNA RNA_Driver;
extern StructRNA RNA_ChannelDriverVariables;
extern StructRNA RNA_FModifier;
extern StructRNA RNA_FModifierGenerator;
extern StructRNA RNA_FModifierFunctionGenerator;
extern StructRNA RNA_FModifierEnvelope;
extern StructRNA RNA_FModifierEnvelopeControlPoints;
extern StructRNA RNA_FModifierEnvelopeControlPoint;
extern StructRNA RNA_FModifierCycles;
extern StructRNA RNA_FModifierPython;
extern StructRNA RNA_FModifierLimits;
extern StructRNA RNA_FModifierNoise;
extern StructRNA RNA_FModifierStepped;
extern StructRNA RNA_FluidSettings;
extern StructRNA RNA_DomainFluidSettings;
extern StructRNA RNA_FluidMeshVertex;
extern StructRNA RNA_FluidFluidSettings;
extern StructRNA RNA_ObstacleFluidSettings;
extern StructRNA RNA_InflowFluidSettings;
extern StructRNA RNA_OutflowFluidSettings;
extern StructRNA RNA_ParticleFluidSettings;
extern StructRNA RNA_ControlFluidSettings;
extern StructRNA RNA_GreasePencil;
extern StructRNA RNA_GreasePencilLayers;
extern StructRNA RNA_GPencilLayer;
extern StructRNA RNA_GPencilFrames;
extern StructRNA RNA_GPencilFrame;
extern StructRNA RNA_GPencilStrokes;
extern StructRNA RNA_GPencilStroke;
extern StructRNA RNA_GPencilStrokePoints;
extern StructRNA RNA_GPencilStrokePoint;
extern StructRNA RNA_Group;
extern StructRNA RNA_GroupObjects;
extern StructRNA RNA_RenderSlot;
extern StructRNA RNA_RenderSlots;
extern StructRNA RNA_Image;
extern StructRNA RNA_ImageUser;
extern StructRNA RNA_Key;
extern StructRNA RNA_ShapeKey;
extern StructRNA RNA_ShapeKeyPoint;
extern StructRNA RNA_ShapeKeyCurvePoint;
extern StructRNA RNA_ShapeKeyBezierPoint;
extern StructRNA RNA_Lamp;
extern StructRNA RNA_LampTextureSlots;
extern StructRNA RNA_PointLamp;
extern StructRNA RNA_AreaLamp;
extern StructRNA RNA_SpotLamp;
extern StructRNA RNA_SunLamp;
extern StructRNA RNA_LampSkySettings;
extern StructRNA RNA_HemiLamp;
extern StructRNA RNA_LampTextureSlot;
extern StructRNA RNA_Lattice;
extern StructRNA RNA_LatticePoint;
extern StructRNA RNA_LineStyleModifier;
extern StructRNA RNA_LineStyleColorModifier;
extern StructRNA RNA_LineStyleColorModifier_AlongStroke;
extern StructRNA RNA_LineStyleColorModifier_DistanceFromCamera;
extern StructRNA RNA_LineStyleColorModifier_DistanceFromObject;
extern StructRNA RNA_LineStyleColorModifier_Material;
extern StructRNA RNA_LineStyleAlphaModifier;
extern StructRNA RNA_LineStyleAlphaModifier_AlongStroke;
extern StructRNA RNA_LineStyleAlphaModifier_DistanceFromCamera;
extern StructRNA RNA_LineStyleAlphaModifier_DistanceFromObject;
extern StructRNA RNA_LineStyleAlphaModifier_Material;
extern StructRNA RNA_LineStyleThicknessModifier;
extern StructRNA RNA_LineStyleThicknessModifier_AlongStroke;
extern StructRNA RNA_LineStyleThicknessModifier_DistanceFromCamera;
extern StructRNA RNA_LineStyleThicknessModifier_DistanceFromObject;
extern StructRNA RNA_LineStyleThicknessModifier_Material;
extern StructRNA RNA_LineStyleThicknessModifier_Calligraphy;
extern StructRNA RNA_LineStyleGeometryModifier;
extern StructRNA RNA_LineStyleGeometryModifier_Sampling;
extern StructRNA RNA_LineStyleGeometryModifier_BezierCurve;
extern StructRNA RNA_LineStyleGeometryModifier_SinusDisplacement;
extern StructRNA RNA_LineStyleGeometryModifier_SpatialNoise;
extern StructRNA RNA_LineStyleGeometryModifier_PerlinNoise1D;
extern StructRNA RNA_LineStyleGeometryModifier_PerlinNoise2D;
extern StructRNA RNA_LineStyleGeometryModifier_BackboneStretcher;
extern StructRNA RNA_LineStyleGeometryModifier_TipRemover;
extern StructRNA RNA_LineStyleGeometryModifier_Polygonalization;
extern StructRNA RNA_LineStyleGeometryModifier_GuidingLines;
extern StructRNA RNA_LineStyleGeometryModifier_Blueprint;
extern StructRNA RNA_LineStyleGeometryModifier_2DOffset;
extern StructRNA RNA_LineStyleGeometryModifier_2DTransform;
extern StructRNA RNA_FreestyleLineStyle;
extern StructRNA RNA_LineStyleTextureSlots;
extern StructRNA RNA_LineStyleColorModifiers;
extern StructRNA RNA_LineStyleAlphaModifiers;
extern StructRNA RNA_LineStyleThicknessModifiers;
extern StructRNA RNA_LineStyleGeometryModifiers;
extern StructRNA RNA_LineStyleTextureSlot;
extern StructRNA RNA_BlendData;
extern StructRNA RNA_BlendDataCameras;
extern StructRNA RNA_BlendDataScenes;
extern StructRNA RNA_BlendDataObjects;
extern StructRNA RNA_BlendDataMaterials;
extern StructRNA RNA_BlendDataNodeTrees;
extern StructRNA RNA_BlendDataMeshes;
extern StructRNA RNA_BlendDataLamps;
extern StructRNA RNA_BlendDataLibraries;
extern StructRNA RNA_BlendDataScreens;
extern StructRNA RNA_BlendDataWindowManagers;
extern StructRNA RNA_BlendDataImages;
extern StructRNA RNA_BlendDataLattices;
extern StructRNA RNA_BlendDataCurves;
extern StructRNA RNA_BlendDataMetaBalls;
extern StructRNA RNA_BlendDataFonts;
extern StructRNA RNA_BlendDataTextures;
extern StructRNA RNA_BlendDataBrushes;
extern StructRNA RNA_BlendDataWorlds;
extern StructRNA RNA_BlendDataGroups;
extern StructRNA RNA_BlendDataTexts;
extern StructRNA RNA_BlendDataSpeakers;
extern StructRNA RNA_BlendDataSounds;
extern StructRNA RNA_BlendDataArmatures;
extern StructRNA RNA_BlendDataActions;
extern StructRNA RNA_BlendDataParticles;
extern StructRNA RNA_BlendDataGreasePencils;
extern StructRNA RNA_BlendDataMovieClips;
extern StructRNA RNA_BlendDataMasks;
extern StructRNA RNA_BlendDataLineStyles;
extern StructRNA RNA_Material;
extern StructRNA RNA_MaterialTextureSlots;
extern StructRNA RNA_TexPaintSlot;
extern StructRNA RNA_MaterialRaytraceMirror;
extern StructRNA RNA_MaterialRaytraceTransparency;
extern StructRNA RNA_MaterialVolume;
extern StructRNA RNA_MaterialHalo;
extern StructRNA RNA_MaterialSubsurfaceScattering;
extern StructRNA RNA_MaterialTextureSlot;
extern StructRNA RNA_MaterialStrand;
extern StructRNA RNA_MaterialPhysics;
extern StructRNA RNA_MaterialGameSettings;
extern StructRNA RNA_Mesh;
extern StructRNA RNA_MeshVertices;
extern StructRNA RNA_MeshEdges;
extern StructRNA RNA_MeshTessFaces;
extern StructRNA RNA_MeshLoops;
extern StructRNA RNA_MeshPolygons;
extern StructRNA RNA_UVLoopLayers;
extern StructRNA RNA_TessfaceUVTextures;
extern StructRNA RNA_UVTextures;
extern StructRNA RNA_VertexColors;
extern StructRNA RNA_LoopColors;
extern StructRNA RNA_FloatProperties;
extern StructRNA RNA_IntProperties;
extern StructRNA RNA_StringProperties;
extern StructRNA RNA_MeshSkinVertexLayer;
extern StructRNA RNA_MeshSkinVertex;
extern StructRNA RNA_MeshVertex;
extern StructRNA RNA_VertexGroupElement;
extern StructRNA RNA_MeshEdge;
extern StructRNA RNA_MeshTessFace;
extern StructRNA RNA_MeshLoop;
extern StructRNA RNA_MeshPolygon;
extern StructRNA RNA_MeshUVLoopLayer;
extern StructRNA RNA_MeshUVLoop;
extern StructRNA RNA_MeshTextureFaceLayer;
extern StructRNA RNA_MeshTextureFace;
extern StructRNA RNA_MeshTexturePolyLayer;
extern StructRNA RNA_MeshTexturePoly;
extern StructRNA RNA_MeshColorLayer;
extern StructRNA RNA_MeshColor;
extern StructRNA RNA_MeshLoopColorLayer;
extern StructRNA RNA_MeshLoopColor;
extern StructRNA RNA_MeshFloatPropertyLayer;
extern StructRNA RNA_MeshFloatProperty;
extern StructRNA RNA_MeshIntPropertyLayer;
extern StructRNA RNA_MeshIntProperty;
extern StructRNA RNA_MeshStringPropertyLayer;
extern StructRNA RNA_MeshStringProperty;
extern StructRNA RNA_MetaElement;
extern StructRNA RNA_MetaBall;
extern StructRNA RNA_MetaBallElements;
extern StructRNA RNA_Modifier;
extern StructRNA RNA_SubsurfModifier;
extern StructRNA RNA_LatticeModifier;
extern StructRNA RNA_CurveModifier;
extern StructRNA RNA_BuildModifier;
extern StructRNA RNA_MirrorModifier;
extern StructRNA RNA_DecimateModifier;
extern StructRNA RNA_WaveModifier;
extern StructRNA RNA_ArmatureModifier;
extern StructRNA RNA_HookModifier;
extern StructRNA RNA_SoftBodyModifier;
extern StructRNA RNA_BooleanModifier;
extern StructRNA RNA_ArrayModifier;
extern StructRNA RNA_EdgeSplitModifier;
extern StructRNA RNA_DisplaceModifier;
extern StructRNA RNA_UVProjectModifier;
extern StructRNA RNA_UVProjector;
extern StructRNA RNA_SmoothModifier;
extern StructRNA RNA_CastModifier;
extern StructRNA RNA_MeshDeformModifier;
extern StructRNA RNA_ParticleSystemModifier;
extern StructRNA RNA_ParticleInstanceModifier;
extern StructRNA RNA_ExplodeModifier;
extern StructRNA RNA_ClothModifier;
extern StructRNA RNA_CollisionModifier;
extern StructRNA RNA_BevelModifier;
extern StructRNA RNA_ShrinkwrapModifier;
extern StructRNA RNA_FluidSimulationModifier;
extern StructRNA RNA_MaskModifier;
extern StructRNA RNA_SimpleDeformModifier;
extern StructRNA RNA_WarpModifier;
extern StructRNA RNA_MultiresModifier;
extern StructRNA RNA_SurfaceModifier;
extern StructRNA RNA_SmokeModifier;
extern StructRNA RNA_SolidifyModifier;
extern StructRNA RNA_ScrewModifier;
extern StructRNA RNA_UVWarpModifier;
extern StructRNA RNA_VertexWeightEditModifier;
extern StructRNA RNA_VertexWeightMixModifier;
extern StructRNA RNA_VertexWeightProximityModifier;
extern StructRNA RNA_DynamicPaintModifier;
extern StructRNA RNA_OceanModifier;
extern StructRNA RNA_RemeshModifier;
extern StructRNA RNA_SkinModifier;
extern StructRNA RNA_LaplacianSmoothModifier;
extern StructRNA RNA_TriangulateModifier;
extern StructRNA RNA_MeshCacheModifier;
extern StructRNA RNA_LaplacianDeformModifier;
extern StructRNA RNA_WireframeModifier;
extern StructRNA RNA_NlaTrack;
extern StructRNA RNA_NlaStrips;
extern StructRNA RNA_NlaStrip;
extern StructRNA RNA_NodeSocket;
extern StructRNA RNA_NodeSocketInterface;
extern StructRNA RNA_Node;
extern StructRNA RNA_NodeInputs;
extern StructRNA RNA_NodeOutputs;
extern StructRNA RNA_NodeLink;
extern StructRNA RNA_NodeInternalSocketTemplate;
extern StructRNA RNA_NodeInternal;
extern StructRNA RNA_ShaderNode;
extern StructRNA RNA_CompositorNode;
extern StructRNA RNA_TextureNode;
extern StructRNA RNA_NodeTree;
extern StructRNA RNA_Nodes;
extern StructRNA RNA_NodeLinks;
extern StructRNA RNA_NodeTreeInputs;
extern StructRNA RNA_NodeTreeOutputs;
extern StructRNA RNA_NodeSocketStandard;
extern StructRNA RNA_NodeSocketInterfaceStandard;
extern StructRNA RNA_NodeSocketFloat;
extern StructRNA RNA_NodeSocketInterfaceFloat;
extern StructRNA RNA_NodeSocketFloatUnsigned;
extern StructRNA RNA_NodeSocketInterfaceFloatUnsigned;
extern StructRNA RNA_NodeSocketFloatPercentage;
extern StructRNA RNA_NodeSocketInterfaceFloatPercentage;
extern StructRNA RNA_NodeSocketFloatFactor;
extern StructRNA RNA_NodeSocketInterfaceFloatFactor;
extern StructRNA RNA_NodeSocketFloatAngle;
extern StructRNA RNA_NodeSocketInterfaceFloatAngle;
extern StructRNA RNA_NodeSocketFloatTime;
extern StructRNA RNA_NodeSocketInterfaceFloatTime;
extern StructRNA RNA_NodeSocketInt;
extern StructRNA RNA_NodeSocketInterfaceInt;
extern StructRNA RNA_NodeSocketIntUnsigned;
extern StructRNA RNA_NodeSocketInterfaceIntUnsigned;
extern StructRNA RNA_NodeSocketIntPercentage;
extern StructRNA RNA_NodeSocketInterfaceIntPercentage;
extern StructRNA RNA_NodeSocketIntFactor;
extern StructRNA RNA_NodeSocketInterfaceIntFactor;
extern StructRNA RNA_NodeSocketBool;
extern StructRNA RNA_NodeSocketInterfaceBool;
extern StructRNA RNA_NodeSocketVector;
extern StructRNA RNA_NodeSocketInterfaceVector;
extern StructRNA RNA_NodeSocketVectorTranslation;
extern StructRNA RNA_NodeSocketInterfaceVectorTranslation;
extern StructRNA RNA_NodeSocketVectorDirection;
extern StructRNA RNA_NodeSocketInterfaceVectorDirection;
extern StructRNA RNA_NodeSocketVectorVelocity;
extern StructRNA RNA_NodeSocketInterfaceVectorVelocity;
extern StructRNA RNA_NodeSocketVectorAcceleration;
extern StructRNA RNA_NodeSocketInterfaceVectorAcceleration;
extern StructRNA RNA_NodeSocketVectorEuler;
extern StructRNA RNA_NodeSocketInterfaceVectorEuler;
extern StructRNA RNA_NodeSocketVectorXYZ;
extern StructRNA RNA_NodeSocketInterfaceVectorXYZ;
extern StructRNA RNA_NodeSocketColor;
extern StructRNA RNA_NodeSocketInterfaceColor;
extern StructRNA RNA_NodeSocketString;
extern StructRNA RNA_NodeSocketInterfaceString;
extern StructRNA RNA_NodeSocketShader;
extern StructRNA RNA_NodeSocketInterfaceShader;
extern StructRNA RNA_NodeSocketVirtual;
extern StructRNA RNA_CompositorNodeTree;
extern StructRNA RNA_ShaderNodeTree;
extern StructRNA RNA_TextureNodeTree;
extern StructRNA RNA_NodeFrame;
extern StructRNA RNA_NodeGroup;
extern StructRNA RNA_NodeGroupInput;
extern StructRNA RNA_NodeGroupOutput;
extern StructRNA RNA_NodeReroute;
extern StructRNA RNA_ShaderNodeOutput;
extern StructRNA RNA_ShaderNodeMaterial;
extern StructRNA RNA_ShaderNodeRGB;
extern StructRNA RNA_ShaderNodeValue;
extern StructRNA RNA_ShaderNodeMixRGB;
extern StructRNA RNA_ShaderNodeValToRGB;
extern StructRNA RNA_ShaderNodeRGBToBW;
extern StructRNA RNA_ShaderNodeTexture;
extern StructRNA RNA_ShaderNodeNormal;
extern StructRNA RNA_ShaderNodeGamma;
extern StructRNA RNA_ShaderNodeBrightContrast;
extern StructRNA RNA_ShaderNodeGeometry;
extern StructRNA RNA_ShaderNodeMapping;
extern StructRNA RNA_ShaderNodeVectorCurve;
extern StructRNA RNA_ShaderNodeRGBCurve;
extern StructRNA RNA_ShaderNodeCameraData;
extern StructRNA RNA_ShaderNodeLampData;
extern StructRNA RNA_ShaderNodeMath;
extern StructRNA RNA_ShaderNodeVectorMath;
extern StructRNA RNA_ShaderNodeSqueeze;
extern StructRNA RNA_ShaderNodeExtendedMaterial;
extern StructRNA RNA_ShaderNodeInvert;
extern StructRNA RNA_ShaderNodeSeparateRGB;
extern StructRNA RNA_ShaderNodeCombineRGB;
extern StructRNA RNA_ShaderNodeHueSaturation;
extern StructRNA RNA_ShaderNodeOutputMaterial;
extern StructRNA RNA_ShaderNodeOutputLamp;
extern StructRNA RNA_ShaderNodeOutputWorld;
extern StructRNA RNA_ShaderNodeOutputLineStyle;
extern StructRNA RNA_ShaderNodeFresnel;
extern StructRNA RNA_ShaderNodeLayerWeight;
extern StructRNA RNA_ShaderNodeMixShader;
extern StructRNA RNA_ShaderNodeAddShader;
extern StructRNA RNA_ShaderNodeAttribute;
extern StructRNA RNA_ShaderNodeAmbientOcclusion;
extern StructRNA RNA_ShaderNodeBackground;
extern StructRNA RNA_ShaderNodeHoldout;
extern StructRNA RNA_ShaderNodeBsdfAnisotropic;
extern StructRNA RNA_ShaderNodeBsdfDiffuse;
extern StructRNA RNA_ShaderNodeBsdfGlossy;
extern StructRNA RNA_ShaderNodeBsdfGlass;
extern StructRNA RNA_ShaderNodeBsdfRefraction;
extern StructRNA RNA_ShaderNodeBsdfTranslucent;
extern StructRNA RNA_ShaderNodeBsdfTransparent;
extern StructRNA RNA_ShaderNodeBsdfVelvet;
extern StructRNA RNA_ShaderNodeBsdfToon;
extern StructRNA RNA_ShaderNodeBsdfHair;
extern StructRNA RNA_ShaderNodeSubsurfaceScattering;
extern StructRNA RNA_ShaderNodeVolumeAbsorption;
extern StructRNA RNA_ShaderNodeVolumeScatter;
extern StructRNA RNA_ShaderNodeEmission;
extern StructRNA RNA_ShaderNodeNewGeometry;
extern StructRNA RNA_ShaderNodeLightPath;
extern StructRNA RNA_ShaderNodeLightFalloff;
extern StructRNA RNA_ShaderNodeObjectInfo;
extern StructRNA RNA_ShaderNodeParticleInfo;
extern StructRNA RNA_ShaderNodeHairInfo;
extern StructRNA RNA_ShaderNodeWireframe;
extern StructRNA RNA_ShaderNodeWavelength;
extern StructRNA RNA_ShaderNodeBlackbody;
extern StructRNA RNA_ShaderNodeBump;
extern StructRNA RNA_ShaderNodeNormalMap;
extern StructRNA RNA_ShaderNodeTangent;
extern StructRNA RNA_ShaderNodeScript;
extern StructRNA RNA_ShaderNodeTexImage;
extern StructRNA RNA_ShaderNodeTexEnvironment;
extern StructRNA RNA_ShaderNodeTexSky;
extern StructRNA RNA_ShaderNodeTexGradient;
extern StructRNA RNA_ShaderNodeTexNoise;
extern StructRNA RNA_ShaderNodeTexMagic;
extern StructRNA RNA_ShaderNodeTexWave;
extern StructRNA RNA_ShaderNodeTexMusgrave;
extern StructRNA RNA_ShaderNodeTexVoronoi;
extern StructRNA RNA_ShaderNodeTexChecker;
extern StructRNA RNA_ShaderNodeTexBrick;
extern StructRNA RNA_ShaderNodeTexCoord;
extern StructRNA RNA_ShaderNodeVectorTransform;
extern StructRNA RNA_ShaderNodeSeparateHSV;
extern StructRNA RNA_ShaderNodeCombineHSV;
extern StructRNA RNA_ShaderNodeUVMap;
extern StructRNA RNA_ShaderNodeUVAlongStroke;
extern StructRNA RNA_ShaderNodeSeparateXYZ;
extern StructRNA RNA_ShaderNodeCombineXYZ;
extern StructRNA RNA_CompositorNodeViewer;
extern StructRNA RNA_CompositorNodeRGB;
extern StructRNA RNA_CompositorNodeValue;
extern StructRNA RNA_CompositorNodeMixRGB;
extern StructRNA RNA_CompositorNodeValToRGB;
extern StructRNA RNA_CompositorNodeRGBToBW;
extern StructRNA RNA_CompositorNodeNormal;
extern StructRNA RNA_CompositorNodeCurveVec;
extern StructRNA RNA_CompositorNodeCurveRGB;
extern StructRNA RNA_CompositorNodeAlphaOver;
extern StructRNA RNA_CompositorNodeBlur;
extern StructRNA RNA_CompositorNodeFilter;
extern StructRNA RNA_CompositorNodeMapValue;
extern StructRNA RNA_CompositorNodeMapRange;
extern StructRNA RNA_CompositorNodeTime;
extern StructRNA RNA_CompositorNodeVecBlur;
extern StructRNA RNA_CompositorNodeSepRGBA;
extern StructRNA RNA_CompositorNodeSepHSVA;
extern StructRNA RNA_CompositorNodeSetAlpha;
extern StructRNA RNA_CompositorNodeHueSat;
extern StructRNA RNA_CompositorNodeImage;
extern StructRNA RNA_CompositorNodeRLayers;
extern StructRNA RNA_CompositorNodeComposite;
extern StructRNA RNA_CompositorNodeOutputFile;
extern StructRNA RNA_CompositorNodeOutputFileFileSlots;
extern StructRNA RNA_CompositorNodeOutputFileLayerSlots;
extern StructRNA RNA_CompositorNodeTexture;
extern StructRNA RNA_CompositorNodeTranslate;
extern StructRNA RNA_CompositorNodeZcombine;
extern StructRNA RNA_CompositorNodeCombRGBA;
extern StructRNA RNA_CompositorNodeDilateErode;
extern StructRNA RNA_CompositorNodeInpaint;
extern StructRNA RNA_CompositorNodeDespeckle;
extern StructRNA RNA_CompositorNodeRotate;
extern StructRNA RNA_CompositorNodeScale;
extern StructRNA RNA_CompositorNodeSepYCCA;
extern StructRNA RNA_CompositorNodeCombYCCA;
extern StructRNA RNA_CompositorNodeSepYUVA;
extern StructRNA RNA_CompositorNodeCombYUVA;
extern StructRNA RNA_CompositorNodeDiffMatte;
extern StructRNA RNA_CompositorNodeColorSpill;
extern StructRNA RNA_CompositorNodeChromaMatte;
extern StructRNA RNA_CompositorNodeChannelMatte;
extern StructRNA RNA_CompositorNodeFlip;
extern StructRNA RNA_CompositorNodeSplitViewer;
extern StructRNA RNA_CompositorNodeMapUV;
extern StructRNA RNA_CompositorNodeIDMask;
extern StructRNA RNA_CompositorNodeDoubleEdgeMask;
extern StructRNA RNA_CompositorNodeDefocus;
extern StructRNA RNA_CompositorNodeDisplace;
extern StructRNA RNA_CompositorNodeCombHSVA;
extern StructRNA RNA_CompositorNodeMath;
extern StructRNA RNA_CompositorNodeLumaMatte;
extern StructRNA RNA_CompositorNodeBrightContrast;
extern StructRNA RNA_CompositorNodeGamma;
extern StructRNA RNA_CompositorNodeInvert;
extern StructRNA RNA_CompositorNodeNormalize;
extern StructRNA RNA_CompositorNodeCrop;
extern StructRNA RNA_CompositorNodeDBlur;
extern StructRNA RNA_CompositorNodeBilateralblur;
extern StructRNA RNA_CompositorNodePremulKey;
extern StructRNA RNA_CompositorNodeGlare;
extern StructRNA RNA_CompositorNodeTonemap;
extern StructRNA RNA_CompositorNodeLensdist;
extern StructRNA RNA_CompositorNodeLevels;
extern StructRNA RNA_CompositorNodeColorMatte;
extern StructRNA RNA_CompositorNodeDistanceMatte;
extern StructRNA RNA_CompositorNodeColorBalance;
extern StructRNA RNA_CompositorNodeHueCorrect;
extern StructRNA RNA_CompositorNodeMovieClip;
extern StructRNA RNA_CompositorNodeTransform;
extern StructRNA RNA_CompositorNodeStabilize;
extern StructRNA RNA_CompositorNodeMovieDistortion;
extern StructRNA RNA_CompositorNodeBoxMask;
extern StructRNA RNA_CompositorNodeEllipseMask;
extern StructRNA RNA_CompositorNodeBokehImage;
extern StructRNA RNA_CompositorNodeBokehBlur;
extern StructRNA RNA_CompositorNodeSwitch;
extern StructRNA RNA_CompositorNodeColorCorrection;
extern StructRNA RNA_CompositorNodeMask;
extern StructRNA RNA_CompositorNodeKeyingScreen;
extern StructRNA RNA_CompositorNodeKeying;
extern StructRNA RNA_CompositorNodeTrackPos;
extern StructRNA RNA_CompositorNodePixelate;
extern StructRNA RNA_CompositorNodePlaneTrackDeform;
extern StructRNA RNA_CompositorNodeCornerPin;
extern StructRNA RNA_CompositorNodeSunBeams;
extern StructRNA RNA_TextureNodeOutput;
extern StructRNA RNA_TextureNodeChecker;
extern StructRNA RNA_TextureNodeTexture;
extern StructRNA RNA_TextureNodeBricks;
extern StructRNA RNA_TextureNodeMath;
extern StructRNA RNA_TextureNodeMixRGB;
extern StructRNA RNA_TextureNodeRGBToBW;
extern StructRNA RNA_TextureNodeValToRGB;
extern StructRNA RNA_TextureNodeImage;
extern StructRNA RNA_TextureNodeCurveRGB;
extern StructRNA RNA_TextureNodeInvert;
extern StructRNA RNA_TextureNodeHueSaturation;
extern StructRNA RNA_TextureNodeCurveTime;
extern StructRNA RNA_TextureNodeRotate;
extern StructRNA RNA_TextureNodeViewer;
extern StructRNA RNA_TextureNodeTranslate;
extern StructRNA RNA_TextureNodeCoordinates;
extern StructRNA RNA_TextureNodeDistance;
extern StructRNA RNA_TextureNodeCompose;
extern StructRNA RNA_TextureNodeDecompose;
extern StructRNA RNA_TextureNodeValToNor;
extern StructRNA RNA_TextureNodeScale;
extern StructRNA RNA_TextureNodeAt;
extern StructRNA RNA_TextureNodeTexVoronoi;
extern StructRNA RNA_TextureNodeTexBlend;
extern StructRNA RNA_TextureNodeTexMagic;
extern StructRNA RNA_TextureNodeTexMarble;
extern StructRNA RNA_TextureNodeTexClouds;
extern StructRNA RNA_TextureNodeTexWood;
extern StructRNA RNA_TextureNodeTexMusgrave;
extern StructRNA RNA_TextureNodeTexNoise;
extern StructRNA RNA_TextureNodeTexStucci;
extern StructRNA RNA_TextureNodeTexDistNoise;
extern StructRNA RNA_ShaderNodeGroup;
extern StructRNA RNA_CompositorNodeGroup;
extern StructRNA RNA_TextureNodeGroup;
extern StructRNA RNA_NodeCustomGroup;
extern StructRNA RNA_NodeOutputFileSlotFile;
extern StructRNA RNA_NodeOutputFileSlotLayer;
extern StructRNA RNA_NodeInstanceHash;
extern StructRNA RNA_Object;
extern StructRNA RNA_ObjectModifiers;
extern StructRNA RNA_ObjectConstraints;
extern StructRNA RNA_VertexGroups;
extern StructRNA RNA_ParticleSystems;
extern StructRNA RNA_GameObjectSettings;
extern StructRNA RNA_ObjectBase;
extern StructRNA RNA_VertexGroup;
extern StructRNA RNA_MaterialSlot;
extern StructRNA RNA_DupliObject;
extern StructRNA RNA_LodLevel;
extern StructRNA RNA_PointCache;
extern StructRNA RNA_PointCaches;
extern StructRNA RNA_CollisionSettings;
extern StructRNA RNA_EffectorWeights;
extern StructRNA RNA_FieldSettings;
extern StructRNA RNA_GameSoftBodySettings;
extern StructRNA RNA_SoftBodySettings;
extern StructRNA RNA_PackedFile;
extern StructRNA RNA_ParticleTarget;
extern StructRNA RNA_SPHFluidSettings;
extern StructRNA RNA_ParticleHairKey;
extern StructRNA RNA_ParticleKey;
extern StructRNA RNA_ChildParticle;
extern StructRNA RNA_Particle;
extern StructRNA RNA_ParticleDupliWeight;
extern StructRNA RNA_ParticleSystem;
extern StructRNA RNA_ParticleSettingsTextureSlot;
extern StructRNA RNA_ParticleSettings;
extern StructRNA RNA_ParticleSettingsTextureSlots;
extern StructRNA RNA_Pose;
extern StructRNA RNA_BoneGroups;
extern StructRNA RNA_PoseBone;
extern StructRNA RNA_PoseBoneConstraints;
extern StructRNA RNA_IKParam;
extern StructRNA RNA_Itasc;
extern StructRNA RNA_BoneGroup;
extern StructRNA RNA_GameProperty;
extern StructRNA RNA_GameBooleanProperty;
extern StructRNA RNA_GameIntProperty;
extern StructRNA RNA_GameFloatProperty;
extern StructRNA RNA_GameTimerProperty;
extern StructRNA RNA_GameStringProperty;
extern StructRNA RNA_RenderEngine;
extern StructRNA RNA_RenderResult;
extern StructRNA RNA_RenderLayer;
extern StructRNA RNA_RenderPass;
extern StructRNA RNA_BakePixel;
extern StructRNA RNA_RigidBodyWorld;
extern StructRNA RNA_RigidBodyObject;
extern StructRNA RNA_RigidBodyConstraint;
extern StructRNA RNA_Scene;
extern StructRNA RNA_SceneBases;
extern StructRNA RNA_SceneObjects;
extern StructRNA RNA_KeyingSets;
extern StructRNA RNA_KeyingSetsAll;
extern StructRNA RNA_TimelineMarkers;
extern StructRNA RNA_ToolSettings;
extern StructRNA RNA_UnifiedPaintSettings;
extern StructRNA RNA_MeshStatVis;
extern StructRNA RNA_UnitSettings;
extern StructRNA RNA_ImageFormatSettings;
extern StructRNA RNA_SceneGameData;
extern StructRNA RNA_SceneGameRecastData;
extern StructRNA RNA_TransformOrientation;
extern StructRNA RNA_SelectedUvElement;
extern StructRNA RNA_FFmpegSettings;
extern StructRNA RNA_RenderSettings;
extern StructRNA RNA_RenderLayers;
extern StructRNA RNA_BakeSettings;
extern StructRNA RNA_SceneRenderLayer;
extern StructRNA RNA_FreestyleLineSet;
extern StructRNA RNA_FreestyleModuleSettings;
extern StructRNA RNA_FreestyleSettings;
extern StructRNA RNA_FreestyleModules;
extern StructRNA RNA_Linesets;
extern StructRNA RNA_Screen;
extern StructRNA RNA_Area;
extern StructRNA RNA_AreaSpaces;
extern StructRNA RNA_Region;
extern StructRNA RNA_View2D;
extern StructRNA RNA_PaletteColor;
extern StructRNA RNA_Palette;
extern StructRNA RNA_PaintCurve;
extern StructRNA RNA_Paint;
extern StructRNA RNA_Sculpt;
extern StructRNA RNA_UvSculpt;
extern StructRNA RNA_VertexPaint;
extern StructRNA RNA_ImagePaint;
extern StructRNA RNA_ParticleEdit;
extern StructRNA RNA_ParticleBrush;
extern StructRNA RNA_Sensor;
extern StructRNA RNA_AlwaysSensor;
extern StructRNA RNA_NearSensor;
extern StructRNA RNA_MouseSensor;
extern StructRNA RNA_KeyboardSensor;
extern StructRNA RNA_PropertySensor;
extern StructRNA RNA_ArmatureSensor;
extern StructRNA RNA_ActuatorSensor;
extern StructRNA RNA_DelaySensor;
extern StructRNA RNA_CollisionSensor;
extern StructRNA RNA_RadarSensor;
extern StructRNA RNA_RandomSensor;
extern StructRNA RNA_RaySensor;
extern StructRNA RNA_MessageSensor;
extern StructRNA RNA_JoystickSensor;
extern StructRNA RNA_SequenceColorBalanceData;
extern StructRNA RNA_SequenceElement;
extern StructRNA RNA_SequenceProxy;
extern StructRNA RNA_SequenceColorBalance;
extern StructRNA RNA_SequenceCrop;
extern StructRNA RNA_SequenceTransform;
extern StructRNA RNA_Sequence;
extern StructRNA RNA_SequenceModifiers;
extern StructRNA RNA_SequenceEditor;
extern StructRNA RNA_Sequences;
extern StructRNA RNA_ImageSequence;
extern StructRNA RNA_SequenceElements;
extern StructRNA RNA_MetaSequence;
extern StructRNA RNA_SceneSequence;
extern StructRNA RNA_MovieSequence;
extern StructRNA RNA_MovieClipSequence;
extern StructRNA RNA_MaskSequence;
extern StructRNA RNA_SoundSequence;
extern StructRNA RNA_EffectSequence;
extern StructRNA RNA_AddSequence;
extern StructRNA RNA_AdjustmentSequence;
extern StructRNA RNA_AlphaOverSequence;
extern StructRNA RNA_AlphaUnderSequence;
extern StructRNA RNA_ColorSequence;
extern StructRNA RNA_CrossSequence;
extern StructRNA RNA_GammaCrossSequence;
extern StructRNA RNA_GlowSequence;
extern StructRNA RNA_MulticamSequence;
extern StructRNA RNA_MultiplySequence;
extern StructRNA RNA_OverDropSequence;
extern StructRNA RNA_SpeedControlSequence;
extern StructRNA RNA_SubtractSequence;
extern StructRNA RNA_TransformSequence;
extern StructRNA RNA_WipeSequence;
extern StructRNA RNA_GaussianBlurSequence;
extern StructRNA RNA_SequenceModifier;
extern StructRNA RNA_ColorBalanceModifier;
extern StructRNA RNA_CurvesModifier;
extern StructRNA RNA_HueCorrectModifier;
extern StructRNA RNA_BrightContrastModifier;
extern StructRNA RNA_SmokeDomainSettings;
extern StructRNA RNA_SmokeFlowSettings;
extern StructRNA RNA_SmokeCollSettings;
extern StructRNA RNA_Space;
extern StructRNA RNA_SpaceImageEditor;
extern StructRNA RNA_SpaceUVEditor;
extern StructRNA RNA_SpaceSequenceEditor;
extern StructRNA RNA_SpaceTextEditor;
extern StructRNA RNA_FileSelectParams;
extern StructRNA RNA_SpaceFileBrowser;
extern StructRNA RNA_SpaceOutliner;
extern StructRNA RNA_BackgroundImage;
extern StructRNA RNA_SpaceView3D;
extern StructRNA RNA_BackgroundImages;
extern StructRNA RNA_RegionView3D;
extern StructRNA RNA_SpaceProperties;
extern StructRNA RNA_SpaceDopeSheetEditor;
extern StructRNA RNA_SpaceGraphEditor;
extern StructRNA RNA_SpaceNLA;
extern StructRNA RNA_SpaceTimeline;
extern StructRNA RNA_SpaceConsole;
extern StructRNA RNA_ConsoleLine;
extern StructRNA RNA_SpaceInfo;
extern StructRNA RNA_SpaceUserPreferences;
extern StructRNA RNA_NodeTreePath;
extern StructRNA RNA_SpaceNodeEditor;
extern StructRNA RNA_SpaceNodeEditorPath;
extern StructRNA RNA_SpaceLogicEditor;
extern StructRNA RNA_SpaceClipEditor;
extern StructRNA RNA_Speaker;
extern StructRNA RNA_TextLine;
extern StructRNA RNA_Text;
extern StructRNA RNA_TimelineMarker;
extern StructRNA RNA_Sound;
extern StructRNA RNA_UILayout;
extern StructRNA RNA_Panel;
extern StructRNA RNA_UIList;
extern StructRNA RNA_Header;
extern StructRNA RNA_Menu;
extern StructRNA RNA_ThemeFontStyle;
extern StructRNA RNA_ThemeStyle;
extern StructRNA RNA_ThemeWidgetColors;
extern StructRNA RNA_ThemeWidgetStateColors;
extern StructRNA RNA_ThemePanelColors;
extern StructRNA RNA_ThemeGradientColors;
extern StructRNA RNA_ThemeUserInterface;
extern StructRNA RNA_ThemeSpaceGeneric;
extern StructRNA RNA_ThemeSpaceGradient;
extern StructRNA RNA_ThemeSpaceListGeneric;
extern StructRNA RNA_ThemeView3D;
extern StructRNA RNA_ThemeGraphEditor;
extern StructRNA RNA_ThemeFileBrowser;
extern StructRNA RNA_ThemeNLAEditor;
extern StructRNA RNA_ThemeDopeSheet;
extern StructRNA RNA_ThemeImageEditor;
extern StructRNA RNA_ThemeSequenceEditor;
extern StructRNA RNA_ThemeProperties;
extern StructRNA RNA_ThemeTextEditor;
extern StructRNA RNA_ThemeTimeline;
extern StructRNA RNA_ThemeNodeEditor;
extern StructRNA RNA_ThemeOutliner;
extern StructRNA RNA_ThemeInfo;
extern StructRNA RNA_ThemeUserPreferences;
extern StructRNA RNA_ThemeConsole;
extern StructRNA RNA_ThemeLogicEditor;
extern StructRNA RNA_ThemeClipEditor;
extern StructRNA RNA_ThemeBoneColorSet;
extern StructRNA RNA_Theme;
extern StructRNA RNA_UserSolidLight;
extern StructRNA RNA_WalkNavigation;
extern StructRNA RNA_UserPreferences;
extern StructRNA RNA_Addons;
extern StructRNA RNA_PathCompareCollection;
extern StructRNA RNA_UserPreferencesView;
extern StructRNA RNA_UserPreferencesEdit;
extern StructRNA RNA_UserPreferencesInput;
extern StructRNA RNA_UserPreferencesFilePaths;
extern StructRNA RNA_UserPreferencesSystem;
extern StructRNA RNA_Addon;
extern StructRNA RNA_AddonPreferences;
extern StructRNA RNA_PathCompare;
extern StructRNA RNA_VectorFont;
extern StructRNA RNA_Operator;
extern StructRNA RNA_OperatorProperties;
extern StructRNA RNA_OperatorMousePath;
extern StructRNA RNA_OperatorFileListElement;
extern StructRNA RNA_Macro;
extern StructRNA RNA_OperatorMacro;
extern StructRNA RNA_Event;
extern StructRNA RNA_Timer;
extern StructRNA RNA_UIPopupMenu;
extern StructRNA RNA_UIPieMenu;
extern StructRNA RNA_Window;
extern StructRNA RNA_WindowManager;
extern StructRNA RNA_KeyConfigurations;
extern StructRNA RNA_KeyConfig;
extern StructRNA RNA_KeyMaps;
extern StructRNA RNA_KeyMap;
extern StructRNA RNA_KeyMapItems;
extern StructRNA RNA_KeyMapItem;
extern StructRNA RNA_World;
extern StructRNA RNA_WorldTextureSlots;
extern StructRNA RNA_WorldLighting;
extern StructRNA RNA_WorldMistSettings;
extern StructRNA RNA_WorldTextureSlot;
extern StructRNA RNA_MovieClip;
extern StructRNA RNA_MovieClipProxy;
extern StructRNA RNA_MovieClipUser;
extern StructRNA RNA_MovieClipScopes;
extern StructRNA RNA_MovieTrackingSettings;
extern StructRNA RNA_MovieTrackingCamera;
extern StructRNA RNA_MovieTrackingMarker;
extern StructRNA RNA_MovieTrackingTrack;
extern StructRNA RNA_MovieTrackingMarkers;
extern StructRNA RNA_MovieTrackingPlaneMarker;
extern StructRNA RNA_MovieTrackingPlaneTrack;
extern StructRNA RNA_MovieTrackingPlaneMarkers;
extern StructRNA RNA_MovieTrackingTracks;
extern StructRNA RNA_MovieTrackingPlaneTracks;
extern StructRNA RNA_MovieTrackingObjectTracks;
extern StructRNA RNA_MovieTrackingObjectPlaneTracks;
extern StructRNA RNA_MovieTrackingStabilization;
extern StructRNA RNA_MovieTrackingReconstructedCameras;
extern StructRNA RNA_MovieReconstructedCamera;
extern StructRNA RNA_MovieTrackingReconstruction;
extern StructRNA RNA_MovieTrackingObject;
extern StructRNA RNA_MovieTrackingDopesheet;
extern StructRNA RNA_MovieTracking;
extern StructRNA RNA_MovieTrackingObjects;
extern StructRNA RNA_MaskParent;
extern StructRNA RNA_MaskSplinePointUW;
extern StructRNA RNA_MaskSplinePoint;
extern StructRNA RNA_MaskSpline;
extern StructRNA RNA_MaskSplines;
extern StructRNA RNA_MaskSplinePoints;
extern StructRNA RNA_MaskLayer;
extern StructRNA RNA_Mask;
extern StructRNA RNA_MaskLayers;

#include "rna_fluidsim.c"

#pragma GCC diagnostic ignored "-Wunused-parameter"

/* Autogenerated Functions */


CollectionPropertyRNA rna_FluidSettings_rna_properties;
PointerPropertyRNA rna_FluidSettings_rna_type;
EnumPropertyRNA rna_FluidSettings_type;


extern CollectionPropertyRNA rna_FluidSettings_rna_properties;
extern PointerPropertyRNA rna_FluidSettings_rna_type;
extern EnumPropertyRNA rna_FluidSettings_type;

IntPropertyRNA rna_DomainFluidSettings_threads;
IntPropertyRNA rna_DomainFluidSettings_resolution;
IntPropertyRNA rna_DomainFluidSettings_preview_resolution;
EnumPropertyRNA rna_DomainFluidSettings_viewport_display_mode;
EnumPropertyRNA rna_DomainFluidSettings_render_display_mode;
BoolPropertyRNA rna_DomainFluidSettings_use_reverse_frames;
StringPropertyRNA rna_DomainFluidSettings_filepath;
StringPropertyRNA rna_DomainFluidSettings_memory_estimate;
FloatPropertyRNA rna_DomainFluidSettings_gravity;
BoolPropertyRNA rna_DomainFluidSettings_use_time_override;
FloatPropertyRNA rna_DomainFluidSettings_start_time;
FloatPropertyRNA rna_DomainFluidSettings_end_time;
IntPropertyRNA rna_DomainFluidSettings_frame_offset;
FloatPropertyRNA rna_DomainFluidSettings_simulation_scale;
FloatPropertyRNA rna_DomainFluidSettings_simulation_rate;
FloatPropertyRNA rna_DomainFluidSettings_viscosity_base;
IntPropertyRNA rna_DomainFluidSettings_viscosity_exponent;
IntPropertyRNA rna_DomainFluidSettings_grid_levels;
FloatPropertyRNA rna_DomainFluidSettings_compressibility;
EnumPropertyRNA rna_DomainFluidSettings_slip_type;
FloatPropertyRNA rna_DomainFluidSettings_partial_slip_factor;
FloatPropertyRNA rna_DomainFluidSettings_surface_smooth;
IntPropertyRNA rna_DomainFluidSettings_surface_subdivisions;
BoolPropertyRNA rna_DomainFluidSettings_use_speed_vectors;
BoolPropertyRNA rna_DomainFluidSettings_use_surface_noobs;
IntPropertyRNA rna_DomainFluidSettings_tracer_particles;
FloatPropertyRNA rna_DomainFluidSettings_generate_particles;
CollectionPropertyRNA rna_DomainFluidSettings_fluid_mesh_vertices;


CollectionPropertyRNA rna_FluidMeshVertex_rna_properties;
PointerPropertyRNA rna_FluidMeshVertex_rna_type;
FloatPropertyRNA rna_FluidMeshVertex_velocity;


extern CollectionPropertyRNA rna_FluidSettings_rna_properties;
extern PointerPropertyRNA rna_FluidSettings_rna_type;
extern EnumPropertyRNA rna_FluidSettings_type;

BoolPropertyRNA rna_FluidFluidSettings_use;
EnumPropertyRNA rna_FluidFluidSettings_volume_initialization;
BoolPropertyRNA rna_FluidFluidSettings_use_animated_mesh;
FloatPropertyRNA rna_FluidFluidSettings_initial_velocity;


extern CollectionPropertyRNA rna_FluidSettings_rna_properties;
extern PointerPropertyRNA rna_FluidSettings_rna_type;
extern EnumPropertyRNA rna_FluidSettings_type;

BoolPropertyRNA rna_ObstacleFluidSettings_use;
EnumPropertyRNA rna_ObstacleFluidSettings_volume_initialization;
BoolPropertyRNA rna_ObstacleFluidSettings_use_animated_mesh;
EnumPropertyRNA rna_ObstacleFluidSettings_slip_type;
FloatPropertyRNA rna_ObstacleFluidSettings_partial_slip_factor;
FloatPropertyRNA rna_ObstacleFluidSettings_impact_factor;


extern CollectionPropertyRNA rna_FluidSettings_rna_properties;
extern PointerPropertyRNA rna_FluidSettings_rna_type;
extern EnumPropertyRNA rna_FluidSettings_type;

BoolPropertyRNA rna_InflowFluidSettings_use;
EnumPropertyRNA rna_InflowFluidSettings_volume_initialization;
BoolPropertyRNA rna_InflowFluidSettings_use_animated_mesh;
FloatPropertyRNA rna_InflowFluidSettings_inflow_velocity;
BoolPropertyRNA rna_InflowFluidSettings_use_local_coords;


extern CollectionPropertyRNA rna_FluidSettings_rna_properties;
extern PointerPropertyRNA rna_FluidSettings_rna_type;
extern EnumPropertyRNA rna_FluidSettings_type;

BoolPropertyRNA rna_OutflowFluidSettings_use;
EnumPropertyRNA rna_OutflowFluidSettings_volume_initialization;
BoolPropertyRNA rna_OutflowFluidSettings_use_animated_mesh;


extern CollectionPropertyRNA rna_FluidSettings_rna_properties;
extern PointerPropertyRNA rna_FluidSettings_rna_type;
extern EnumPropertyRNA rna_FluidSettings_type;

BoolPropertyRNA rna_ParticleFluidSettings_use_drops;
BoolPropertyRNA rna_ParticleFluidSettings_use_floats;
BoolPropertyRNA rna_ParticleFluidSettings_show_tracer;
FloatPropertyRNA rna_ParticleFluidSettings_particle_influence;
FloatPropertyRNA rna_ParticleFluidSettings_alpha_influence;
StringPropertyRNA rna_ParticleFluidSettings_filepath;


extern CollectionPropertyRNA rna_FluidSettings_rna_properties;
extern PointerPropertyRNA rna_FluidSettings_rna_type;
extern EnumPropertyRNA rna_FluidSettings_type;

BoolPropertyRNA rna_ControlFluidSettings_use;
FloatPropertyRNA rna_ControlFluidSettings_start_time;
FloatPropertyRNA rna_ControlFluidSettings_end_time;
FloatPropertyRNA rna_ControlFluidSettings_attraction_strength;
FloatPropertyRNA rna_ControlFluidSettings_attraction_radius;
FloatPropertyRNA rna_ControlFluidSettings_velocity_strength;
FloatPropertyRNA rna_ControlFluidSettings_velocity_radius;
FloatPropertyRNA rna_ControlFluidSettings_quality;
BoolPropertyRNA rna_ControlFluidSettings_use_reverse_frames;

static PointerRNA FluidSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void FluidSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_FluidSettings_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = FluidSettings_rna_properties_get(iter);
}

void FluidSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = FluidSettings_rna_properties_get(iter);
}

void FluidSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int FluidSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA FluidSettings_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int FluidSettings_type_get(PointerRNA *ptr)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	return ((data->type) & 255);
}

void FluidSettings_type_set(PointerRNA *ptr, int value)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	data->type &= ~255;
	data->type |= value;
}

int DomainFluidSettings_threads_get(PointerRNA *ptr)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	return (int)(data->threads);
}

void DomainFluidSettings_threads_set(PointerRNA *ptr, int value)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	data->threads = CLAMPIS(value, 0, 64);
}

int DomainFluidSettings_resolution_get(PointerRNA *ptr)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	return (int)(data->resolutionxyz);
}

void DomainFluidSettings_resolution_set(PointerRNA *ptr, int value)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	data->resolutionxyz = CLAMPIS(value, 1, 1024);
}

int DomainFluidSettings_preview_resolution_get(PointerRNA *ptr)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	return (int)(data->previewresxyz);
}

void DomainFluidSettings_preview_resolution_set(PointerRNA *ptr, int value)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	data->previewresxyz = CLAMPIS(value, 1, 100);
}

int DomainFluidSettings_viewport_display_mode_get(PointerRNA *ptr)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	return (int)(data->guiDisplayMode);
}

void DomainFluidSettings_viewport_display_mode_set(PointerRNA *ptr, int value)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	data->guiDisplayMode = value;
}

int DomainFluidSettings_render_display_mode_get(PointerRNA *ptr)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	return (int)(data->renderDisplayMode);
}

void DomainFluidSettings_render_display_mode_set(PointerRNA *ptr, int value)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	data->renderDisplayMode = value;
}

int DomainFluidSettings_use_reverse_frames_get(PointerRNA *ptr)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void DomainFluidSettings_use_reverse_frames_set(PointerRNA *ptr, int value)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

void DomainFluidSettings_filepath_get(PointerRNA *ptr, char *value)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	BLI_strncpy(value, data->surfdataPath, 1024);
}

int DomainFluidSettings_filepath_length(PointerRNA *ptr)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	return strlen(data->surfdataPath);
}

void DomainFluidSettings_filepath_set(PointerRNA *ptr, const char *value)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	BLI_strncpy(data->surfdataPath, value, 1024);
}

void DomainFluidSettings_memory_estimate_get(PointerRNA *ptr, char *value)
{
	rna_DomainFluidSettings_memory_estimate_get(ptr, value);
}

int DomainFluidSettings_memory_estimate_length(PointerRNA *ptr)
{
	return rna_DomainFluidSettings_memory_estimate_length(ptr);
}

void DomainFluidSettings_gravity_get(PointerRNA *ptr, float values[3])
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(((float *)data->grav)[i]);
	}
}

void DomainFluidSettings_gravity_set(PointerRNA *ptr, const float values[3])
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		((float *)data->grav)[i] = CLAMPIS(values[i], -1000.0999755859f, 1000.0999755859f);
	}
}

int DomainFluidSettings_use_time_override_get(PointerRNA *ptr)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	return (((data->flag) & 4) != 0);
}

void DomainFluidSettings_use_time_override_set(PointerRNA *ptr, int value)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	if (value) data->flag |= 4;
	else data->flag &= ~4;
}

float DomainFluidSettings_start_time_get(PointerRNA *ptr)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	return (float)(data->animStart);
}

void DomainFluidSettings_start_time_set(PointerRNA *ptr, float value)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	data->animStart = CLAMPIS(value, 0.0f, 100.0f);
}

float DomainFluidSettings_end_time_get(PointerRNA *ptr)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	return (float)(data->animEnd);
}

void DomainFluidSettings_end_time_set(PointerRNA *ptr, float value)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	data->animEnd = CLAMPIS(value, 0.0f, 100.0f);
}

int DomainFluidSettings_frame_offset_get(PointerRNA *ptr)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	return (int)(data->frameOffset);
}

void DomainFluidSettings_frame_offset_set(PointerRNA *ptr, int value)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	data->frameOffset = value;
}

float DomainFluidSettings_simulation_scale_get(PointerRNA *ptr)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	return (float)(data->realsize);
}

void DomainFluidSettings_simulation_scale_set(PointerRNA *ptr, float value)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	data->realsize = CLAMPIS(value, 0.0010000000f, 10.0f);
}

float DomainFluidSettings_simulation_rate_get(PointerRNA *ptr)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	return (float)(data->animRate);
}

void DomainFluidSettings_simulation_rate_set(PointerRNA *ptr, float value)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	data->animRate = CLAMPIS(value, 0.0f, 100.0f);
}

float DomainFluidSettings_viscosity_base_get(PointerRNA *ptr)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	return (float)(data->viscosityValue);
}

void DomainFluidSettings_viscosity_base_set(PointerRNA *ptr, float value)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	data->viscosityValue = CLAMPIS(value, 0.0f, 10.0f);
}

int DomainFluidSettings_viscosity_exponent_get(PointerRNA *ptr)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	return (int)(data->viscosityExponent);
}

void DomainFluidSettings_viscosity_exponent_set(PointerRNA *ptr, int value)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	data->viscosityExponent = CLAMPIS(value, 0, 10);
}

int DomainFluidSettings_grid_levels_get(PointerRNA *ptr)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	return (int)(data->maxRefine);
}

void DomainFluidSettings_grid_levels_set(PointerRNA *ptr, int value)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	data->maxRefine = CLAMPIS(value, -1, 4);
}

float DomainFluidSettings_compressibility_get(PointerRNA *ptr)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	return (float)(data->gstar);
}

void DomainFluidSettings_compressibility_set(PointerRNA *ptr, float value)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	data->gstar = CLAMPIS(value, 0.0010000000f, 0.1000000015f);
}

int DomainFluidSettings_slip_type_get(PointerRNA *ptr)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	return ((data->typeFlags) & 3584);
}

void DomainFluidSettings_slip_type_set(PointerRNA *ptr, int value)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	data->typeFlags &= ~3584;
	data->typeFlags |= value;
}

float DomainFluidSettings_partial_slip_factor_get(PointerRNA *ptr)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	return (float)(data->partSlipValue);
}

void DomainFluidSettings_partial_slip_factor_set(PointerRNA *ptr, float value)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	data->partSlipValue = CLAMPIS(value, 0.0f, 1.0f);
}

float DomainFluidSettings_surface_smooth_get(PointerRNA *ptr)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	return (float)(data->surfaceSmoothing);
}

void DomainFluidSettings_surface_smooth_set(PointerRNA *ptr, float value)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	data->surfaceSmoothing = CLAMPIS(value, 0.0f, 5.0f);
}

int DomainFluidSettings_surface_subdivisions_get(PointerRNA *ptr)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	return (int)(data->surfaceSubdivs);
}

void DomainFluidSettings_surface_subdivisions_set(PointerRNA *ptr, int value)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	data->surfaceSubdivs = CLAMPIS(value, 0, 5);
}

int DomainFluidSettings_use_speed_vectors_get(PointerRNA *ptr)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	return (int)!(data->domainNovecgen);
}

void DomainFluidSettings_use_speed_vectors_set(PointerRNA *ptr, int value)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	data->domainNovecgen = !value;
}

int DomainFluidSettings_use_surface_noobs_get(PointerRNA *ptr)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	return (((data->typeFlags) & 8192) != 0);
}

void DomainFluidSettings_use_surface_noobs_set(PointerRNA *ptr, int value)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	if (value) data->typeFlags |= 8192;
	else data->typeFlags &= ~8192;
}

int DomainFluidSettings_tracer_particles_get(PointerRNA *ptr)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	return (int)(data->generateTracers);
}

void DomainFluidSettings_tracer_particles_set(PointerRNA *ptr, int value)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	data->generateTracers = CLAMPIS(value, 0, 10000);
}

float DomainFluidSettings_generate_particles_get(PointerRNA *ptr)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	return (float)(data->generateParticles);
}

void DomainFluidSettings_generate_particles_set(PointerRNA *ptr, float value)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	data->generateParticles = CLAMPIS(value, 0.0f, 10.0f);
}

static PointerRNA DomainFluidSettings_fluid_mesh_vertices_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_FluidMeshVertex, rna_iterator_array_get(iter));
}

void DomainFluidSettings_fluid_mesh_vertices_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_DomainFluidSettings_fluid_mesh_vertices;

	rna_FluidMeshVertex_data_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = DomainFluidSettings_fluid_mesh_vertices_get(iter);
}

void DomainFluidSettings_fluid_mesh_vertices_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if (iter->valid)
		iter->ptr = DomainFluidSettings_fluid_mesh_vertices_get(iter);
}

void DomainFluidSettings_fluid_mesh_vertices_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

static PointerRNA FluidMeshVertex_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void FluidMeshVertex_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_FluidMeshVertex_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = FluidMeshVertex_rna_properties_get(iter);
}

void FluidMeshVertex_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = FluidMeshVertex_rna_properties_get(iter);
}

void FluidMeshVertex_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int FluidMeshVertex_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA FluidMeshVertex_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void FluidMeshVertex_velocity_get(PointerRNA *ptr, float values[3])
{
	FluidVertexVelocity *data = (FluidVertexVelocity *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(((float *)data->vel)[i]);
	}
}

int FluidFluidSettings_use_get(PointerRNA *ptr)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	return (((data->flag) & 2) != 0);
}

void FluidFluidSettings_use_set(PointerRNA *ptr, int value)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	if (value) data->flag |= 2;
	else data->flag &= ~2;
}

int FluidFluidSettings_volume_initialization_get(PointerRNA *ptr)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	return ((data->volumeInitType) & 3);
}

void FluidFluidSettings_volume_initialization_set(PointerRNA *ptr, int value)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	data->volumeInitType &= ~3;
	data->volumeInitType |= value;
}

int FluidFluidSettings_use_animated_mesh_get(PointerRNA *ptr)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	return (int)(data->domainNovecgen);
}

void FluidFluidSettings_use_animated_mesh_set(PointerRNA *ptr, int value)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	data->domainNovecgen = value;
}

void FluidFluidSettings_initial_velocity_get(PointerRNA *ptr, float values[3])
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)((&data->iniVelx)[i]);
	}
}

void FluidFluidSettings_initial_velocity_set(PointerRNA *ptr, const float values[3])
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		(&data->iniVelx)[i] = CLAMPIS(values[i], -1000.0999755859f, 1000.0999755859f);
	}
}

int ObstacleFluidSettings_use_get(PointerRNA *ptr)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	return (((data->flag) & 2) != 0);
}

void ObstacleFluidSettings_use_set(PointerRNA *ptr, int value)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	if (value) data->flag |= 2;
	else data->flag &= ~2;
}

int ObstacleFluidSettings_volume_initialization_get(PointerRNA *ptr)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	return ((data->volumeInitType) & 3);
}

void ObstacleFluidSettings_volume_initialization_set(PointerRNA *ptr, int value)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	data->volumeInitType &= ~3;
	data->volumeInitType |= value;
}

int ObstacleFluidSettings_use_animated_mesh_get(PointerRNA *ptr)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	return (int)(data->domainNovecgen);
}

void ObstacleFluidSettings_use_animated_mesh_set(PointerRNA *ptr, int value)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	data->domainNovecgen = value;
}

int ObstacleFluidSettings_slip_type_get(PointerRNA *ptr)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	return ((data->typeFlags) & 3584);
}

void ObstacleFluidSettings_slip_type_set(PointerRNA *ptr, int value)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	data->typeFlags &= ~3584;
	data->typeFlags |= value;
}

float ObstacleFluidSettings_partial_slip_factor_get(PointerRNA *ptr)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	return (float)(data->partSlipValue);
}

void ObstacleFluidSettings_partial_slip_factor_set(PointerRNA *ptr, float value)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	data->partSlipValue = CLAMPIS(value, 0.0f, 1.0f);
}

float ObstacleFluidSettings_impact_factor_get(PointerRNA *ptr)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	return (float)(data->surfaceSmoothing);
}

void ObstacleFluidSettings_impact_factor_set(PointerRNA *ptr, float value)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	data->surfaceSmoothing = CLAMPIS(value, -2.0f, 10.0f);
}

int InflowFluidSettings_use_get(PointerRNA *ptr)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	return (((data->flag) & 2) != 0);
}

void InflowFluidSettings_use_set(PointerRNA *ptr, int value)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	if (value) data->flag |= 2;
	else data->flag &= ~2;
}

int InflowFluidSettings_volume_initialization_get(PointerRNA *ptr)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	return ((data->volumeInitType) & 3);
}

void InflowFluidSettings_volume_initialization_set(PointerRNA *ptr, int value)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	data->volumeInitType &= ~3;
	data->volumeInitType |= value;
}

int InflowFluidSettings_use_animated_mesh_get(PointerRNA *ptr)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	return (int)(data->domainNovecgen);
}

void InflowFluidSettings_use_animated_mesh_set(PointerRNA *ptr, int value)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	data->domainNovecgen = value;
}

void InflowFluidSettings_inflow_velocity_get(PointerRNA *ptr, float values[3])
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)((&data->iniVelx)[i]);
	}
}

void InflowFluidSettings_inflow_velocity_set(PointerRNA *ptr, const float values[3])
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		(&data->iniVelx)[i] = CLAMPIS(values[i], -1000.0999755859f, 1000.0999755859f);
	}
}

int InflowFluidSettings_use_local_coords_get(PointerRNA *ptr)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	return (((data->typeFlags) & 4096) != 0);
}

void InflowFluidSettings_use_local_coords_set(PointerRNA *ptr, int value)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	if (value) data->typeFlags |= 4096;
	else data->typeFlags &= ~4096;
}

int OutflowFluidSettings_use_get(PointerRNA *ptr)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	return (((data->flag) & 2) != 0);
}

void OutflowFluidSettings_use_set(PointerRNA *ptr, int value)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	if (value) data->flag |= 2;
	else data->flag &= ~2;
}

int OutflowFluidSettings_volume_initialization_get(PointerRNA *ptr)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	return ((data->volumeInitType) & 3);
}

void OutflowFluidSettings_volume_initialization_set(PointerRNA *ptr, int value)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	data->volumeInitType &= ~3;
	data->volumeInitType |= value;
}

int OutflowFluidSettings_use_animated_mesh_get(PointerRNA *ptr)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	return (int)(data->domainNovecgen);
}

void OutflowFluidSettings_use_animated_mesh_set(PointerRNA *ptr, int value)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	data->domainNovecgen = value;
}

int ParticleFluidSettings_use_drops_get(PointerRNA *ptr)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	return (((data->typeFlags) & 4) != 0);
}

void ParticleFluidSettings_use_drops_set(PointerRNA *ptr, int value)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	if (value) data->typeFlags |= 4;
	else data->typeFlags &= ~4;
}

int ParticleFluidSettings_use_floats_get(PointerRNA *ptr)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	return (((data->typeFlags) & 16) != 0);
}

void ParticleFluidSettings_use_floats_set(PointerRNA *ptr, int value)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	if (value) data->typeFlags |= 16;
	else data->typeFlags &= ~16;
}

int ParticleFluidSettings_show_tracer_get(PointerRNA *ptr)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	return (((data->typeFlags) & 32) != 0);
}

void ParticleFluidSettings_show_tracer_set(PointerRNA *ptr, int value)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	if (value) data->typeFlags |= 32;
	else data->typeFlags &= ~32;
}

float ParticleFluidSettings_particle_influence_get(PointerRNA *ptr)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	return (float)(data->particleInfSize);
}

void ParticleFluidSettings_particle_influence_set(PointerRNA *ptr, float value)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	data->particleInfSize = CLAMPIS(value, 0.0f, 2.0f);
}

float ParticleFluidSettings_alpha_influence_get(PointerRNA *ptr)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	return (float)(data->particleInfAlpha);
}

void ParticleFluidSettings_alpha_influence_set(PointerRNA *ptr, float value)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	data->particleInfAlpha = CLAMPIS(value, 0.0f, 2.0f);
}

void ParticleFluidSettings_filepath_get(PointerRNA *ptr, char *value)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	BLI_strncpy(value, data->surfdataPath, 1024);
}

int ParticleFluidSettings_filepath_length(PointerRNA *ptr)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	return strlen(data->surfdataPath);
}

void ParticleFluidSettings_filepath_set(PointerRNA *ptr, const char *value)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	BLI_strncpy(data->surfdataPath, value, 1024);
}

int ControlFluidSettings_use_get(PointerRNA *ptr)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	return (((data->flag) & 2) != 0);
}

void ControlFluidSettings_use_set(PointerRNA *ptr, int value)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	if (value) data->flag |= 2;
	else data->flag &= ~2;
}

float ControlFluidSettings_start_time_get(PointerRNA *ptr)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	return (float)(data->cpsTimeStart);
}

void ControlFluidSettings_start_time_set(PointerRNA *ptr, float value)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	data->cpsTimeStart = CLAMPIS(value, 0.0f, 100.0f);
}

float ControlFluidSettings_end_time_get(PointerRNA *ptr)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	return (float)(data->cpsTimeEnd);
}

void ControlFluidSettings_end_time_set(PointerRNA *ptr, float value)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	data->cpsTimeEnd = CLAMPIS(value, 0.0f, 100.0f);
}

float ControlFluidSettings_attraction_strength_get(PointerRNA *ptr)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	return (float)(data->attractforceStrength);
}

void ControlFluidSettings_attraction_strength_set(PointerRNA *ptr, float value)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	data->attractforceStrength = CLAMPIS(value, -10.0f, 10.0f);
}

float ControlFluidSettings_attraction_radius_get(PointerRNA *ptr)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	return (float)(data->attractforceRadius);
}

void ControlFluidSettings_attraction_radius_set(PointerRNA *ptr, float value)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	data->attractforceRadius = CLAMPIS(value, 0.0f, 10.0f);
}

float ControlFluidSettings_velocity_strength_get(PointerRNA *ptr)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	return (float)(data->velocityforceStrength);
}

void ControlFluidSettings_velocity_strength_set(PointerRNA *ptr, float value)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	data->velocityforceStrength = CLAMPIS(value, 0.0f, 10.0f);
}

float ControlFluidSettings_velocity_radius_get(PointerRNA *ptr)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	return (float)(data->velocityforceRadius);
}

void ControlFluidSettings_velocity_radius_set(PointerRNA *ptr, float value)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	data->velocityforceRadius = CLAMPIS(value, 0.0f, 10.0f);
}

float ControlFluidSettings_quality_get(PointerRNA *ptr)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	return (float)(data->cpsQuality);
}

void ControlFluidSettings_quality_set(PointerRNA *ptr, float value)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	data->cpsQuality = CLAMPIS(value, 5.0f, 100.0f);
}

int ControlFluidSettings_use_reverse_frames_get(PointerRNA *ptr)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void ControlFluidSettings_use_reverse_frames_set(PointerRNA *ptr, int value)
{
	FluidsimSettings *data = (FluidsimSettings *)(ptr->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}










/* Fluid Simulation Settings */
CollectionPropertyRNA rna_FluidSettings_rna_properties = {
	{(PropertyRNA *)&rna_FluidSettings_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	FluidSettings_rna_properties_begin, FluidSettings_rna_properties_next, FluidSettings_rna_properties_end, FluidSettings_rna_properties_get, NULL, NULL, FluidSettings_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_FluidSettings_rna_type = {
	{(PropertyRNA *)&rna_FluidSettings_type, (PropertyRNA *)&rna_FluidSettings_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	FluidSettings_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static EnumPropertyItem rna_FluidSettings_type_items[9] = {
	{1, "NONE", 0, "None", ""},
	{2, "DOMAIN", 0, "Domain", "Bounding box of this object represents the computational domain of the fluid simulation"},
	{4, "FLUID", 0, "Fluid", "Object represents a volume of fluid in the simulation"},
	{8, "OBSTACLE", 0, "Obstacle", "Object is a fixed obstacle"},
	{16, "INFLOW", 0, "Inflow", "Object adds fluid to the simulation"},
	{32, "OUTFLOW", 0, "Outflow", "Object removes fluid from the simulation"},
	{64, "PARTICLE", 0, "Particle", "Object is made a particle system to display particles generated by a fluidsim domain object"},
	{128, "CONTROL", 0, "Control", "Object is made a fluid control mesh, which influences the fluid"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FluidSettings_type = {
	{NULL, (PropertyRNA *)&rna_FluidSettings_rna_type,
	-1, "type", 1, "Type",
	"Type of participation in the fluid simulation",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FluidSettings_update_type, 0, NULL, NULL,
	0, -1, NULL},
	FluidSettings_type_get, FluidSettings_type_set, NULL, NULL, NULL, NULL, rna_FluidSettings_type_items, 8, 1
};

StructRNA RNA_FluidSettings = {
	{(ContainerRNA *)&RNA_DomainFluidSettings, (ContainerRNA *)&RNA_FModifierStepped,
	NULL,
	{(PropertyRNA *)&rna_FluidSettings_rna_properties, (PropertyRNA *)&rna_FluidSettings_type}},
	"FluidSettings", NULL, NULL, 4, "Fluid Simulation Settings",
	"Fluid simulation settings for an object taking part in the simulation",
	"*", 17,
	NULL, (PropertyRNA *)&rna_FluidSettings_rna_properties,
	NULL,
	NULL,
	rna_FluidSettings_refine,
	rna_FluidSettings_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Domain Fluid Simulation Settings */
IntPropertyRNA rna_DomainFluidSettings_threads = {
	{(PropertyRNA *)&rna_DomainFluidSettings_resolution, NULL,
	-1, "threads", 8195, "Simulation Threads",
	"Override number of threads for the simulation, 0 is automatic",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(FluidsimSettings, threads), 0, NULL},
	DomainFluidSettings_threads_get, DomainFluidSettings_threads_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 64, 0, 64, 1, 0, NULL
};

IntPropertyRNA rna_DomainFluidSettings_resolution = {
	{(PropertyRNA *)&rna_DomainFluidSettings_preview_resolution, (PropertyRNA *)&rna_DomainFluidSettings_threads,
	-1, "resolution", 8193, "Resolution",
	"Domain resolution in X,Y and Z direction",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(FluidsimSettings, resolutionxyz), 1, NULL},
	DomainFluidSettings_resolution_get, DomainFluidSettings_resolution_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 1024, 1, 1024, 1, 0, NULL
};

IntPropertyRNA rna_DomainFluidSettings_preview_resolution = {
	{(PropertyRNA *)&rna_DomainFluidSettings_viewport_display_mode, (PropertyRNA *)&rna_DomainFluidSettings_resolution,
	-1, "preview_resolution", 8193, "Preview Resolution",
	"Preview resolution in X,Y and Z direction",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(FluidsimSettings, previewresxyz), 1, NULL},
	DomainFluidSettings_preview_resolution_get, DomainFluidSettings_preview_resolution_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 100, 1, 100, 1, 0, NULL
};

static EnumPropertyItem rna_DomainFluidSettings_viewport_display_mode_items[4] = {
	{1, "GEOMETRY", 0, "Geometry", "Display geometry"},
	{2, "PREVIEW", 0, "Preview", "Display preview quality results"},
	{3, "FINAL", 0, "Final", "Display final quality results"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_DomainFluidSettings_viewport_display_mode = {
	{(PropertyRNA *)&rna_DomainFluidSettings_render_display_mode, (PropertyRNA *)&rna_DomainFluidSettings_preview_resolution,
	-1, "viewport_display_mode", 3, "Viewport Display Mode",
	"How to display the mesh in the viewport",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_fluid_update, 0, NULL, NULL,
	0, -1, NULL},
	DomainFluidSettings_viewport_display_mode_get, DomainFluidSettings_viewport_display_mode_set, NULL, NULL, NULL, NULL, rna_DomainFluidSettings_viewport_display_mode_items, 3, 1
};

static EnumPropertyItem rna_DomainFluidSettings_render_display_mode_items[4] = {
	{1, "GEOMETRY", 0, "Geometry", "Display geometry"},
	{2, "PREVIEW", 0, "Preview", "Display preview quality results"},
	{3, "FINAL", 0, "Final", "Display final quality results"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_DomainFluidSettings_render_display_mode = {
	{(PropertyRNA *)&rna_DomainFluidSettings_use_reverse_frames, (PropertyRNA *)&rna_DomainFluidSettings_viewport_display_mode,
	-1, "render_display_mode", 3, "Render Display Mode",
	"How to display the mesh for rendering",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	DomainFluidSettings_render_display_mode_get, DomainFluidSettings_render_display_mode_set, NULL, NULL, NULL, NULL, rna_DomainFluidSettings_render_display_mode_items, 3, 1
};

BoolPropertyRNA rna_DomainFluidSettings_use_reverse_frames = {
	{(PropertyRNA *)&rna_DomainFluidSettings_filepath, (PropertyRNA *)&rna_DomainFluidSettings_render_display_mode,
	-1, "use_reverse_frames", 3, "Reverse Frames",
	"Reverse fluid frames",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_fluid_find_enframe, 0, NULL, NULL,
	0, -1, NULL},
	DomainFluidSettings_use_reverse_frames_get, DomainFluidSettings_use_reverse_frames_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_DomainFluidSettings_filepath = {
	{(PropertyRNA *)&rna_DomainFluidSettings_memory_estimate, (PropertyRNA *)&rna_DomainFluidSettings_use_reverse_frames,
	-1, "filepath", 262145, "Path",
	"Directory (and/or filename prefix) to store baked fluid simulation files in",
	0, "*",
	PROP_STRING, PROP_FILEPATH | PROP_UNIT_NONE, NULL, 0, {1024, 0, 0}, 0,
	rna_fluid_update, 0, NULL, NULL,
	0, -1, NULL},
	DomainFluidSettings_filepath_get, DomainFluidSettings_filepath_length, DomainFluidSettings_filepath_set, NULL, NULL, NULL, 1024, ""
};

StringPropertyRNA rna_DomainFluidSettings_memory_estimate = {
	{(PropertyRNA *)&rna_DomainFluidSettings_gravity, (PropertyRNA *)&rna_DomainFluidSettings_filepath,
	-1, "memory_estimate", 262144, "Memory Estimate",
	"Estimated amount of memory needed for baking the domain",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	DomainFluidSettings_memory_estimate_get, DomainFluidSettings_memory_estimate_length, NULL, NULL, NULL, NULL, 0, ""
};

static float rna_DomainFluidSettings_gravity_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_DomainFluidSettings_gravity = {
	{(PropertyRNA *)&rna_DomainFluidSettings_use_time_override, (PropertyRNA *)&rna_DomainFluidSettings_memory_estimate,
	-1, "gravity", 8195, "Gravity",
	"Gravity in X, Y and Z direction",
	0, "*",
	PROP_FLOAT, PROP_ACCELERATION | PROP_UNIT_ACCELERATION, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL,
	offsetof(FluidsimSettings, grav), 4, NULL},
	NULL, NULL, DomainFluidSettings_gravity_get, DomainFluidSettings_gravity_set, NULL, NULL, NULL, NULL, NULL, NULL, -1000.0999755859f, 1000.0999755859f, -1000.0999755859f, 1000.0999755859f, 10.0f, 3, 0.0f, rna_DomainFluidSettings_gravity_default
};

BoolPropertyRNA rna_DomainFluidSettings_use_time_override = {
	{(PropertyRNA *)&rna_DomainFluidSettings_start_time, (PropertyRNA *)&rna_DomainFluidSettings_gravity,
	-1, "use_time_override", 3, "Override Time",
	"Use a custom start and end time (in seconds) instead of the scene\'s timeline",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	DomainFluidSettings_use_time_override_get, DomainFluidSettings_use_time_override_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_DomainFluidSettings_start_time = {
	{(PropertyRNA *)&rna_DomainFluidSettings_end_time, (PropertyRNA *)&rna_DomainFluidSettings_use_time_override,
	-1, "start_time", 8195, "Start Time",
	"Simulation time of the first blender frame (in seconds)",
	0, "*",
	PROP_FLOAT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(FluidsimSettings, animStart), 4, NULL},
	DomainFluidSettings_start_time_get, DomainFluidSettings_start_time_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_DomainFluidSettings_end_time = {
	{(PropertyRNA *)&rna_DomainFluidSettings_frame_offset, (PropertyRNA *)&rna_DomainFluidSettings_start_time,
	-1, "end_time", 8195, "End Time",
	"Simulation time of the last blender frame (in seconds)",
	0, "*",
	PROP_FLOAT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(FluidsimSettings, animEnd), 4, NULL},
	DomainFluidSettings_end_time_get, DomainFluidSettings_end_time_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_DomainFluidSettings_frame_offset = {
	{(PropertyRNA *)&rna_DomainFluidSettings_simulation_scale, (PropertyRNA *)&rna_DomainFluidSettings_end_time,
	-1, "frame_offset", 8195, "Cache Offset",
	"Offset when reading baked cache",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_fluid_update, 83886080, NULL, NULL,
	offsetof(FluidsimSettings, frameOffset), 0, NULL},
	DomainFluidSettings_frame_offset_get, DomainFluidSettings_frame_offset_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

FloatPropertyRNA rna_DomainFluidSettings_simulation_scale = {
	{(PropertyRNA *)&rna_DomainFluidSettings_simulation_rate, (PropertyRNA *)&rna_DomainFluidSettings_frame_offset,
	-1, "simulation_scale", 8195, "Real World Size",
	"Size of the simulation domain in meters",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(FluidsimSettings, realsize), 4, NULL},
	DomainFluidSettings_simulation_scale_get, DomainFluidSettings_simulation_scale_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0010000000f, 10.0f, 0.0010000000f, 10.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_DomainFluidSettings_simulation_rate = {
	{(PropertyRNA *)&rna_DomainFluidSettings_viscosity_base, (PropertyRNA *)&rna_DomainFluidSettings_simulation_scale,
	-1, "simulation_rate", 8195, "Simulation Speed",
	"Fluid motion rate (0 = stationary, 1 = normal speed)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(FluidsimSettings, animRate), 4, NULL},
	DomainFluidSettings_simulation_rate_get, DomainFluidSettings_simulation_rate_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_DomainFluidSettings_viscosity_base = {
	{(PropertyRNA *)&rna_DomainFluidSettings_viscosity_exponent, (PropertyRNA *)&rna_DomainFluidSettings_simulation_rate,
	-1, "viscosity_base", 8195, "Viscosity Base",
	"Viscosity setting: value that is multiplied by 10 to the power of (exponent*-1)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(FluidsimSettings, viscosityValue), 4, NULL},
	DomainFluidSettings_viscosity_base_get, DomainFluidSettings_viscosity_base_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_DomainFluidSettings_viscosity_exponent = {
	{(PropertyRNA *)&rna_DomainFluidSettings_grid_levels, (PropertyRNA *)&rna_DomainFluidSettings_viscosity_base,
	-1, "viscosity_exponent", 8195, "Viscosity Exponent",
	"Negative exponent for the viscosity value (to simplify entering small values e.g. 5*10^-6)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(FluidsimSettings, viscosityExponent), 1, NULL},
	DomainFluidSettings_viscosity_exponent_get, DomainFluidSettings_viscosity_exponent_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10, 0, 10, 1, 0, NULL
};

IntPropertyRNA rna_DomainFluidSettings_grid_levels = {
	{(PropertyRNA *)&rna_DomainFluidSettings_compressibility, (PropertyRNA *)&rna_DomainFluidSettings_viscosity_exponent,
	-1, "grid_levels", 8193, "Grid Levels",
	"Number of coarsened grids to use (-1 for automatic)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(FluidsimSettings, maxRefine), 0, NULL},
	DomainFluidSettings_grid_levels_get, DomainFluidSettings_grid_levels_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-1, 4, -1, 4, 1, 0, NULL
};

FloatPropertyRNA rna_DomainFluidSettings_compressibility = {
	{(PropertyRNA *)&rna_DomainFluidSettings_slip_type, (PropertyRNA *)&rna_DomainFluidSettings_grid_levels,
	-1, "compressibility", 8193, "Compressibility",
	"Allowed compressibility due to gravitational force for standing fluid (directly affects simulation step size)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(FluidsimSettings, gstar), 4, NULL},
	DomainFluidSettings_compressibility_get, DomainFluidSettings_compressibility_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0010000000f, 0.1000000015f, 0.0010000000f, 0.1000000015f, 10.0f, 3, 0.0f, NULL
};

static EnumPropertyItem rna_DomainFluidSettings_slip_type_items[4] = {
	{512, "NOSLIP", 0, "No Slip", "Obstacle causes zero normal and tangential velocity (=sticky), default for all (only option for moving objects)"},
	{1024, "PARTIALSLIP", 0, "Partial Slip", "Mix between no-slip and free-slip (non moving objects only!)"},
	{2048, "FREESLIP", 0, "Free Slip", "Obstacle only causes zero normal velocity (=not sticky, non moving objects only!)"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_DomainFluidSettings_slip_type = {
	{(PropertyRNA *)&rna_DomainFluidSettings_partial_slip_factor, (PropertyRNA *)&rna_DomainFluidSettings_compressibility,
	-1, "slip_type", 1, "Slip Type",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	DomainFluidSettings_slip_type_get, DomainFluidSettings_slip_type_set, NULL, NULL, NULL, NULL, rna_DomainFluidSettings_slip_type_items, 3, 512
};

FloatPropertyRNA rna_DomainFluidSettings_partial_slip_factor = {
	{(PropertyRNA *)&rna_DomainFluidSettings_surface_smooth, (PropertyRNA *)&rna_DomainFluidSettings_slip_type,
	-1, "partial_slip_factor", 8195, "Partial Slip Amount",
	"Amount of mixing between no- and free-slip, 0 is no slip and 1 is free slip",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(FluidsimSettings, partSlipValue), 4, NULL},
	DomainFluidSettings_partial_slip_factor_get, DomainFluidSettings_partial_slip_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_DomainFluidSettings_surface_smooth = {
	{(PropertyRNA *)&rna_DomainFluidSettings_surface_subdivisions, (PropertyRNA *)&rna_DomainFluidSettings_partial_slip_factor,
	-1, "surface_smooth", 8193, "Surface Smoothing",
	"Amount of surface smoothing (a value of 0 is off, 1 is normal smoothing and more than 1 is extra smoothing)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(FluidsimSettings, surfaceSmoothing), 4, NULL},
	DomainFluidSettings_surface_smooth_get, DomainFluidSettings_surface_smooth_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 5.0f, 0.0f, 5.0f, 10.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_DomainFluidSettings_surface_subdivisions = {
	{(PropertyRNA *)&rna_DomainFluidSettings_use_speed_vectors, (PropertyRNA *)&rna_DomainFluidSettings_surface_smooth,
	-1, "surface_subdivisions", 8193, "Surface Subdivisions",
	"Number of isosurface subdivisions (this is necessary for the inclusion of particles into the surface generation - WARNING: can lead to longer computation times !)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(FluidsimSettings, surfaceSubdivs), 0, NULL},
	DomainFluidSettings_surface_subdivisions_get, DomainFluidSettings_surface_subdivisions_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 5, 0, 5, 1, 0, NULL
};

BoolPropertyRNA rna_DomainFluidSettings_use_speed_vectors = {
	{(PropertyRNA *)&rna_DomainFluidSettings_use_surface_noobs, (PropertyRNA *)&rna_DomainFluidSettings_surface_subdivisions,
	-1, "use_speed_vectors", 8193, "Generate Speed Vectors",
	"Generate speed vectors for vector blur",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(FluidsimSettings, domainNovecgen), 2, NULL},
	DomainFluidSettings_use_speed_vectors_get, DomainFluidSettings_use_speed_vectors_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_DomainFluidSettings_use_surface_noobs = {
	{(PropertyRNA *)&rna_DomainFluidSettings_tracer_particles, (PropertyRNA *)&rna_DomainFluidSettings_use_speed_vectors,
	-1, "use_surface_noobs", 1, "Remove air bubbles",
	"Removes the air gap between fluid surface and obstacles - WARNING: Can result in a dissolving surface in other areas",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	DomainFluidSettings_use_surface_noobs_get, DomainFluidSettings_use_surface_noobs_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_DomainFluidSettings_tracer_particles = {
	{(PropertyRNA *)&rna_DomainFluidSettings_generate_particles, (PropertyRNA *)&rna_DomainFluidSettings_use_surface_noobs,
	-1, "tracer_particles", 8193, "Tracer Particles",
	"Number of tracer particles to generate",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(FluidsimSettings, generateTracers), 0, NULL},
	DomainFluidSettings_tracer_particles_get, DomainFluidSettings_tracer_particles_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, 10000, 1, 0, NULL
};

FloatPropertyRNA rna_DomainFluidSettings_generate_particles = {
	{(PropertyRNA *)&rna_DomainFluidSettings_fluid_mesh_vertices, (PropertyRNA *)&rna_DomainFluidSettings_tracer_particles,
	-1, "generate_particles", 8193, "Generate Particles",
	"Amount of particles to generate (0=off, 1=normal, >1=more)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(FluidsimSettings, generateParticles), 4, NULL},
	DomainFluidSettings_generate_particles_get, DomainFluidSettings_generate_particles_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.0f, NULL
};

CollectionPropertyRNA rna_DomainFluidSettings_fluid_mesh_vertices = {
	{NULL, (PropertyRNA *)&rna_DomainFluidSettings_generate_particles,
	-1, "fluid_mesh_vertices", 16384, "Fluid Mesh Vertices",
	"Vertices of the fluid mesh generated by simulation",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	DomainFluidSettings_fluid_mesh_vertices_begin, DomainFluidSettings_fluid_mesh_vertices_next, DomainFluidSettings_fluid_mesh_vertices_end, DomainFluidSettings_fluid_mesh_vertices_get, rna_FluidMeshVertex_data_length, NULL, NULL, NULL, &RNA_FluidMeshVertex
};

StructRNA RNA_DomainFluidSettings = {
	{(ContainerRNA *)&RNA_FluidMeshVertex, (ContainerRNA *)&RNA_FluidSettings,
	NULL,
	{(PropertyRNA *)&rna_DomainFluidSettings_threads, (PropertyRNA *)&rna_DomainFluidSettings_fluid_mesh_vertices}},
	"DomainFluidSettings", NULL, NULL, 4, "Domain Fluid Simulation Settings",
	"Fluid simulation settings for the domain of a fluid simulation",
	"*", 17,
	NULL, (PropertyRNA *)&rna_FluidSettings_rna_properties,
	&RNA_FluidSettings,
	NULL,
	rna_FluidSettings_refine,
	rna_FluidSettings_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Fluid Mesh Vertex */
CollectionPropertyRNA rna_FluidMeshVertex_rna_properties = {
	{(PropertyRNA *)&rna_FluidMeshVertex_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	FluidMeshVertex_rna_properties_begin, FluidMeshVertex_rna_properties_next, FluidMeshVertex_rna_properties_end, FluidMeshVertex_rna_properties_get, NULL, NULL, FluidMeshVertex_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_FluidMeshVertex_rna_type = {
	{(PropertyRNA *)&rna_FluidMeshVertex_velocity, (PropertyRNA *)&rna_FluidMeshVertex_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	FluidMeshVertex_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static float rna_FluidMeshVertex_velocity_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_FluidMeshVertex_velocity = {
	{NULL, (PropertyRNA *)&rna_FluidMeshVertex_rna_type,
	-1, "velocity", 8194, "Velocity",
	"",
	0, "*",
	PROP_FLOAT, PROP_VELOCITY | PROP_UNIT_VELOCITY, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL,
	offsetof(FluidVertexVelocity, vel), 4, NULL},
	NULL, NULL, FluidMeshVertex_velocity_get, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_FluidMeshVertex_velocity_default
};

StructRNA RNA_FluidMeshVertex = {
	{(ContainerRNA *)&RNA_FluidFluidSettings, (ContainerRNA *)&RNA_DomainFluidSettings,
	NULL,
	{(PropertyRNA *)&rna_FluidMeshVertex_rna_properties, (PropertyRNA *)&rna_FluidMeshVertex_velocity}},
	"FluidMeshVertex", NULL, NULL, 4, "Fluid Mesh Vertex",
	"Vertex of a simulated fluid mesh",
	"*", 546,
	NULL, (PropertyRNA *)&rna_FluidMeshVertex_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Fluid Fluid Simulation Settings */
BoolPropertyRNA rna_FluidFluidSettings_use = {
	{(PropertyRNA *)&rna_FluidFluidSettings_volume_initialization, NULL,
	-1, "use", 3, "Enabled",
	"Object contributes to the fluid simulation",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	FluidFluidSettings_use_get, FluidFluidSettings_use_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_FluidFluidSettings_volume_initialization_items[4] = {
	{1, "VOLUME", 0, "Volume", "Use only the inner volume of the mesh"},
	{2, "SHELL", 0, "Shell", "Use only the outer shell of the mesh"},
	{3, "BOTH", 0, "Both", "Use both the inner volume and the outer shell of the mesh"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FluidFluidSettings_volume_initialization = {
	{(PropertyRNA *)&rna_FluidFluidSettings_use_animated_mesh, (PropertyRNA *)&rna_FluidFluidSettings_use,
	-1, "volume_initialization", 1, "Volume Initialization",
	"Volume initialization type (WARNING: complex volumes might require too much memory and break simulation)",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	FluidFluidSettings_volume_initialization_get, FluidFluidSettings_volume_initialization_set, NULL, NULL, NULL, NULL, rna_FluidFluidSettings_volume_initialization_items, 3, 1
};

BoolPropertyRNA rna_FluidFluidSettings_use_animated_mesh = {
	{(PropertyRNA *)&rna_FluidFluidSettings_initial_velocity, (PropertyRNA *)&rna_FluidFluidSettings_volume_initialization,
	-1, "use_animated_mesh", 8193, "Export Animated Mesh",
	"Export this mesh as an animated one (slower and enforces No Slip, only use if really necessary [e.g. armatures or parented objects], animated pos/rot/scale F-Curves do not require it)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(FluidsimSettings, domainNovecgen), 2, NULL},
	FluidFluidSettings_use_animated_mesh_get, FluidFluidSettings_use_animated_mesh_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static float rna_FluidFluidSettings_initial_velocity_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_FluidFluidSettings_initial_velocity = {
	{NULL, (PropertyRNA *)&rna_FluidFluidSettings_use_animated_mesh,
	-1, "initial_velocity", 8195, "Initial Velocity",
	"Initial velocity of fluid",
	0, "*",
	PROP_FLOAT, PROP_VELOCITY | PROP_UNIT_VELOCITY, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL,
	offsetof(FluidsimSettings, iniVelx), 4, NULL},
	NULL, NULL, FluidFluidSettings_initial_velocity_get, FluidFluidSettings_initial_velocity_set, NULL, NULL, NULL, NULL, NULL, NULL, -1000.0999755859f, 1000.0999755859f, -1000.0999755859f, 1000.0999755859f, 10.0f, 3, 0.0f, rna_FluidFluidSettings_initial_velocity_default
};

StructRNA RNA_FluidFluidSettings = {
	{(ContainerRNA *)&RNA_ObstacleFluidSettings, (ContainerRNA *)&RNA_FluidMeshVertex,
	NULL,
	{(PropertyRNA *)&rna_FluidFluidSettings_use, (PropertyRNA *)&rna_FluidFluidSettings_initial_velocity}},
	"FluidFluidSettings", NULL, NULL, 4, "Fluid Fluid Simulation Settings",
	"Fluid simulation settings for the fluid in the simulation",
	"*", 17,
	NULL, (PropertyRNA *)&rna_FluidSettings_rna_properties,
	&RNA_FluidSettings,
	NULL,
	rna_FluidSettings_refine,
	rna_FluidSettings_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Obstacle Fluid Simulation Settings */
BoolPropertyRNA rna_ObstacleFluidSettings_use = {
	{(PropertyRNA *)&rna_ObstacleFluidSettings_volume_initialization, NULL,
	-1, "use", 3, "Enabled",
	"Object contributes to the fluid simulation",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ObstacleFluidSettings_use_get, ObstacleFluidSettings_use_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_ObstacleFluidSettings_volume_initialization_items[4] = {
	{1, "VOLUME", 0, "Volume", "Use only the inner volume of the mesh"},
	{2, "SHELL", 0, "Shell", "Use only the outer shell of the mesh"},
	{3, "BOTH", 0, "Both", "Use both the inner volume and the outer shell of the mesh"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ObstacleFluidSettings_volume_initialization = {
	{(PropertyRNA *)&rna_ObstacleFluidSettings_use_animated_mesh, (PropertyRNA *)&rna_ObstacleFluidSettings_use,
	-1, "volume_initialization", 1, "Volume Initialization",
	"Volume initialization type (WARNING: complex volumes might require too much memory and break simulation)",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ObstacleFluidSettings_volume_initialization_get, ObstacleFluidSettings_volume_initialization_set, NULL, NULL, NULL, NULL, rna_ObstacleFluidSettings_volume_initialization_items, 3, 1
};

BoolPropertyRNA rna_ObstacleFluidSettings_use_animated_mesh = {
	{(PropertyRNA *)&rna_ObstacleFluidSettings_slip_type, (PropertyRNA *)&rna_ObstacleFluidSettings_volume_initialization,
	-1, "use_animated_mesh", 8193, "Export Animated Mesh",
	"Export this mesh as an animated one (slower and enforces No Slip, only use if really necessary [e.g. armatures or parented objects], animated pos/rot/scale F-Curves do not require it)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(FluidsimSettings, domainNovecgen), 2, NULL},
	ObstacleFluidSettings_use_animated_mesh_get, ObstacleFluidSettings_use_animated_mesh_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_ObstacleFluidSettings_slip_type_items[4] = {
	{512, "NOSLIP", 0, "No Slip", "Obstacle causes zero normal and tangential velocity (=sticky), default for all (only option for moving objects)"},
	{1024, "PARTIALSLIP", 0, "Partial Slip", "Mix between no-slip and free-slip (non moving objects only!)"},
	{2048, "FREESLIP", 0, "Free Slip", "Obstacle only causes zero normal velocity (=not sticky, non moving objects only!)"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ObstacleFluidSettings_slip_type = {
	{(PropertyRNA *)&rna_ObstacleFluidSettings_partial_slip_factor, (PropertyRNA *)&rna_ObstacleFluidSettings_use_animated_mesh,
	-1, "slip_type", 1, "Slip Type",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ObstacleFluidSettings_slip_type_get, ObstacleFluidSettings_slip_type_set, NULL, NULL, NULL, NULL, rna_ObstacleFluidSettings_slip_type_items, 3, 512
};

FloatPropertyRNA rna_ObstacleFluidSettings_partial_slip_factor = {
	{(PropertyRNA *)&rna_ObstacleFluidSettings_impact_factor, (PropertyRNA *)&rna_ObstacleFluidSettings_slip_type,
	-1, "partial_slip_factor", 8195, "Partial Slip Amount",
	"Amount of mixing between no- and free-slip, 0 is no slip and 1 is free slip",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(FluidsimSettings, partSlipValue), 4, NULL},
	ObstacleFluidSettings_partial_slip_factor_get, ObstacleFluidSettings_partial_slip_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ObstacleFluidSettings_impact_factor = {
	{NULL, (PropertyRNA *)&rna_ObstacleFluidSettings_partial_slip_factor,
	-1, "impact_factor", 8193, "Impact Factor",
	"This is an unphysical value for moving objects - it controls the impact an obstacle has on the fluid, =0 behaves a bit like outflow (deleting fluid), =1 is default, while >1 results in high forces (can be used to tweak total mass)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(FluidsimSettings, surfaceSmoothing), 4, NULL},
	ObstacleFluidSettings_impact_factor_get, ObstacleFluidSettings_impact_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -2.0f, 10.0f, -2.0f, 10.0f, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_ObstacleFluidSettings = {
	{(ContainerRNA *)&RNA_InflowFluidSettings, (ContainerRNA *)&RNA_FluidFluidSettings,
	NULL,
	{(PropertyRNA *)&rna_ObstacleFluidSettings_use, (PropertyRNA *)&rna_ObstacleFluidSettings_impact_factor}},
	"ObstacleFluidSettings", NULL, NULL, 4, "Obstacle Fluid Simulation Settings",
	"Fluid simulation settings for obstacles in the simulation",
	"*", 17,
	NULL, (PropertyRNA *)&rna_FluidSettings_rna_properties,
	&RNA_FluidSettings,
	NULL,
	rna_FluidSettings_refine,
	rna_FluidSettings_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Inflow Fluid Simulation Settings */
BoolPropertyRNA rna_InflowFluidSettings_use = {
	{(PropertyRNA *)&rna_InflowFluidSettings_volume_initialization, NULL,
	-1, "use", 3, "Enabled",
	"Object contributes to the fluid simulation",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	InflowFluidSettings_use_get, InflowFluidSettings_use_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_InflowFluidSettings_volume_initialization_items[4] = {
	{1, "VOLUME", 0, "Volume", "Use only the inner volume of the mesh"},
	{2, "SHELL", 0, "Shell", "Use only the outer shell of the mesh"},
	{3, "BOTH", 0, "Both", "Use both the inner volume and the outer shell of the mesh"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_InflowFluidSettings_volume_initialization = {
	{(PropertyRNA *)&rna_InflowFluidSettings_use_animated_mesh, (PropertyRNA *)&rna_InflowFluidSettings_use,
	-1, "volume_initialization", 1, "Volume Initialization",
	"Volume initialization type (WARNING: complex volumes might require too much memory and break simulation)",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	InflowFluidSettings_volume_initialization_get, InflowFluidSettings_volume_initialization_set, NULL, NULL, NULL, NULL, rna_InflowFluidSettings_volume_initialization_items, 3, 1
};

BoolPropertyRNA rna_InflowFluidSettings_use_animated_mesh = {
	{(PropertyRNA *)&rna_InflowFluidSettings_inflow_velocity, (PropertyRNA *)&rna_InflowFluidSettings_volume_initialization,
	-1, "use_animated_mesh", 8193, "Export Animated Mesh",
	"Export this mesh as an animated one (slower and enforces No Slip, only use if really necessary [e.g. armatures or parented objects], animated pos/rot/scale F-Curves do not require it)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(FluidsimSettings, domainNovecgen), 2, NULL},
	InflowFluidSettings_use_animated_mesh_get, InflowFluidSettings_use_animated_mesh_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static float rna_InflowFluidSettings_inflow_velocity_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_InflowFluidSettings_inflow_velocity = {
	{(PropertyRNA *)&rna_InflowFluidSettings_use_local_coords, (PropertyRNA *)&rna_InflowFluidSettings_use_animated_mesh,
	-1, "inflow_velocity", 8195, "Inflow Velocity",
	"Initial velocity of fluid",
	0, "*",
	PROP_FLOAT, PROP_VELOCITY | PROP_UNIT_VELOCITY, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL,
	offsetof(FluidsimSettings, iniVelx), 4, NULL},
	NULL, NULL, InflowFluidSettings_inflow_velocity_get, InflowFluidSettings_inflow_velocity_set, NULL, NULL, NULL, NULL, NULL, NULL, -1000.0999755859f, 1000.0999755859f, -1000.0999755859f, 1000.0999755859f, 10.0f, 3, 0.0f, rna_InflowFluidSettings_inflow_velocity_default
};

BoolPropertyRNA rna_InflowFluidSettings_use_local_coords = {
	{NULL, (PropertyRNA *)&rna_InflowFluidSettings_inflow_velocity,
	-1, "use_local_coords", 1, "Local Coordinates",
	"Use local coordinates for inflow (e.g. for rotating objects)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	InflowFluidSettings_use_local_coords_get, InflowFluidSettings_use_local_coords_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_InflowFluidSettings = {
	{(ContainerRNA *)&RNA_OutflowFluidSettings, (ContainerRNA *)&RNA_ObstacleFluidSettings,
	NULL,
	{(PropertyRNA *)&rna_InflowFluidSettings_use, (PropertyRNA *)&rna_InflowFluidSettings_use_local_coords}},
	"InflowFluidSettings", NULL, NULL, 4, "Inflow Fluid Simulation Settings",
	"Fluid simulation settings for objects adding fluids in the simulation",
	"*", 17,
	NULL, (PropertyRNA *)&rna_FluidSettings_rna_properties,
	&RNA_FluidSettings,
	NULL,
	rna_FluidSettings_refine,
	rna_FluidSettings_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Outflow Fluid Simulation Settings */
BoolPropertyRNA rna_OutflowFluidSettings_use = {
	{(PropertyRNA *)&rna_OutflowFluidSettings_volume_initialization, NULL,
	-1, "use", 3, "Enabled",
	"Object contributes to the fluid simulation",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	OutflowFluidSettings_use_get, OutflowFluidSettings_use_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_OutflowFluidSettings_volume_initialization_items[4] = {
	{1, "VOLUME", 0, "Volume", "Use only the inner volume of the mesh"},
	{2, "SHELL", 0, "Shell", "Use only the outer shell of the mesh"},
	{3, "BOTH", 0, "Both", "Use both the inner volume and the outer shell of the mesh"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_OutflowFluidSettings_volume_initialization = {
	{(PropertyRNA *)&rna_OutflowFluidSettings_use_animated_mesh, (PropertyRNA *)&rna_OutflowFluidSettings_use,
	-1, "volume_initialization", 1, "Volume Initialization",
	"Volume initialization type (WARNING: complex volumes might require too much memory and break simulation)",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	OutflowFluidSettings_volume_initialization_get, OutflowFluidSettings_volume_initialization_set, NULL, NULL, NULL, NULL, rna_OutflowFluidSettings_volume_initialization_items, 3, 1
};

BoolPropertyRNA rna_OutflowFluidSettings_use_animated_mesh = {
	{NULL, (PropertyRNA *)&rna_OutflowFluidSettings_volume_initialization,
	-1, "use_animated_mesh", 8193, "Export Animated Mesh",
	"Export this mesh as an animated one (slower and enforces No Slip, only use if really necessary [e.g. armatures or parented objects], animated pos/rot/scale F-Curves do not require it)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(FluidsimSettings, domainNovecgen), 2, NULL},
	OutflowFluidSettings_use_animated_mesh_get, OutflowFluidSettings_use_animated_mesh_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_OutflowFluidSettings = {
	{(ContainerRNA *)&RNA_ParticleFluidSettings, (ContainerRNA *)&RNA_InflowFluidSettings,
	NULL,
	{(PropertyRNA *)&rna_OutflowFluidSettings_use, (PropertyRNA *)&rna_OutflowFluidSettings_use_animated_mesh}},
	"OutflowFluidSettings", NULL, NULL, 4, "Outflow Fluid Simulation Settings",
	"Fluid simulation settings for objects removing fluids from the simulation",
	"*", 17,
	NULL, (PropertyRNA *)&rna_FluidSettings_rna_properties,
	&RNA_FluidSettings,
	NULL,
	rna_FluidSettings_refine,
	rna_FluidSettings_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Particle Fluid Simulation Settings */
BoolPropertyRNA rna_ParticleFluidSettings_use_drops = {
	{(PropertyRNA *)&rna_ParticleFluidSettings_use_floats, NULL,
	-1, "use_drops", 3, "Drops",
	"Show drop particles",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleFluidSettings_use_drops_get, ParticleFluidSettings_use_drops_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleFluidSettings_use_floats = {
	{(PropertyRNA *)&rna_ParticleFluidSettings_show_tracer, (PropertyRNA *)&rna_ParticleFluidSettings_use_drops,
	-1, "use_floats", 3, "Floats",
	"Show floating foam particles",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleFluidSettings_use_floats_get, ParticleFluidSettings_use_floats_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ParticleFluidSettings_show_tracer = {
	{(PropertyRNA *)&rna_ParticleFluidSettings_particle_influence, (PropertyRNA *)&rna_ParticleFluidSettings_use_floats,
	-1, "show_tracer", 3, "Tracer",
	"Show tracer particles",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleFluidSettings_show_tracer_get, ParticleFluidSettings_show_tracer_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_ParticleFluidSettings_particle_influence = {
	{(PropertyRNA *)&rna_ParticleFluidSettings_alpha_influence, (PropertyRNA *)&rna_ParticleFluidSettings_show_tracer,
	-1, "particle_influence", 8195, "Particle Influence",
	"Amount of particle size scaling: 0=off (all same size), 1=full (range 0.2-2.0), >1=stronger",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(FluidsimSettings, particleInfSize), 4, NULL},
	ParticleFluidSettings_particle_influence_get, ParticleFluidSettings_particle_influence_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 2.0f, 0.0f, 2.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ParticleFluidSettings_alpha_influence = {
	{(PropertyRNA *)&rna_ParticleFluidSettings_filepath, (PropertyRNA *)&rna_ParticleFluidSettings_particle_influence,
	-1, "alpha_influence", 8195, "Alpha Influence",
	"Amount of particle alpha change, inverse of size influence: 0=off (all same alpha), 1=full (larger particles get lower alphas, smaller ones higher values)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(FluidsimSettings, particleInfAlpha), 4, NULL},
	ParticleFluidSettings_alpha_influence_get, ParticleFluidSettings_alpha_influence_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 2.0f, 0.0f, 2.0f, 10.0f, 3, 0.0f, NULL
};

StringPropertyRNA rna_ParticleFluidSettings_filepath = {
	{NULL, (PropertyRNA *)&rna_ParticleFluidSettings_alpha_influence,
	-1, "filepath", 262145, "Path",
	"Directory (and/or filename prefix) to store and load particles from",
	0, "*",
	PROP_STRING, PROP_FILEPATH | PROP_UNIT_NONE, NULL, 0, {1024, 0, 0}, 0,
	rna_fluid_update, 0, NULL, NULL,
	0, -1, NULL},
	ParticleFluidSettings_filepath_get, ParticleFluidSettings_filepath_length, ParticleFluidSettings_filepath_set, NULL, NULL, NULL, 1024, ""
};

StructRNA RNA_ParticleFluidSettings = {
	{(ContainerRNA *)&RNA_ControlFluidSettings, (ContainerRNA *)&RNA_OutflowFluidSettings,
	NULL,
	{(PropertyRNA *)&rna_ParticleFluidSettings_use_drops, (PropertyRNA *)&rna_ParticleFluidSettings_filepath}},
	"ParticleFluidSettings", NULL, NULL, 4, "Particle Fluid Simulation Settings",
	"Fluid simulation settings for objects storing fluid particles generated by the simulation",
	"*", 17,
	NULL, (PropertyRNA *)&rna_FluidSettings_rna_properties,
	&RNA_FluidSettings,
	NULL,
	rna_FluidSettings_refine,
	rna_FluidSettings_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Control Fluid Simulation Settings */
BoolPropertyRNA rna_ControlFluidSettings_use = {
	{(PropertyRNA *)&rna_ControlFluidSettings_start_time, NULL,
	-1, "use", 3, "Enabled",
	"Object contributes to the fluid simulation",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ControlFluidSettings_use_get, ControlFluidSettings_use_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_ControlFluidSettings_start_time = {
	{(PropertyRNA *)&rna_ControlFluidSettings_end_time, (PropertyRNA *)&rna_ControlFluidSettings_use,
	-1, "start_time", 8195, "Start Time",
	"Time when the control particles are activated",
	0, "*",
	PROP_FLOAT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(FluidsimSettings, cpsTimeStart), 4, NULL},
	ControlFluidSettings_start_time_get, ControlFluidSettings_start_time_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ControlFluidSettings_end_time = {
	{(PropertyRNA *)&rna_ControlFluidSettings_attraction_strength, (PropertyRNA *)&rna_ControlFluidSettings_start_time,
	-1, "end_time", 8195, "End Time",
	"Time when the control particles are deactivated",
	0, "*",
	PROP_FLOAT, PROP_TIME | PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(FluidsimSettings, cpsTimeEnd), 4, NULL},
	ControlFluidSettings_end_time_get, ControlFluidSettings_end_time_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ControlFluidSettings_attraction_strength = {
	{(PropertyRNA *)&rna_ControlFluidSettings_attraction_radius, (PropertyRNA *)&rna_ControlFluidSettings_end_time,
	-1, "attraction_strength", 8195, "Attraction Strength",
	"Force strength for directional attraction towards the control object",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(FluidsimSettings, attractforceStrength), 4, NULL},
	ControlFluidSettings_attraction_strength_get, ControlFluidSettings_attraction_strength_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, -10.0f, 10.0f, -10.0f, 10.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ControlFluidSettings_attraction_radius = {
	{(PropertyRNA *)&rna_ControlFluidSettings_velocity_strength, (PropertyRNA *)&rna_ControlFluidSettings_attraction_strength,
	-1, "attraction_radius", 8195, "Attraction Radius",
	"Force field radius around the control object",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(FluidsimSettings, attractforceRadius), 4, NULL},
	ControlFluidSettings_attraction_radius_get, ControlFluidSettings_attraction_radius_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ControlFluidSettings_velocity_strength = {
	{(PropertyRNA *)&rna_ControlFluidSettings_velocity_radius, (PropertyRNA *)&rna_ControlFluidSettings_attraction_radius,
	-1, "velocity_strength", 8195, "Velocity Strength",
	"Force strength of how much of the control object\'s velocity is influencing the fluid velocity",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(FluidsimSettings, velocityforceStrength), 4, NULL},
	ControlFluidSettings_velocity_strength_get, ControlFluidSettings_velocity_strength_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ControlFluidSettings_velocity_radius = {
	{(PropertyRNA *)&rna_ControlFluidSettings_quality, (PropertyRNA *)&rna_ControlFluidSettings_velocity_strength,
	-1, "velocity_radius", 8195, "Velocity Radius",
	"Force field radius around the control object",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(FluidsimSettings, velocityforceRadius), 4, NULL},
	ControlFluidSettings_velocity_radius_get, ControlFluidSettings_velocity_radius_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ControlFluidSettings_quality = {
	{(PropertyRNA *)&rna_ControlFluidSettings_use_reverse_frames, (PropertyRNA *)&rna_ControlFluidSettings_velocity_radius,
	-1, "quality", 8193, "Quality",
	"Quality which is used for object sampling (higher = better but slower)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(FluidsimSettings, cpsQuality), 4, NULL},
	ControlFluidSettings_quality_get, ControlFluidSettings_quality_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 5.0f, 100.0f, 5.0f, 100.0f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_ControlFluidSettings_use_reverse_frames = {
	{NULL, (PropertyRNA *)&rna_ControlFluidSettings_quality,
	-1, "use_reverse_frames", 1, "Reverse Frames",
	"Reverse control object movement",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_fluid_find_enframe, 0, NULL, NULL,
	0, -1, NULL},
	ControlFluidSettings_use_reverse_frames_get, ControlFluidSettings_use_reverse_frames_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_ControlFluidSettings = {
	{(ContainerRNA *)&RNA_GreasePencil, (ContainerRNA *)&RNA_ParticleFluidSettings,
	NULL,
	{(PropertyRNA *)&rna_ControlFluidSettings_use, (PropertyRNA *)&rna_ControlFluidSettings_use_reverse_frames}},
	"ControlFluidSettings", NULL, NULL, 4, "Control Fluid Simulation Settings",
	"Fluid simulation settings for objects controlling the motion of fluid in the simulation",
	"*", 17,
	NULL, (PropertyRNA *)&rna_FluidSettings_rna_properties,
	&RNA_FluidSettings,
	NULL,
	rna_FluidSettings_refine,
	rna_FluidSettings_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

